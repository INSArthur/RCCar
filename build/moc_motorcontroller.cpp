/****************************************************************************
** Meta object code from reading C++ file 'motorcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../sdvp_qtcommon/motorcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motorcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MotorController_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MotorController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MotorController_t qt_meta_stringdata_MotorController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MotorController"
QT_MOC_LITERAL(1, 16, 23), // "firmwareVersionReceived"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "QPair<int,int>"
QT_MOC_LITERAL(4, 56, 15), // "gotStatusValues"
QT_MOC_LITERAL(5, 72, 3), // "rpm"
QT_MOC_LITERAL(6, 76, 10), // "tachometer"
QT_MOC_LITERAL(7, 87, 14), // "tachometer_abs"
QT_MOC_LITERAL(8, 102, 12), // "voltageInput"
QT_MOC_LITERAL(9, 115, 11), // "temperature"
QT_MOC_LITERAL(10, 127, 7) // "errorID"

    },
    "MotorController\0firmwareVersionReceived\0"
    "\0QPair<int,int>\0gotStatusValues\0rpm\0"
    "tachometer\0tachometer_abs\0voltageInput\0"
    "temperature\0errorID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MotorController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    6,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Int,    5,    6,    7,    8,    9,   10,

       0        // eod
};

void MotorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotorController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firmwareVersionReceived((*reinterpret_cast< QPair<int,int>(*)>(_a[1]))); break;
        case 1: _t->gotStatusValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotorController::*)(QPair<int,int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorController::firmwareVersionReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MotorController::*)(double , int , int , double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotorController::gotStatusValues)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MotorController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MotorController.data,
    qt_meta_data_MotorController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MotorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MotorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MotorController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MotorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MotorController::firmwareVersionReceived(QPair<int,int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MotorController::gotStatusValues(double _t1, int _t2, int _t3, double _t4, double _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
