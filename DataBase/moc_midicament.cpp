/****************************************************************************
** Meta object code from reading C++ file 'midicament.h'
**
** Created: Wed 26. Dec 20:22:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../DataBase_con/DataBase/midicament.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'midicament.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_midicament[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      43,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     176,  171,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     234,   11,   11,   11, 0x08,
     276,  270,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     385,   11,   11,   11, 0x08,
     409,  171,   11,   11, 0x08,
     455,   11,   11,   11, 0x08,
     488,   11,   11,   11, 0x08,
     523,  171,   11,   11, 0x08,
     571,   11,   11,   11, 0x08,
     608,   11,   11,   11, 0x08,
     641,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_midicament[] = {
    "midicament\0\0on_commandLinkButton_clicked()\0"
    "on_commandLinkButton_3_clicked()\0"
    "on_BotAjouterAjouMed_clicked()\0"
    "on_BOTAnnulerAjout_clicked()\0"
    "on_pushButtonRecherchmed_clicked()\0"
    "arg1\0on_reches_currentIndexChanged(QString)\0"
    "on_Med_destroyed()\0"
    "on_pushButtonAffichageMed_clicked()\0"
    "index\0on_listViewAffichageMed_activated(QModelIndex)\0"
    "on_listViewAffichageMed_destroyed()\0"
    "on_textEdit_textChanged()\0"
    "on_pushButton_clicked()\0"
    "on_comboModifMed_currentIndexChanged(QString)\0"
    "on_pushButtonSupModMed_clicked()\0"
    "on_pushButtonModifModMed_clicked()\0"
    "on_lineEditCodee_3_currentIndexChanged(QString)\0"
    "on_comboBoxLib_currentIndexChanged()\0"
    "on_commandLinkButton_2_clicked()\0"
    "on_commandLinkButton_4_clicked()\0"
};

void midicament::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        midicament *_t = static_cast<midicament *>(_o);
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->on_commandLinkButton_3_clicked(); break;
        case 2: _t->on_BotAjouterAjouMed_clicked(); break;
        case 3: _t->on_BOTAnnulerAjout_clicked(); break;
        case 4: _t->on_pushButtonRecherchmed_clicked(); break;
        case 5: _t->on_reches_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Med_destroyed(); break;
        //case 7: _t->on_pushButtonAffichageMed_clicked(); break;
        //case 8: _t->on_listViewAffichageMed_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        //case 9: _t->on_listViewAffichageMed_destroyed(); break;
        //case 10: _t->on_textEdit_textChanged(); break;
        case 11: _t->on_pushButton_clicked(); break;
        //case 12: _t->on_comboModifMed_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_pushButtonSupModMed_clicked(); break;
        case 14: _t->on_pushButtonModifModMed_clicked(); break;
        case 15: _t->on_lineEditCodee_3_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_comboBoxLib_currentIndexChanged(); break;
        case 17: _t->on_commandLinkButton_2_clicked(); break;
        case 18: _t->on_commandLinkButton_4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData midicament::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject midicament::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_midicament,
      qt_meta_data_midicament, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &midicament::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *midicament::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *midicament::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_midicament))
        return static_cast<void*>(const_cast< midicament*>(this));
    return QDialog::qt_metacast(_clname);
}

int midicament::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
