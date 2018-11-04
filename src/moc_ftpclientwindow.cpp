/****************************************************************************
** Meta object code from reading C++ file 'ftpclientwindow.h'
**
** Created: Tue Oct 20 20:19:21 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ftpclientwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftpclientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FtpClientWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      36,   16,   16,   16, 0x08,
      55,   16,   16,   16, 0x08,
      74,   16,   16,   16, 0x08,
      91,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,
     121,  116,   16,   16, 0x08,
     151,   16,   16,   16, 0x08,
     174,   16,   16,   16, 0x08,
     185,   16,   16,   16, 0x08,
     200,   16,   16,   16, 0x08,
     221,  213,   16,   16, 0x08,
     242,   16,   16,   16, 0x08,
     258,   16,   16,   16, 0x08,
     270,   16,   16,   16, 0x08,
     283,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FtpClientWindow[] = {
    "FtpClientWindow\0\0changeServerCode()\0"
    "changeServerName()\0changeServerPort()\0"
    "changeUserName()\0changePWD()\0ftpConnect()\0"
    "item\0processItem(QTreeWidgetItem*)\0"
    "switchDownloadButton()\0cdParent()\0"
    "downloadFile()\0uploadFile()\0urlInfo\0"
    "changeList(QUrlInfo)\0onConnect(bool)\0"
    "onGot(bool)\0onList(bool)\0onTopDir(bool)\0"
};

const QMetaObject FtpClientWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FtpClientWindow,
      qt_meta_data_FtpClientWindow, 0 }
};

const QMetaObject *FtpClientWindow::metaObject() const
{
    return &staticMetaObject;
}

void *FtpClientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FtpClientWindow))
        return static_cast<void*>(const_cast< FtpClientWindow*>(this));
    if (!strcmp(_clname, "Ui::FtpClientWindowClass"))
        return static_cast< Ui::FtpClientWindowClass*>(const_cast< FtpClientWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int FtpClientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeServerCode(); break;
        case 1: changeServerName(); break;
        case 2: changeServerPort(); break;
        case 3: changeUserName(); break;
        case 4: changePWD(); break;
        case 5: ftpConnect(); break;
        case 6: processItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: switchDownloadButton(); break;
        case 8: cdParent(); break;
        case 9: downloadFile(); break;
        case 10: uploadFile(); break;
        case 11: changeList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 12: onConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: onGot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: onList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: onTopDir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
