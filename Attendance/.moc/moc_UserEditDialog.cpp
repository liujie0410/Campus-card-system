/****************************************************************************
** Meta object code from reading C++ file 'UserEditDialog.h'
**
** Created: Wed Dec 18 14:42:47 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UserEditDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserEditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserEditDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x0a,
      43,   38,   15,   15, 0x0a,
      68,   60,   15,   15, 0x0a,
      98,   88,   15,   15, 0x0a,
     130,  120,   15,   15, 0x0a,
     156,  152,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserEditDialog[] = {
    "UserEditDialog\0\0id\0setCardId(QString)\0"
    "name\0setName(QString)\0classes\0"
    "setClasses(QString)\0dormitory\0"
    "setDormitory(QString)\0studentid\0"
    "setStudentid(QString)\0str\0"
    "onSftKeypadNewString(QString)\0"
};

const QMetaObject UserEditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserEditDialog,
      qt_meta_data_UserEditDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserEditDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserEditDialog))
        return static_cast<void*>(const_cast< UserEditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setCardId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setClasses((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: setDormitory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setStudentid((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: onSftKeypadNewString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
