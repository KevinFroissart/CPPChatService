/****************************************************************************
** Meta object code from reading C++ file 'FenClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CPPChatService/Client/FenClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FenClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FenClient_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FenClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FenClient_t qt_meta_stringdata_FenClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FenClient"
QT_MOC_LITERAL(1, 10, 26), // "on_boutonConnexion_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_boutonEnvoyer_clicked"
QT_MOC_LITERAL(4, 63, 24), // "on_message_returnPressed"
QT_MOC_LITERAL(5, 88, 13), // "donneesRecues"
QT_MOC_LITERAL(6, 102, 8), // "connecte"
QT_MOC_LITERAL(7, 111, 10), // "deconnecte"
QT_MOC_LITERAL(8, 122, 12), // "erreurSocket"
QT_MOC_LITERAL(9, 135, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 164, 6) // "erreur"

    },
    "FenClient\0on_boutonConnexion_clicked\0"
    "\0on_boutonEnvoyer_clicked\0"
    "on_message_returnPressed\0donneesRecues\0"
    "connecte\0deconnecte\0erreurSocket\0"
    "QAbstractSocket::SocketError\0erreur"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void FenClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FenClient *_t = static_cast<FenClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_boutonConnexion_clicked(); break;
        case 1: _t->on_boutonEnvoyer_clicked(); break;
        case 2: _t->on_message_returnPressed(); break;
        case 3: _t->donneesRecues(); break;
        case 4: _t->connecte(); break;
        case 5: _t->deconnecte(); break;
        case 6: _t->erreurSocket((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject FenClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FenClient.data,
      qt_meta_data_FenClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FenClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FenClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FenClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
