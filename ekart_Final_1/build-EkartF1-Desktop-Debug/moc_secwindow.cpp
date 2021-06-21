/****************************************************************************
** Meta object code from reading C++ file 'secwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EkartF1/secwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecWindow_t {
    QByteArrayData data[14];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SecWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SecWindow_t qt_meta_stringdata_SecWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SecWindow"
QT_MOC_LITERAL(1, 10, 19), // "on_left_btt_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "on_logout_btt_clicked"
QT_MOC_LITERAL(4, 53, 19), // "on_horn_btt_clicked"
QT_MOC_LITERAL(5, 73, 20), // "on_rever_btt_clicked"
QT_MOC_LITERAL(6, 94, 17), // "on_cr_btt_clicked"
QT_MOC_LITERAL(7, 112, 4), // "buzz"
QT_MOC_LITERAL(8, 117, 5), // "right"
QT_MOC_LITERAL(9, 123, 4), // "left"
QT_MOC_LITERAL(10, 128, 20), // "on_right_btt_clicked"
QT_MOC_LITERAL(11, 149, 11), // "receivedata"
QT_MOC_LITERAL(12, 161, 9), // "testprint"
QT_MOC_LITERAL(13, 171, 12) // "QSerialPort*"

    },
    "SecWindow\0on_left_btt_clicked\0\0"
    "on_logout_btt_clicked\0on_horn_btt_clicked\0"
    "on_rever_btt_clicked\0on_cr_btt_clicked\0"
    "buzz\0right\0left\0on_right_btt_clicked\0"
    "receivedata\0testprint\0QSerialPort*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void SecWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SecWindow *_t = static_cast<SecWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_left_btt_clicked(); break;
        case 1: _t->on_logout_btt_clicked(); break;
        case 2: _t->on_horn_btt_clicked(); break;
        case 3: _t->on_rever_btt_clicked(); break;
        case 4: _t->on_cr_btt_clicked(); break;
        case 5: _t->buzz(); break;
        case 6: _t->right(); break;
        case 7: _t->left(); break;
        case 8: _t->on_right_btt_clicked(); break;
        case 9: _t->receivedata(); break;
        case 10: _t->testprint((*reinterpret_cast< QSerialPort*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSerialPort* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SecWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SecWindow.data,
      qt_meta_data_SecWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SecWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SecWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
