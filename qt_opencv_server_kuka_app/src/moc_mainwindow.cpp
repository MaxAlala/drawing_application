/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      50,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,
      85,   11,   11,   11, 0x05,
     104,   11,   11,   11, 0x05,
     126,   11,   11,   11, 0x05,
     142,   11,   11,   11, 0x05,
     169,   11,   11,   11, 0x05,
     189,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     203,   11,   11,   11, 0x08,
     222,   11,   11,   11, 0x08,
     241,   11,   11,   11, 0x08,
     263,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     350,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     389,  383,   11,   11, 0x08,
     421,  383,   11,   11, 0x08,
     452,   11,   11,   11, 0x08,
     474,   11,   11,   11, 0x08,
     495,   11,   11,   11, 0x08,
     516,   11,   11,   11, 0x08,
     533,   11,   11,   11, 0x08,
     551,   11,   11,   11, 0x08,
     577,   11,   11,   11, 0x08,
     596,   11,   11,   11, 0x08,
     615,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0sendZ(QString)\0"
    "sendcurrentRegime(int)\0takePortrait()\0"
    "sendFlag_mythread()\0sendtopborder(int)\0"
    "sendbottomborder(int)\0sendregime(int)\0"
    "sendAttachedImageFlag(int)\0"
    "sendrestartserver()\0aboutToQuit()\0"
    "on_start_clicked()\0listenQImg(QImage)\0"
    "on_portrait_clicked()\0on_pushButton_clicked()\0"
    "getprogbar(int)\0getfinish()\0getstart()\0"
    "on_portrait_2_clicked()\0getLog(QString)\0"
    "getLog2(QString)\0value\0"
    "on_sliderdown_valueChanged(int)\0"
    "on_slidertop_valueChanged(int)\0"
    "on_XYregime_clicked()\0on_Yregime_clicked()\0"
    "on_Xregime_clicked()\0on_two_clicked()\0"
    "on_full_clicked()\0on_pushButton_2_clicked()\0"
    "on_clear_clicked()\0on_sendZ_clicked()\0"
    "defaultSettings()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->sendZ((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendcurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->takePortrait(); break;
        case 3: _t->sendFlag_mythread(); break;
        case 4: _t->sendtopborder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendbottomborder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sendregime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sendAttachedImageFlag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sendrestartserver(); break;
        case 9: _t->aboutToQuit(); break;
        case 10: _t->on_start_clicked(); break;
        case 11: _t->listenQImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 12: _t->on_portrait_clicked(); break;
        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->getprogbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->getfinish(); break;
        case 16: _t->getstart(); break;
        case 17: _t->on_portrait_2_clicked(); break;
        case 18: _t->getLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->getLog2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->on_sliderdown_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_slidertop_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_XYregime_clicked(); break;
        case 23: _t->on_Yregime_clicked(); break;
        case 24: _t->on_Xregime_clicked(); break;
        case 25: _t->on_two_clicked(); break;
        case 26: _t->on_full_clicked(); break;
        case 27: _t->on_pushButton_2_clicked(); break;
        case 28: _t->on_clear_clicked(); break;
        case 29: _t->on_sendZ_clicked(); break;
        case 30: _t->defaultSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendZ(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendcurrentRegime(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::takePortrait()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainWindow::sendFlag_mythread()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MainWindow::sendtopborder(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::sendbottomborder(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sendregime(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::sendAttachedImageFlag(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::sendrestartserver()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MainWindow::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
