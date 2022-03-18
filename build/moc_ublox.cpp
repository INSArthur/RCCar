/****************************************************************************
** Meta object code from reading C++ file 'ublox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../sdvp_qtcommon/gnss/ublox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ublox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ublox_t {
    QByteArrayData data[55];
    char stringdata0[494];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ublox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ublox_t qt_meta_stringdata_Ublox = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Ublox"
QT_MOC_LITERAL(1, 6, 8), // "rxNavSol"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "ubx_nav_sol"
QT_MOC_LITERAL(4, 28, 3), // "sol"
QT_MOC_LITERAL(5, 32, 8), // "rxNavPvt"
QT_MOC_LITERAL(6, 41, 11), // "ubx_nav_pvt"
QT_MOC_LITERAL(7, 53, 3), // "pvt"
QT_MOC_LITERAL(8, 57, 11), // "rxRelPosNed"
QT_MOC_LITERAL(9, 69, 17), // "ubx_nav_relposned"
QT_MOC_LITERAL(10, 87, 3), // "pos"
QT_MOC_LITERAL(11, 91, 6), // "rxSvin"
QT_MOC_LITERAL(12, 98, 12), // "ubx_nav_svin"
QT_MOC_LITERAL(13, 111, 4), // "svin"
QT_MOC_LITERAL(14, 116, 5), // "rxAck"
QT_MOC_LITERAL(15, 122, 7), // "uint8_t"
QT_MOC_LITERAL(16, 130, 6), // "cls_id"
QT_MOC_LITERAL(17, 137, 6), // "msg_id"
QT_MOC_LITERAL(18, 144, 5), // "rxNak"
QT_MOC_LITERAL(19, 150, 6), // "rxRawx"
QT_MOC_LITERAL(20, 157, 12), // "ubx_rxm_rawx"
QT_MOC_LITERAL(21, 170, 4), // "rawx"
QT_MOC_LITERAL(22, 175, 8), // "rxNavSat"
QT_MOC_LITERAL(23, 184, 11), // "ubx_nav_sat"
QT_MOC_LITERAL(24, 196, 3), // "sat"
QT_MOC_LITERAL(25, 200, 9), // "rxCfgGnss"
QT_MOC_LITERAL(26, 210, 12), // "ubx_cfg_gnss"
QT_MOC_LITERAL(27, 223, 4), // "gnss"
QT_MOC_LITERAL(28, 228, 11), // "rxCfgValget"
QT_MOC_LITERAL(29, 240, 14), // "ubx_cfg_valget"
QT_MOC_LITERAL(30, 255, 6), // "valget"
QT_MOC_LITERAL(31, 262, 9), // "rxEsfMeas"
QT_MOC_LITERAL(32, 272, 12), // "ubx_esf_meas"
QT_MOC_LITERAL(33, 285, 4), // "meas"
QT_MOC_LITERAL(34, 290, 11), // "rxEsfStatus"
QT_MOC_LITERAL(35, 302, 14), // "ubx_esf_status"
QT_MOC_LITERAL(36, 317, 6), // "status"
QT_MOC_LITERAL(37, 324, 8), // "rxEsfAlg"
QT_MOC_LITERAL(38, 333, 11), // "ubx_esf_alg"
QT_MOC_LITERAL(39, 345, 3), // "alg"
QT_MOC_LITERAL(40, 349, 8), // "rxMonVer"
QT_MOC_LITERAL(41, 358, 2), // "sw"
QT_MOC_LITERAL(42, 361, 2), // "hw"
QT_MOC_LITERAL(43, 364, 10), // "extensions"
QT_MOC_LITERAL(44, 375, 5), // "ubxRx"
QT_MOC_LITERAL(45, 381, 4), // "data"
QT_MOC_LITERAL(46, 386, 6), // "rtcmRx"
QT_MOC_LITERAL(47, 393, 4), // "type"
QT_MOC_LITERAL(48, 398, 8), // "rxUpdSos"
QT_MOC_LITERAL(49, 407, 11), // "ubx_upd_sos"
QT_MOC_LITERAL(50, 419, 3), // "sos"
QT_MOC_LITERAL(51, 423, 19), // "serialDataAvailable"
QT_MOC_LITERAL(52, 443, 15), // "serialPortError"
QT_MOC_LITERAL(53, 459, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(54, 488, 5) // "error"

    },
    "Ublox\0rxNavSol\0\0ubx_nav_sol\0sol\0"
    "rxNavPvt\0ubx_nav_pvt\0pvt\0rxRelPosNed\0"
    "ubx_nav_relposned\0pos\0rxSvin\0ubx_nav_svin\0"
    "svin\0rxAck\0uint8_t\0cls_id\0msg_id\0rxNak\0"
    "rxRawx\0ubx_rxm_rawx\0rawx\0rxNavSat\0"
    "ubx_nav_sat\0sat\0rxCfgGnss\0ubx_cfg_gnss\0"
    "gnss\0rxCfgValget\0ubx_cfg_valget\0valget\0"
    "rxEsfMeas\0ubx_esf_meas\0meas\0rxEsfStatus\0"
    "ubx_esf_status\0status\0rxEsfAlg\0"
    "ubx_esf_alg\0alg\0rxMonVer\0sw\0hw\0"
    "extensions\0ubxRx\0data\0rtcmRx\0type\0"
    "rxUpdSos\0ubx_upd_sos\0sos\0serialDataAvailable\0"
    "serialPortError\0QSerialPort::SerialPortError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ublox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       5,    1,  112,    2, 0x06 /* Public */,
       8,    1,  115,    2, 0x06 /* Public */,
      11,    1,  118,    2, 0x06 /* Public */,
      14,    2,  121,    2, 0x06 /* Public */,
      18,    2,  126,    2, 0x06 /* Public */,
      19,    1,  131,    2, 0x06 /* Public */,
      22,    1,  134,    2, 0x06 /* Public */,
      25,    1,  137,    2, 0x06 /* Public */,
      28,    1,  140,    2, 0x06 /* Public */,
      31,    1,  143,    2, 0x06 /* Public */,
      34,    1,  146,    2, 0x06 /* Public */,
      37,    1,  149,    2, 0x06 /* Public */,
      40,    3,  152,    2, 0x06 /* Public */,
      44,    1,  159,    2, 0x06 /* Public */,
      46,    2,  162,    2, 0x06 /* Public */,
      48,    1,  167,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  170,    2, 0x08 /* Private */,
      52,    1,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   41,   42,   43,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   45,   47,
    QMetaType::Void, 0x80000000 | 49,   50,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   54,

       0        // eod
};

