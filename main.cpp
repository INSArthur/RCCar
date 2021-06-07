#include <QCoreApplication>
#include <QSerialPortInfo>
#include "sdvp_qtcommon/legacy/packetinterfacetcpserver.h"
#include "sdvp_qtcommon/carstate.h"
#include "sdvp_qtcommon/carmovementcontroller.h"
#include "sdvp_qtcommon/gnss/ubloxrover.h"
#include "sdvp_qtcommon/waypointfollower.h"
#include "sdvp_qtcommon/vescmotorcontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // --- VehicleState and lower-level control setup ---
    QSharedPointer<CarState> mCarState(new CarState);
    QSharedPointer<CarMovementController> mCarMovementController(new CarMovementController(mCarState));

    // setup and connect VESC
    QSharedPointer<VESCMotorController> mVESCMotorController(new VESCMotorController());
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    foreach(const QSerialPortInfo &portInfo, ports) {
        if (portInfo.description().toLower().replace("-", "").contains("chibios")) { // assumption: Serial device with ChibiOS in description is VESC
            mVESCMotorController->connectSerial(portInfo);
            qDebug() << "VESCMotorController connected to:" << portInfo.systemLocation();
        }
    }
    if (mVESCMotorController->isSerialConnected()) {
        mCarMovementController->setMotorController(mVESCMotorController);
        mCarMovementController->setServoController(mVESCMotorController->getServoController());
    }

    // --- Positioning setup ---
    // Odometry, TODO: use VESC feedback instead of simulating
    const int mUpdateVehicleStatePeriod_ms = 25;
    QTimer mUpdateVehicleStateTimer;
    QObject::connect(&mUpdateVehicleStateTimer, &QTimer::timeout, [&](){
        mCarState->simulationStep(mUpdateVehicleStatePeriod_ms, PosType::odom);
    });
    mUpdateVehicleStateTimer.start(mUpdateVehicleStatePeriod_ms);

    // GNSS incl. IMU (on u-blox F9R)
    QSharedPointer<UbloxRover> mUbloxRover(new UbloxRover(mCarState));
    foreach(const QSerialPortInfo &portInfo, ports) {
        if (portInfo.manufacturer().toLower().replace("-", "").contains("ublox")) {
            mUbloxRover->connectSerial(portInfo);
            qDebug() << "UbloxRover connected to:" << portInfo.systemLocation();
        }
    }
    QObject::connect(mUbloxRover.get(), &UbloxRover::updatedGNSSPos, [](QSharedPointer<VehicleState> vehicleState) {
        PosPoint posGNSS = vehicleState->getPosition(PosType::GNSS);
        PosPoint posFusedTmp = vehicleState->getPosition(PosType::fused);

        posFusedTmp.setXY(posGNSS.getX(), posGNSS.getY());
        posFusedTmp.setHeight(posGNSS.getHeight());

        // "Fusion" currently means using the GNSS position whenever it is updated and applying odometry on top of it
        // TODO: GNSS position's age should be considered
        vehicleState->setPosition(posFusedTmp);
    });

    // --- Autopilot ---
    QSharedPointer<WaypointFollower> mWaypointFollower(new WaypointFollower(mCarMovementController));

    // TCP/IP communication towards RControlStation
    PacketInterfaceTCPServer mPacketIFServer;
    mPacketIFServer.setVehicleState(mCarState);
    mPacketIFServer.setMovementController(mCarMovementController);
    mPacketIFServer.setUbloxRover(mUbloxRover);
    mPacketIFServer.setWaypointFollower(mWaypointFollower);
    mPacketIFServer.listen();

    qDebug() << "\n" // by hjw                
             << "                    .------.\n"
             << "                    :|||\"\"\"`.`.\n"
             << "                    :|||     7.`.\n"
             << " .===+===+===+===+===||`----L7'-`7`---.._\n"
             << " []                  || ==       |       \"\"\"-.\n"
             << " []...._____.........||........../ _____ ____|\n"
             << "c\\____/,---.\\_       ||_________/ /,---.\\_  _/\n"
             << "  /_,-/ ,-. \\ `._____|__________||/ ,-. \\ \\_[\n"
             << "     /\\ `-' /                    /\\ `-' /\n"
             << "       `---'                       `---'\n";

    return a.exec();
}
