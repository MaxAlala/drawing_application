/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mythread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mythread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   10,    9,    9, 0x05,
      53,    9,    9,    9, 0x05,
      70,    9,    9,    9, 0x05,
      83,    9,    9,    9, 0x05,
     100,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,    9,    9,    9, 0x0a,
     131,    9,    9,    9, 0x0a,
     146,    9,    9,    9, 0x0a,
     165,    9,    9,    9, 0x0a,
     179,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mythread[] = {
    "mythread\0\0socketerror\0"
    "error(QTcpSocket::SocketError)\0"
    "sendprogbar(int)\0sendfinish()\0"
    "sendLog(QString)\0sendstart()\0"
    "getFlag_mythread()\0disconnected()\0"
    "getrestartserver()\0getZ(QString)\0"
    "getcurrentRegime(int)\0"
};

void mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mythread *_t = static_cast<mythread *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->sendprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendfinish(); break;
        case 3: _t->sendLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendstart(); break;
        case 5: _t->getFlag_mythread(); break;
        case 6: _t->disconnected(); break;
        case 7: _t->getrestartserver(); break;
        case 8: _t->getZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->getcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mythread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mythread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_mythread,
      qt_meta_data_mythread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mythread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mythread))
        return static_cast<void*>(const_cast< mythread*>(this));
    return QThread::qt_metacast(_clname);
}

int mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void mythread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mythread::sendprogbar(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mythread::sendfinish()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void mythread::sendLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mythread::sendstart()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE