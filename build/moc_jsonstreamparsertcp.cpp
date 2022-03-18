/****************************************************************************
** Meta object code from reading C++ file 'jsonstreamparsertcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../sdvp_qtcommon/jsonstreamparsertcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jsonstreamparsertcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonStreamParserTcp_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonStreamParserTcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonStreamParserTcp_t qt_meta_stringdata_JsonStreamParserTcp = {
    {
QT_MOC_LITERAL(0, 0, 19), // "JsonStreamParserTcp"
QT_MOC_LITERAL(1, 20, 12), // "gotJsonArray"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "jsonArray"
QT_MOC_LITERAL(4, 44, 13), // "gotJsonObject"
QT_MOC_LITERAL(5, 58, 10), // "jsonObject"
QT_MOC_LITERAL(6, 69, 15), // "connectionError"
QT_MOC_LITERAL(7, 85, 23) // "QTcpSocket::SocketError"

    },
    "JsonStreamParserTcp\0gotJsonArray\0\0"
    "jsonArray\0gotJsonObject\0jsonObject\0"
    "connectionError\0QTcpSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonStreamParserTcp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonArray,    3,
    QMetaType::Void, QMetaType::QJsonObject,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void JsonStreamParserTcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonStreamParserTcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotJsonArray((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 1: _t->gotJsonObject((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 2: _t->connectionError((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonStreamParserTcp::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonStreamParserTcp::gotJsonArray)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JsonStreamParserTcp::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonStreamParserTcp::gotJsonObject)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JsonStreamParserTcp::*)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonStreamParserTcp::connectionError)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JsonStreamParserTcp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_JsonStreamParserTcp.data,
    qt_meta_data_JsonStreamParserTcp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JsonStreamParserTcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonStreamParserTcp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonStreamParserTcp.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonStreamParserTcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void JsonStreamParserTcp::gotJsonArray(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonStreamParserTcp::gotJsonObject(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonStreamParserTcp::connectionError(QTcpSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
