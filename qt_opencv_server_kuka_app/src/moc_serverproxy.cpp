/****************************************************************************
** Meta object code from reading C++ file 'serverproxy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serverproxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_serverproxy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      28,   12,   12,   12, 0x05,
      45,   12,   12,   12, 0x05,
      58,   12,   12,   12, 0x05,
      70,   12,   12,   12, 0x05,
      90,   12,   12,   12, 0x05,
     107,   12,   12,   12, 0x05,
     127,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,   12,   12,   12, 0x0a,
     172,   12,   12,   12, 0x0a,
     186,   12,   12,   12, 0x0a,
     202,   12,   12,   12, 0x0a,
     213,   12,   12,   12, 0x0a,
     225,   12,   12,   12, 0x0a,
     244,   12,   12,   12, 0x0a,
     260,   12,   12,   12, 0x0a,
     279,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_serverproxy[] = {
    "serverproxy\0\0sendZ(QString)\0"
    "sendprogbar(int)\0sendfinish()\0sendstart()\0"
    "sendFlag_mythread()\0sendLog(QString)\0"
    "sendrestartserver()\0sendcurrentRegime(int)\0"
    "getcurrentRegime(int)\0getZ(QString)\0"
    "getprogbar(int)\0getstart()\0getfinish()\0"
    "getFlag_mythread()\0getLog(QString)\0"
    "getrestartserver()\0getabsolutePath()\0"
};

void serverproxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        serverproxy *_t = static_cast<serverproxy *>(_o);
        switch (_id) {
        case 0: _t->sendZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendfinish(); break;
        case 3: _t->sendstart(); break;
        case 4: _t->sendFlag_mythread(); break;
        case 5: _t->sendLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendrestartserver(); break;
        case 7: _t->sendcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->getZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->getprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->getstart(); break;
        case 12: _t->getfinish(); break;
        case 13: _t->getFlag_mythread(); break;
        case 14: _t->getLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->getrestartserver(); break;
        case 16: _t->getabsolutePath(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData serverproxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject serverproxy::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_serverproxy,
      qt_meta_data_serverproxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &serverproxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *serverproxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *serverproxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_serverproxy))
        return static_cast<void*>(const_cast< serverproxy*>(this));
    return QThread::qt_metacast(_clname);
}

int serverproxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void serverproxy::sendZ(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void serverproxy::sendprogbar(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void serverproxy::sendfinish()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void serverproxy::sendstart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void serverproxy::sendFlag_mythread()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void serverproxy::sendLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void serverproxy::sendrestartserver()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void serverproxy::sendcurrentRegime(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
