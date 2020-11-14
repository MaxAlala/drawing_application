/****************************************************************************
** Meta object code from reading C++ file 'opencv.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "opencv.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opencv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_opencv[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      25,    7,    7,    7, 0x05,
      36,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,    7,    7,    7, 0x0a,
      78,    7,    7,    7, 0x0a,
      96,    7,    7,    7, 0x0a,
     117,    7,    7,    7, 0x0a,
     132,    7,    7,    7, 0x0a,
     154,    7,    7,    7, 0x0a,
     187,  180,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_opencv[] = {
    "opencv\0\0sendQImg(QImage)\0finished()\0"
    "sendLog2(QString)\0getRequestForPortrait()\0"
    "gettopborder(int)\0getbottomborder(int)\0"
    "getregime(int)\0getCurrentRegime(int)\0"
    "getAttachedImageFlag(int)\0groups\0"
    "saveGroups(vector<vector<cv::Point> >&)\0"
};

void opencv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        opencv *_t = static_cast<opencv *>(_o);
        switch (_id) {
        case 0: _t->sendQImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->sendLog2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getRequestForPortrait(); break;
        case 4: _t->gettopborder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->getbottomborder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->getregime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->getCurrentRegime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->getAttachedImageFlag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->saveGroups((*reinterpret_cast< vector<vector<cv::Point> >(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData opencv::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject opencv::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_opencv,
      qt_meta_data_opencv, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &opencv::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *opencv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *opencv::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_opencv))
        return static_cast<void*>(const_cast< opencv*>(this));
    return QThread::qt_metacast(_clname);
}

int opencv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void opencv::sendQImg(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void opencv::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void opencv::sendLog2(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
