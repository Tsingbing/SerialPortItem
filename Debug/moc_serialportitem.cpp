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
    QByteArrayData data[29];
    char stringdata0[304];
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
QT_MOC_LITERAL(8, 121, 8), // "sendMove"
QT_MOC_LITERAL(9, 130, 5), // "speed"
QT_MOC_LITERAL(10, 136, 3), // "dir"
QT_MOC_LITERAL(11, 140, 5), // "light"
QT_MOC_LITERAL(12, 146, 7), // "deepset"
QT_MOC_LITERAL(13, 154, 4), // "roll"
QT_MOC_LITERAL(14, 159, 3), // "yaw"
QT_MOC_LITERAL(15, 163, 9), // "sendState"
QT_MOC_LITERAL(16, 173, 1), // "a"
QT_MOC_LITERAL(17, 175, 1), // "b"
QT_MOC_LITERAL(18, 177, 1), // "c"
QT_MOC_LITERAL(19, 179, 16), // "sendLaserControl"
QT_MOC_LITERAL(20, 196, 16), // "sendSoundControl"
QT_MOC_LITERAL(21, 213, 14), // "sendPictureInf"
QT_MOC_LITERAL(22, 228, 12), // "sendGPSCoord"
QT_MOC_LITERAL(23, 241, 12), // "dataStateAck"
QT_MOC_LITERAL(24, 254, 6), // "fSCode"
QT_MOC_LITERAL(25, 261, 8), // "portName"
QT_MOC_LITERAL(26, 270, 11), // "waitTimeOut"
QT_MOC_LITERAL(27, 282, 9), // "errorInfo"
QT_MOC_LITERAL(28, 292, 11) // "timeoutInfo"

    },
    "SerialPortItem\0dataStateAckChanged\0\0"
    "fSCodeChanged\0portNameChanged\0"
    "waitTimeOutChanged\0errorInfoChanged\0"
    "timeoutInfoChanged\0sendMove\0speed\0dir\0"
    "light\0deepset\0roll\0yaw\0sendState\0a\0b\0"
    "c\0sendLaserControl\0sendSoundControl\0"
    "sendPictureInf\0sendGPSCoord\0dataStateAck\0"
    "fSCode\0portName\0waitTimeOut\0errorInfo\0"
    "timeoutInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPortItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    6,   80,    2, 0x0a /* Public */,
      15,    3,   93,    2, 0x0a /* Public */,
      19,    1,  100,    2, 0x0a /* Public */,
      20,    3,  103,    2, 0x0a /* Public */,
      21,    0,  110,    2, 0x0a /* Public */,
      22,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Short,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   16,   17,   18,
    QMetaType::Void, QMetaType::UChar,   16,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::QString, 0x00495103,
      24, QMetaType::QString, 0x00495103,
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

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
        case 6: _t->sendMove((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< short(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])),(*reinterpret_cast< short(*)>(_a[4])),(*reinterpret_cast< short(*)>(_a[5])),(*reinterpret_cast< short(*)>(_a[6]))); break;
        case 7: _t->sendState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->sendLaserControl((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 9: _t->sendSoundControl((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 10: _t->sendPictureInf(); break;
        case 11: _t->sendGPSCoord(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
