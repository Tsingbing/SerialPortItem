/****************************************************************************
** Meta object code from reading C++ file 'serialportitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serialportitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialportitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialPortItem_t {
    QByteArrayData data[32];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPortItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPortItem_t qt_meta_stringdata_SerialPortItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SerialPortItem"
QT_MOC_LITERAL(1, 15, 19), // "dataStateAckChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "fSCodeChanged"
QT_MOC_LITERAL(4, 50, 15), // "portNameChanged"
QT_MOC_LITERAL(5, 66, 18), // "waitTimeOutChanged"
QT_MOC_LITERAL(6, 85, 16), // "errorInfoChanged"
QT_MOC_LITERAL(7, 102, 18), // "timeoutInfoChanged"
QT_MOC_LITERAL(8, 121, 17), // "normalInfoChanged"
QT_MOC_LITERAL(9, 139, 4), // "stop"
QT_MOC_LITERAL(10, 144, 8), // "sendMove"
QT_MOC_LITERAL(11, 153, 5), // "speed"
QT_MOC_LITERAL(12, 159, 3), // "dir"
QT_MOC_LITERAL(13, 163, 5), // "light"
QT_MOC_LITERAL(14, 169, 7), // "deepset"
QT_MOC_LITERAL(15, 177, 4), // "roll"
QT_MOC_LITERAL(16, 182, 3), // "yaw"
QT_MOC_LITERAL(17, 186, 9), // "sendState"
QT_MOC_LITERAL(18, 196, 1), // "a"
QT_MOC_LITERAL(19, 198, 1), // "b"
QT_MOC_LITERAL(20, 200, 1), // "c"
QT_MOC_LITERAL(21, 202, 16), // "sendLaserControl"
QT_MOC_LITERAL(22, 219, 16), // "sendSoundControl"
QT_MOC_LITERAL(23, 236, 14), // "sendPictureInf"
QT_MOC_LITERAL(24, 251, 12), // "sendGPSCoord"
QT_MOC_LITERAL(25, 264, 12), // "dataStateAck"
QT_MOC_LITERAL(26, 277, 6), // "fSCode"
QT_MOC_LITERAL(27, 284, 8), // "portName"
QT_MOC_LITERAL(28, 293, 11), // "waitTimeOut"
QT_MOC_LITERAL(29, 305, 9), // "errorInfo"
QT_MOC_LITERAL(30, 315, 11), // "timeoutInfo"
QT_MOC_LITERAL(31, 327, 10) // "normalInfo"

    },
    "SerialPortItem\0dataStateAckChanged\0\0"
    "fSCodeChanged\0portNameChanged\0"
    "waitTimeOutChanged\0errorInfoChanged\0"
    "timeoutInfoChanged\0normalInfoChanged\0"
    "stop\0sendMove\0speed\0dir\0light\0deepset\0"
    "roll\0yaw\0sendState\0a\0b\0c\0sendLaserControl\0"
    "sendSoundControl\0sendPictureInf\0"
    "sendGPSCoord\0dataStateAck\0fSCode\0"
    "portName\0waitTimeOut\0errorInfo\0"
    "timeoutInfo\0normalInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPortItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       7,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x0a /* Public */,
      10,    6,   92,    2, 0x0a /* Public */,
      17,    3,  105,    2, 0x0a /* Public */,
      21,    1,  112,    2, 0x0a /* Public */,
      22,    3,  115,    2, 0x0a /* Public */,
      23,    0,  122,    2, 0x0a /* Public */,
      24,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short,   11,   12,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void, QMetaType::UChar,   18,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,   18,   19,   20,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::QString, 0x00495103,
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::QString, 0x00495103,
      30, QMetaType::QString, 0x00495103,
      31, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void SerialPortItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialPortItem *_t = static_cast<SerialPortItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataStateAckChanged(); break;
        case 1: _t->fSCodeChanged(); break;
        case 2: _t->portNameChanged(); break;
        case 3: _t->waitTimeOutChanged(); break;
        case 4: _t->errorInfoChanged(); break;
        case 5: _t->timeoutInfoChanged(); break;
        case 6: _t->normalInfoChanged(); break;
        case 7: _t->stop(); break;
        case 8: _t->sendMove((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])),(*reinterpret_cast< short(*)>(_a[4])),(*reinterpret_cast< short(*)>(_a[5])),(*reinterpret_cast< short(*)>(_a[6]))); break;
        case 9: _t->sendState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->sendLaserControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 11: _t->sendSoundControl((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 12: _t->sendPictureInf(); break;
        case 13: _t->sendGPSCoord(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::dataStateAckChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::fSCodeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::portNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::waitTimeOutChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::errorInfoChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::timeoutInfoChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SerialPortItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortItem::normalInfoChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SerialPortItem *_t = static_cast<SerialPortItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->dataStateAck(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fSCode(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->portName(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->waitTimeOut(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorInfo(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->timeoutInfo(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->normalInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SerialPortItem *_t = static_cast<SerialPortItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataStateAck(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFSCode(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPortName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setWaitTimeOut(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setErrorInfo(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTimeoutInfo(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setNormalInfo(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SerialPortItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_SerialPortItem.data,
      qt_meta_data_SerialPortItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialPortItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPortItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortItem.stringdata0))
        return static_cast<void*>(const_cast< SerialPortItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int SerialPortItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialPortItem::dataStateAckChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialPortItem::fSCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialPortItem::portNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialPortItem::waitTimeOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialPortItem::errorInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialPortItem::timeoutInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialPortItem::normalInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