void Ublox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ublox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rxNavSol((*reinterpret_cast< const ubx_nav_sol(*)>(_a[1]))); break;
        case 1: _t->rxNavPvt((*reinterpret_cast< const ubx_nav_pvt(*)>(_a[1]))); break;
        case 2: _t->rxRelPosNed((*reinterpret_cast< const ubx_nav_relposned(*)>(_a[1]))); break;
        case 3: _t->rxSvin((*reinterpret_cast< const ubx_nav_svin(*)>(_a[1]))); break;
        case 4: _t->rxAck((*reinterpret_cast< const uint8_t(*)>(_a[1])),(*reinterpret_cast< const uint8_t(*)>(_a[2]))); break;
        case 5: _t->rxNak((*reinterpret_cast< const uint8_t(*)>(_a[1])),(*reinterpret_cast< const uint8_t(*)>(_a[2]))); break;
        case 6: _t->rxRawx((*reinterpret_cast< const ubx_rxm_rawx(*)>(_a[1]))); break;
        case 7: _t->rxNavSat((*reinterpret_cast< const ubx_nav_sat(*)>(_a[1]))); break;
        case 8: _t->rxCfgGnss((*reinterpret_cast< const ubx_cfg_gnss(*)>(_a[1]))); break;
        case 9: _t->rxCfgValget((*reinterpret_cast< const ubx_cfg_valget(*)>(_a[1]))); break;
        case 10: _t->rxEsfMeas((*reinterpret_cast< const ubx_esf_meas(*)>(_a[1]))); break;
        case 11: _t->rxEsfStatus((*reinterpret_cast< const ubx_esf_status(*)>(_a[1]))); break;
        case 12: _t->rxEsfAlg((*reinterpret_cast< const ubx_esf_alg(*)>(_a[1]))); break;
        case 13: _t->rxMonVer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 14: _t->ubxRx((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 15: _t->rtcmRx((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 16: _t->rxUpdSos((*reinterpret_cast< const ubx_upd_sos(*)>(_a[1]))); break;
        case 17: _t->serialDataAvailable(); break;
        case 18: _t->serialPortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ublox::*)(const ubx_nav_sol & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxNavSol)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_nav_pvt & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxNavPvt)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_nav_relposned & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxRelPosNed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_nav_svin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxSvin)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const uint8_t & , const uint8_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxAck)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const uint8_t & , const uint8_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxNak)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_rxm_rawx & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxRawx)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_nav_sat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxNavSat)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_cfg_gnss & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxCfgGnss)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_cfg_valget & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxCfgValget)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_esf_meas & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxEsfMeas)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_esf_status & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxEsfStatus)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_esf_alg & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxEsfAlg)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const QString & , const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxMonVer)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::ubxRx)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const QByteArray & , const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rtcmRx)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Ublox::*)(const ubx_upd_sos & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ublox::rxUpdSos)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ublox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Ublox.data,
    qt_meta_data_Ublox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ublox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ublox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ublox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ublox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Ublox::rxNavSol(const ubx_nav_sol & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Ublox::rxNavPvt(const ubx_nav_pvt & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Ublox::rxRelPosNed(const ubx_nav_relposned & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Ublox::rxSvin(const ubx_nav_svin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Ublox::rxAck(const uint8_t & _t1, const uint8_t & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Ublox::rxNak(const uint8_t & _t1, const uint8_t & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Ublox::rxRawx(const ubx_rxm_rawx & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Ublox::rxNavSat(const ubx_nav_sat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Ublox::rxCfgGnss(const ubx_cfg_gnss & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Ublox::rxCfgValget(const ubx_cfg_valget & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Ublox::rxEsfMeas(const ubx_esf_meas & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Ublox::rxEsfStatus(const ubx_esf_status & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Ublox::rxEsfAlg(const ubx_esf_alg & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Ublox::rxMonVer(const QString & _t1, const QString & _t2, const QStringList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Ublox::ubxRx(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Ublox::rtcmRx(const QByteArray & _t1, const int & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Ublox::rxUpdSos(const ubx_upd_sos & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
