/****************************************************************************
** Meta object code from reading C++ file 'dataprocessthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../collision-warning-system/dataprocessthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataprocessthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataProcessThread_t {
    QByteArrayData data[30];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataProcessThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataProcessThread_t qt_meta_stringdata_DataProcessThread = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DataProcessThread"
QT_MOC_LITERAL(1, 18, 13), // "newComputable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "QList<QJsonObject>"
QT_MOC_LITERAL(4, 52, 11), // "twoMessages"
QT_MOC_LITERAL(5, 64, 30), // "newComputableByAverageFeatures"
QT_MOC_LITERAL(6, 95, 12), // "fourMessages"
QT_MOC_LITERAL(7, 108, 31), // "newComputableByLinearRegression"
QT_MOC_LITERAL(8, 140, 8), // "location"
QT_MOC_LITERAL(9, 149, 10), // "sendResult"
QT_MOC_LITERAL(10, 160, 6), // "result"
QT_MOC_LITERAL(11, 167, 16), // "shouldSendResult"
QT_MOC_LITERAL(12, 184, 10), // "newLogInfo"
QT_MOC_LITERAL(13, 195, 7), // "logInfo"
QT_MOC_LITERAL(14, 203, 13), // "newVehicleOne"
QT_MOC_LITERAL(15, 217, 3), // "lon"
QT_MOC_LITERAL(16, 221, 3), // "lat"
QT_MOC_LITERAL(17, 225, 13), // "newVehicleTwo"
QT_MOC_LITERAL(18, 239, 11), // "timeOutSlot"
QT_MOC_LITERAL(19, 251, 14), // "setRsuLocation"
QT_MOC_LITERAL(20, 266, 11), // "rsuLocation"
QT_MOC_LITERAL(21, 278, 10), // "addMessage"
QT_MOC_LITERAL(22, 289, 4), // "from"
QT_MOC_LITERAL(23, 294, 7), // "message"
QT_MOC_LITERAL(24, 302, 13), // "sendOrNotSend"
QT_MOC_LITERAL(25, 316, 14), // "computerResult"
QT_MOC_LITERAL(26, 331, 8), // "messages"
QT_MOC_LITERAL(27, 340, 31), // "computerResultByAverageFeatures"
QT_MOC_LITERAL(28, 372, 30), // "computerResultByDiscretePoints"
QT_MOC_LITERAL(29, 403, 32) // "computerResultByLinearRegression"

    },
    "DataProcessThread\0newComputable\0\0"
    "QList<QJsonObject>\0twoMessages\0"
    "newComputableByAverageFeatures\0"
    "fourMessages\0newComputableByLinearRegression\0"
    "location\0sendResult\0result\0shouldSendResult\0"
    "newLogInfo\0logInfo\0newVehicleOne\0lon\0"
    "lat\0newVehicleTwo\0timeOutSlot\0"
    "setRsuLocation\0rsuLocation\0addMessage\0"
    "from\0message\0sendOrNotSend\0computerResult\0"
    "messages\0computerResultByAverageFeatures\0"
    "computerResultByDiscretePoints\0"
    "computerResultByLinearRegression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataProcessThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       7,    1,  100,    2, 0x06 /* Public */,
       9,    1,  103,    2, 0x06 /* Public */,
      11,    1,  106,    2, 0x06 /* Public */,
      12,    1,  109,    2, 0x06 /* Public */,
      14,    2,  112,    2, 0x06 /* Public */,
      17,    2,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  122,    2, 0x08 /* Private */,
      19,    1,  123,    2, 0x08 /* Private */,
      21,    2,  126,    2, 0x08 /* Private */,
      24,    1,  131,    2, 0x08 /* Private */,
      25,    1,  134,    2, 0x08 /* Private */,
      27,    1,  137,    2, 0x08 /* Private */,
      28,    1,  140,    2, 0x08 /* Private */,
      29,    1,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   15,   16,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   20,
    QMetaType::Bool, QMetaType::QString, QMetaType::QJsonObject,   22,   23,
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void, 0x80000000 | 3,   26,
    QMetaType::Void, 0x80000000 | 3,   23,
    QMetaType::Void, 0x80000000 | 3,   23,
    QMetaType::Void, 0x80000000 | 3,    8,

       0        // eod
};

void DataProcessThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataProcessThread *_t = static_cast<DataProcessThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newComputable((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 1: _t->newComputableByAverageFeatures((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 2: _t->newComputableByLinearRegression((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 3: _t->sendResult((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 4: _t->shouldSendResult((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 5: _t->newLogInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->newVehicleOne((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 7: _t->newVehicleTwo((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 8: _t->timeOutSlot(); break;
        case 9: _t->setRsuLocation((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 10: { bool _r = _t->addMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->sendOrNotSend((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 12: _t->computerResult((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 13: _t->computerResultByAverageFeatures((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 14: _t->computerResultByDiscretePoints((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        case 15: _t->computerResultByLinearRegression((*reinterpret_cast< const QList<QJsonObject>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QJsonObject> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataProcessThread::*)(const QList<QJsonObject> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newComputable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const QList<QJsonObject> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newComputableByAverageFeatures)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const QList<QJsonObject> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newComputableByLinearRegression)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::sendResult)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::shouldSendResult)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newLogInfo)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const double & , const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newVehicleOne)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataProcessThread::*)(const double & , const double & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataProcessThread::newVehicleTwo)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataProcessThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataProcessThread.data,
      qt_meta_data_DataProcessThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataProcessThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataProcessThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DataProcessThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DataProcessThread::newComputable(const QList<QJsonObject> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataProcessThread::newComputableByAverageFeatures(const QList<QJsonObject> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataProcessThread::newComputableByLinearRegression(const QList<QJsonObject> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataProcessThread::sendResult(const QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataProcessThread::shouldSendResult(const QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataProcessThread::newLogInfo(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataProcessThread::newVehicleOne(const double & _t1, const double & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataProcessThread::newVehicleTwo(const double & _t1, const double & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
