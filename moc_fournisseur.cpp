/****************************************************************************
** Meta object code from reading C++ file 'fournisseur.h'
**
** Created: Wed 26. Dec 20:22:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../DataBase_con/DataBase/fournisseur.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fournisseur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fournisseur[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x08,
      73,   12,   12,   12, 0x08,
      97,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fournisseur[] = {
    "fournisseur\0\0pos\0"
    "on_commandLinkButton_customContextMenuRequested(QPoint)\0"
    "on_pushButton_clicked()\0"
    "on_commandLinkButton_2_clicked()\0"
};

void fournisseur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fournisseur *_t = static_cast<fournisseur *>(_o);
        switch (_id) {
        //case 0: _t->on_commandLinkButton_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        //case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_commandLinkButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fournisseur::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fournisseur::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fournisseur,
      qt_meta_data_fournisseur, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fournisseur::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fournisseur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fournisseur::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fournisseur))
        return static_cast<void*>(const_cast< fournisseur*>(this));
    return QDialog::qt_metacast(_clname);
}

int fournisseur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
