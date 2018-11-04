/****************************************************************************
** Meta object code from reading C++ file 'ftpclient.h'
**
** Created: Tue Oct 20 20:19:20 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ftpclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FtpClient[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      21,   11,   10,   10, 0x05,
      45,   39,   10,   10, 0x05,
      58,   39,   10,   10, 0x05,
      78,   72,   10,   10, 0x05,
      96,   10,   10,   10, 0x05,
     120,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     153,  137,   10,   10, 0x0a,
     203,  182,   10,   10, 0x0a,
     245,   10,   10,   10, 0x0a,
     265,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FtpClient[] = {
    "FtpClient\0\0isconnect\0cmdConncted(bool)\0"
    "error\0cmdGot(bool)\0cmdList(bool)\0istop\0"
    "cmdIsTopDir(bool)\0cmdChangeList(QUrlInfo)\0"
    "cmdDownloading()\0commandId,error\0"
    "ftpCommandFinished(int,bool)\0"
    "readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "addToList(QUrlInfo)\0cancelDownload()\0"
};

const QMetaObject FtpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FtpClient,
      qt_meta_data_FtpClient, 0 }
};

const QMetaObject *FtpClient::metaObject() const
{
    return &staticMetaObject;
}

void *FtpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FtpClient))
        return static_cast<void*>(const_cast< FtpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int FtpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: cmdConncted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: cmdGot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: cmdList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: cmdIsTopDir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: cmdChangeList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 5: cmdDownloading(); break;
        case 6: ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: addToList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 9: cancelDownload(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FtpClient::cmdConncted(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FtpClient::cmdGot(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FtpClient::cmdList(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FtpClient::cmdIsTopDir(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FtpClient::cmdChangeList(const QUrlInfo & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FtpClient::cmdDownloading()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
