/****************************************************************************
** Meta object code from reading C++ file 'QtDatasetConverter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtDatasetConverter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtDatasetConverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDatasetConverter_t {
    QByteArrayData data[10];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDatasetConverter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDatasetConverter_t qt_meta_stringdata_QtDatasetConverter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtDatasetConverter"
QT_MOC_LITERAL(1, 19, 14), // "StopEnumerator"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "OpenDatasetClick"
QT_MOC_LITERAL(4, 52, 27), // "SelectDatasetDirectoryClick"
QT_MOC_LITERAL(5, 80, 10), // "StartClick"
QT_MOC_LITERAL(6, 91, 10), // "AboutClick"
QT_MOC_LITERAL(7, 102, 18), // "EnumeratorFinished"
QT_MOC_LITERAL(8, 121, 25), // "EnumeratorProgressChanged"
QT_MOC_LITERAL(9, 147, 15) // "totalFilesFound"

    },
    "QtDatasetConverter\0StopEnumerator\0\0"
    "OpenDatasetClick\0SelectDatasetDirectoryClick\0"
    "StartClick\0AboutClick\0EnumeratorFinished\0"
    "EnumeratorProgressChanged\0totalFilesFound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDatasetConverter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    9,

       0        // eod
};

void QtDatasetConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtDatasetConverter *_t = static_cast<QtDatasetConverter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StopEnumerator(); break;
        case 1: _t->OpenDatasetClick(); break;
        case 2: _t->SelectDatasetDirectoryClick(); break;
        case 3: _t->StartClick(); break;
        case 4: _t->AboutClick(); break;
        case 5: _t->EnumeratorFinished(); break;
        case 6: _t->EnumeratorProgressChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtDatasetConverter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtDatasetConverter::StopEnumerator)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QtDatasetConverter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtDatasetConverter.data,
      qt_meta_data_QtDatasetConverter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtDatasetConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDatasetConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtDatasetConverter.stringdata0))
        return static_cast<void*>(const_cast< QtDatasetConverter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtDatasetConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtDatasetConverter::StopEnumerator()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
