/****************************************************************************
** Meta object code from reading C++ file 'datatypes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../sdvp_qtcommon/legacy/datatypes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datatypes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CAR_STATE_t {
    QByteArrayData data[29];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAR_STATE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAR_STATE_t qt_meta_stringdata_CAR_STATE = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CAR_STATE"
QT_MOC_LITERAL(1, 10, 8), // "fw_major"
QT_MOC_LITERAL(2, 19, 7), // "uint8_t"
QT_MOC_LITERAL(3, 27, 8), // "fw_minor"
QT_MOC_LITERAL(4, 36, 4), // "roll"
QT_MOC_LITERAL(5, 41, 5), // "pitch"
QT_MOC_LITERAL(6, 47, 3), // "yaw"
QT_MOC_LITERAL(7, 51, 5), // "accel"
QT_MOC_LITERAL(8, 57, 13), // "QList<double>"
QT_MOC_LITERAL(9, 71, 4), // "gyro"
QT_MOC_LITERAL(10, 76, 3), // "mag"
QT_MOC_LITERAL(11, 80, 2), // "px"
QT_MOC_LITERAL(12, 83, 2), // "py"
QT_MOC_LITERAL(13, 86, 5), // "speed"
QT_MOC_LITERAL(14, 92, 3), // "vin"
QT_MOC_LITERAL(15, 96, 8), // "temp_fet"
QT_MOC_LITERAL(16, 105, 8), // "mc_fault"
QT_MOC_LITERAL(17, 114, 13), // "mc_fault_code"
QT_MOC_LITERAL(18, 128, 6), // "px_gps"
QT_MOC_LITERAL(19, 135, 6), // "py_gps"
QT_MOC_LITERAL(20, 142, 10), // "ap_goal_px"
QT_MOC_LITERAL(21, 153, 10), // "ap_goal_py"
QT_MOC_LITERAL(22, 164, 6), // "ap_rad"
QT_MOC_LITERAL(23, 171, 8), // "ms_today"
QT_MOC_LITERAL(24, 180, 7), // "int32_t"
QT_MOC_LITERAL(25, 188, 13), // "ap_route_left"
QT_MOC_LITERAL(26, 202, 7), // "int16_t"
QT_MOC_LITERAL(27, 210, 6), // "px_uwb"
QT_MOC_LITERAL(28, 217, 6) // "py_uwb"

    },
    "CAR_STATE\0fw_major\0uint8_t\0fw_minor\0"
    "roll\0pitch\0yaw\0accel\0QList<double>\0"
    "gyro\0mag\0px\0py\0speed\0vin\0temp_fet\0"
    "mc_fault\0mc_fault_code\0px_gps\0py_gps\0"
    "ap_goal_px\0ap_goal_py\0ap_rad\0ms_today\0"
    "int32_t\0ap_route_left\0int16_t\0px_uwb\0"
    "py_uwb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAR_STATE[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      23,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, 0x80000000 | 2, 0x0009500b,
       4, QMetaType::Double, 0x00095003,
       5, QMetaType::Double, 0x00095003,
       6, QMetaType::Double, 0x00095003,
       7, 0x80000000 | 8, 0x00095009,
       9, 0x80000000 | 8, 0x00095009,
      10, 0x80000000 | 8, 0x00095009,
      11, QMetaType::Double, 0x00095003,
      12, QMetaType::Double, 0x00095003,
      13, QMetaType::Double, 0x00095003,
      14, QMetaType::Double, 0x00095003,
      15, QMetaType::Double, 0x00095003,
      16, 0x80000000 | 17, 0x0009500b,
      18, QMetaType::Double, 0x00095003,
      19, QMetaType::Double, 0x00095003,
      20, QMetaType::Double, 0x00095003,
      21, QMetaType::Double, 0x00095003,
      22, QMetaType::Double, 0x00095003,
      23, 0x80000000 | 24, 0x0009500b,
      25, 0x80000000 | 26, 0x0009500b,
      27, QMetaType::Double, 0x00095003,
      28, QMetaType::Double, 0x00095003,

       0        // eod
};

void CAR_STATE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<CAR_STATE *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint8_t*>(_v) = _t->fw_major; break;
        case 1: *reinterpret_cast< uint8_t*>(_v) = _t->fw_minor; break;
        case 2: *reinterpret_cast< double*>(_v) = _t->roll; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->pitch; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->yaw; break;
        case 5: *reinterpret_cast< QList<double>*>(_v) = _t->accelList(); break;
        case 6: *reinterpret_cast< QList<double>*>(_v) = _t->gyroList(); break;
        case 7: *reinterpret_cast< QList<double>*>(_v) = _t->magList(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->px; break;
        case 9: *reinterpret_cast< double*>(_v) = _t->py; break;
        case 10: *reinterpret_cast< double*>(_v) = _t->speed; break;
        case 11: *reinterpret_cast< double*>(_v) = _t->vin; break;
        case 12: *reinterpret_cast< double*>(_v) = _t->temp_fet; break;
        case 13: *reinterpret_cast< mc_fault_code*>(_v) = _t->mc_fault; break;
        case 14: *reinterpret_cast< double*>(_v) = _t->px_gps; break;
        case 15: *reinterpret_cast< double*>(_v) = _t->py_gps; break;
        case 16: *reinterpret_cast< double*>(_v) = _t->ap_goal_px; break;
        case 17: *reinterpret_cast< double*>(_v) = _t->ap_goal_py; break;
        case 18: *reinterpret_cast< double*>(_v) = _t->ap_rad; break;
        case 19: *reinterpret_cast< int32_t*>(_v) = _t->ms_today; break;
        case 20: *reinterpret_cast< int16_t*>(_v) = _t->ap_route_left; break;
        case 21: *reinterpret_cast< double*>(_v) = _t->px_uwb; break;
        case 22: *reinterpret_cast< double*>(_v) = _t->py_uwb; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<CAR_STATE *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->fw_major != *reinterpret_cast< uint8_t*>(_v)) {
                _t->fw_major = *reinterpret_cast< uint8_t*>(_v);
            }
            break;
        case 1:
            if (_t->fw_minor != *reinterpret_cast< uint8_t*>(_v)) {
                _t->fw_minor = *reinterpret_cast< uint8_t*>(_v);
            }
            break;
        case 2:
            if (_t->roll != *reinterpret_cast< double*>(_v)) {
                _t->roll = *reinterpret_cast< double*>(_v);
            }
            break;
        case 3:
            if (_t->pitch != *reinterpret_cast< double*>(_v)) {
                _t->pitch = *reinterpret_cast< double*>(_v);
            }
            break;
        case 4:
            if (_t->yaw != *reinterpret_cast< double*>(_v)) {
                _t->yaw = *reinterpret_cast< double*>(_v);
            }
            break;
        case 8:
            if (_t->px != *reinterpret_cast< double*>(_v)) {
                _t->px = *reinterpret_cast< double*>(_v);
            }
            break;
        case 9:
            if (_t->py != *reinterpret_cast< double*>(_v)) {
                _t->py = *reinterpret_cast< double*>(_v);
            }
            break;
        case 10:
            if (_t->speed != *reinterpret_cast< double*>(_v)) {
                _t->speed = *reinterpret_cast< double*>(_v);
            }
            break;
        case 11:
            if (_t->vin != *reinterpret_cast< double*>(_v)) {
                _t->vin = *reinterpret_cast< double*>(_v);
            }
            break;
        case 12:
            if (_t->temp_fet != *reinterpret_cast< double*>(_v)) {
                _t->temp_fet = *reinterpret_cast< double*>(_v);
            }
            break;
        case 13:
            if (_t->mc_fault != *reinterpret_cast< mc_fault_code*>(_v)) {
                _t->mc_fault = *reinterpret_cast< mc_fault_code*>(_v);
            }
            break;
        case 14:
            if (_t->px_gps != *reinterpret_cast< double*>(_v)) {
                _t->px_gps = *reinterpret_cast< double*>(_v);
            }
            break;
        case 15:
            if (_t->py_gps != *reinterpret_cast< double*>(_v)) {
                _t->py_gps = *reinterpret_cast< double*>(_v);
            }
            break;
        case 16:
            if (_t->ap_goal_px != *reinterpret_cast< double*>(_v)) {
                _t->ap_goal_px = *reinterpret_cast< double*>(_v);
            }
            break;
        case 17:
            if (_t->ap_goal_py != *reinterpret_cast< double*>(_v)) {
                _t->ap_goal_py = *reinterpret_cast< double*>(_v);
            }
            break;
        case 18:
            if (_t->ap_rad != *reinterpret_cast< double*>(_v)) {
                _t->ap_rad = *reinterpret_cast< double*>(_v);
            }
            break;
        case 19:
            if (_t->ms_today != *reinterpret_cast< int32_t*>(_v)) {
                _t->ms_today = *reinterpret_cast< int32_t*>(_v);
            }
            break;
        case 20:
            if (_t->ap_route_left != *reinterpret_cast< int16_t*>(_v)) {
                _t->ap_route_left = *reinterpret_cast< int16_t*>(_v);
            }
            break;
        case 21:
            if (_t->px_uwb != *reinterpret_cast< double*>(_v)) {
                _t->px_uwb = *reinterpret_cast< double*>(_v);
            }
            break;
        case 22:
            if (_t->py_uwb != *reinterpret_cast< double*>(_v)) {
                _t->py_uwb = *reinterpret_cast< double*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject CAR_STATE::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CAR_STATE.data,
    qt_meta_data_CAR_STATE,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
