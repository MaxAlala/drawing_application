/****************************************************************************
** Meta object code from reading C++ file 'myserver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myserver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      27,    9,    9,    9, 0x05,
      40,    9,    9,    9, 0x05,
      60,    9,    9,    9, 0x05,
      77,    9,    9,    9, 0x05,
      97,    9,    9,    9, 0x05,
     112,    9,    9,    9, 0x05,
     124,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     147,    9,    9,    9, 0x0a,
     163,    9,    9,    9, 0x0a,
     175,    9,    9,    9, 0x0a,
     194,    9,    9,    9, 0x0a,
     210,    9,    9,    9, 0x0a,
     229,    9,    9,    9, 0x0a,
     243,    9,    9,    9, 0x0a,
     265,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_myserver[] = {
    "myserver\0\0sendprogbar(int)\0sendfinish()\0"
    "sendFlag_mythread()\0sendLog(QString)\0"
    "sendrestartserver()\0sendZ(QString)\0"
    "sendstart()\0sendcurrentRegime(int)\0"
    "getprogbar(int)\0getfinish()\0"
    "getFlag_mythread()\0getLog(QString)\0"
    "getrestartserver()\0getZ(QString)\0"
    "getcurrentRegime(int)\0getstart()\0"
};

void myserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        myserver *_t = static_cast<myserver *>(_o);
        switch (_id) {
        case 0: _t->sendprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendfinish(); break;
        case 2: _t->sendFlag_mythread(); break;
        case 3: _t->sendLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendrestartserver(); break;
        case 5: _t->sendZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendstart(); break;
        case 7: _t->sendcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getfinish(); break;
        case 10: _t->getFlag_mythread(); break;
        case 11: _t->getLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->getrestartserver(); break;
        case 13: _t->getZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->getcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->getstart(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData myserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject myserver::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_myserver,
      qt_meta_data_myserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &myserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *myserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *myserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myserver))
        return static_cast<void*>(const_cast< myserver*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int myserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void myserver::sendprogbar(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myserver::sendfinish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void myserver::sendFlag_mythread()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void myserver::sendLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void myserver::sendrestartserver()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void myserver::sendZ(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void myserver::sendstart()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void myserver::sendcurrentRegime(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
