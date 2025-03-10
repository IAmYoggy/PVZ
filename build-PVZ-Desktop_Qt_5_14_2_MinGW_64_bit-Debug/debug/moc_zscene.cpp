/****************************************************************************
** Meta object code from reading C++ file 'zscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../projectZombie/qtPvz/source/zscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zScene_t {
    QByteArrayData data[5];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zScene_t qt_meta_stringdata_zScene = {
    {
QT_MOC_LITERAL(0, 0, 6), // "zScene"
QT_MOC_LITERAL(1, 7, 7), // "toTitle"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 6), // "toLawn"
QT_MOC_LITERAL(4, 23, 10) // "toDarkLawn"

    },
    "zScene\0toTitle\0\0toLawn\0toDarkLawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toTitle(); break;
        case 1: _t->toLawn(); break;
        case 2: _t->toDarkLawn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (zScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zScene::toTitle)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (zScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zScene::toLawn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (zScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zScene::toDarkLawn)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zScene::staticMetaObject = { {
    QMetaObject::SuperData::link<zObject::staticMetaObject>(),
    qt_meta_stringdata_zScene.data,
    qt_meta_data_zScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zScene.stringdata0))
        return static_cast<void*>(this);
    return zObject::qt_metacast(_clname);
}

int zScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = zObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void zScene::toTitle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void zScene::toLawn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void zScene::toDarkLawn()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_zLawnScene_t {
    QByteArrayData data[4];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zLawnScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zLawnScene_t qt_meta_stringdata_zLawnScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "zLawnScene"
QT_MOC_LITERAL(1, 11, 7), // "onTimer"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5) // "leave"

    },
    "zLawnScene\0onTimer\0\0leave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zLawnScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zLawnScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zLawnScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->leave(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zLawnScene::staticMetaObject = { {
    QMetaObject::SuperData::link<zScene::staticMetaObject>(),
    qt_meta_stringdata_zLawnScene.data,
    qt_meta_data_zLawnScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zLawnScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zLawnScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zLawnScene.stringdata0))
        return static_cast<void*>(this);
    return zScene::qt_metacast(_clname);
}

int zLawnScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = zScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_zDarkScene_t {
    QByteArrayData data[4];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zDarkScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zDarkScene_t qt_meta_stringdata_zDarkScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "zDarkScene"
QT_MOC_LITERAL(1, 11, 7), // "onTimer"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5) // "leave"

    },
    "zDarkScene\0onTimer\0\0leave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zDarkScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zDarkScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zDarkScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->leave(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zDarkScene::staticMetaObject = { {
    QMetaObject::SuperData::link<zScene::staticMetaObject>(),
    qt_meta_stringdata_zDarkScene.data,
    qt_meta_data_zDarkScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zDarkScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zDarkScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zDarkScene.stringdata0))
        return static_cast<void*>(this);
    return zScene::qt_metacast(_clname);
}

int zDarkScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = zScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_zStartScene_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zStartScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zStartScene_t qt_meta_stringdata_zStartScene = {
    {
QT_MOC_LITERAL(0, 0, 11) // "zStartScene"

    },
    "zStartScene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zStartScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void zStartScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zStartScene::staticMetaObject = { {
    QMetaObject::SuperData::link<zScene::staticMetaObject>(),
    qt_meta_stringdata_zStartScene.data,
    qt_meta_data_zStartScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zStartScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zStartScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zStartScene.stringdata0))
        return static_cast<void*>(this);
    return zScene::qt_metacast(_clname);
}

int zStartScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = zScene::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_zStartScreen_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zStartScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zStartScreen_t qt_meta_stringdata_zStartScreen = {
    {
QT_MOC_LITERAL(0, 0, 12), // "zStartScreen"
QT_MOC_LITERAL(1, 13, 7), // "onTimer"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "zStartScreen\0onTimer\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zStartScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void zStartScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zStartScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zStartScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<zScene::staticMetaObject>(),
    qt_meta_stringdata_zStartScreen.data,
    qt_meta_data_zStartScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zStartScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zStartScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zStartScreen.stringdata0))
        return static_cast<void*>(this);
    return zScene::qt_metacast(_clname);
}

int zStartScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = zScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
