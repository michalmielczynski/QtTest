/****************************************************************************
** Meta object code from reading C++ file 'tablewidget.h'
**
** Created: Wed 9. Mar 18:45:28 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tablewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TableWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x0a,
      44,   38,   12,   12, 0x0a,
      70,   38,   62,   12, 0x0a,
      94,   12,   90,   12, 0x0a,
     134,   12,  112,   12, 0x0a,
     148,   12,   12,   12, 0x0a,
     168,  164,   12,   12, 0x0a,
     218,  209,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TableWidget[] = {
    "TableWidget\0\0list\0insert(QStringList)\0"
    "index\0deleteRecord(int)\0QString\0"
    "getSringRecord(int)\0int\0getContactCount()\0"
    "QMap<QString,QString>\0getContacts()\0"
    "clearContacts()\0map\0"
    "insertAllContacts(QMap<QString,QString>)\0"
    "findText\0showLike(QString)\0"
};

const QMetaObject TableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TableWidget,
      qt_meta_data_TableWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TableWidget))
        return static_cast<void*>(const_cast< TableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: insert((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: deleteRecord((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { QString _r = getSringRecord((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { int _r = getContactCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QMap<QString,QString> _r = getContacts();
            if (_a[0]) *reinterpret_cast< QMap<QString,QString>*>(_a[0]) = _r; }  break;
        case 5: clearContacts(); break;
        case 6: insertAllContacts((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 7: showLike((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
