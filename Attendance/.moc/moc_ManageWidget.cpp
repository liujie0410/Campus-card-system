/****************************************************************************
** Meta object code from reading C++ file 'ManageWidget.h'
**
** Created: Tue Dec 31 18:44:43 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ManageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ManageWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x0a,
      43,   13,   13,   13, 0x08,
      65,   13,   13,   13, 0x08,
      89,   13,   13,   13, 0x08,
     112,   13,   13,   13, 0x08,
     132,   13,   13,   13, 0x08,
     153,   13,   13,   13, 0x08,
     173,   13,   13,   13, 0x08,
     196,   13,   13,   13, 0x08,
     221,   13,   13,   13, 0x08,
     239,   13,   13,   13, 0x08,
     256,   13,   13,   13, 0x08,
     280,   13,  272,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ManageWidget[] = {
    "ManageWidget\0\0cardid\0onCardReaded(QString)\0"
    "on_queryBtn_clicked()\0on_refreshBtn_clicked()\0"
    "on_modifyBtn_clicked()\0on_delBtn_clicked()\0"
    "on_delBtn2_clicked()\0on_addBtn_clicked()\0"
    "on_guashiBtn_clicked()\0on_refreshBtn2_clicked()\0"
    "updateUserTable()\0updateLogTable()\0"
    "queryLogTable()\0QString\0input()\0"
};

const QMetaObject ManageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ManageWidget,
      qt_meta_data_ManageWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ManageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ManageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ManageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ManageWidget))
        return static_cast<void*>(const_cast< ManageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ManageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onCardReaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_queryBtn_clicked(); break;
        case 2: on_refreshBtn_clicked(); break;
        case 3: on_modifyBtn_clicked(); break;
        case 4: on_delBtn_clicked(); break;
        case 5: on_delBtn2_clicked(); break;
        case 6: on_addBtn_clicked(); break;
        case 7: on_guashiBtn_clicked(); break;
        case 8: on_refreshBtn2_clicked(); break;
        case 9: updateUserTable(); break;
        case 10: updateLogTable(); break;
        case 11: queryLogTable(); break;
        case 12: { QString _r = input();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
