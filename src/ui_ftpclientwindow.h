/********************************************************************************
** Form generated from reading ui file 'ftpclientwindow.ui'
**
** Created: Tue Oct 20 20:18:26 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FTPCLIENTWINDOW_H
#define UI_FTPCLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FtpClientWindowClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *fileList;
    QGridLayout *gridLayout;
    QLabel *passWordLab;
    QLabel *ftpServerPortLab;
    QLabel *ftpServerLab;
    QLabel *userNameLab;
    QLabel *statusLab;
    QLineEdit *userNamelineEdit;
    QLineEdit *ftpServerLineEdit;
    QLineEdit *ftpServerPortLineEdit;
    QLineEdit *passWordlineEdit;
    QLabel *encoding;
    QLineEdit *ftpServerCode;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectPB;
    QPushButton *cdUpDirPB;
    QPushButton *downLoadPB;
    QPushButton *upload;
    QPushButton *quitPB;

    void setupUi(QDialog *FtpClientWindowClass)
    {
        if (FtpClientWindowClass->objectName().isEmpty())
            FtpClientWindowClass->setObjectName(QString::fromUtf8("FtpClientWindowClass"));
        FtpClientWindowClass->resize(491, 402);
        FtpClientWindowClass->setModal(true);
        layoutWidget = new QWidget(FtpClientWindowClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 472, 391));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fileList = new QTreeWidget(layoutWidget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        fileList->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(fileList);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setMargin(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        passWordLab = new QLabel(layoutWidget);
        passWordLab->setObjectName(QString::fromUtf8("passWordLab"));

        gridLayout->addWidget(passWordLab, 2, 2, 1, 1);

        ftpServerPortLab = new QLabel(layoutWidget);
        ftpServerPortLab->setObjectName(QString::fromUtf8("ftpServerPortLab"));

        gridLayout->addWidget(ftpServerPortLab, 1, 2, 1, 1);

        ftpServerLab = new QLabel(layoutWidget);
        ftpServerLab->setObjectName(QString::fromUtf8("ftpServerLab"));

        gridLayout->addWidget(ftpServerLab, 1, 0, 1, 1);

        userNameLab = new QLabel(layoutWidget);
        userNameLab->setObjectName(QString::fromUtf8("userNameLab"));

        gridLayout->addWidget(userNameLab, 2, 0, 1, 1);

        statusLab = new QLabel(layoutWidget);
        statusLab->setObjectName(QString::fromUtf8("statusLab"));

        gridLayout->addWidget(statusLab, 0, 0, 1, 2);

        userNamelineEdit = new QLineEdit(layoutWidget);
        userNamelineEdit->setObjectName(QString::fromUtf8("userNamelineEdit"));

        gridLayout->addWidget(userNamelineEdit, 2, 1, 1, 1);

        ftpServerLineEdit = new QLineEdit(layoutWidget);
        ftpServerLineEdit->setObjectName(QString::fromUtf8("ftpServerLineEdit"));

        gridLayout->addWidget(ftpServerLineEdit, 1, 1, 1, 1);

        ftpServerPortLineEdit = new QLineEdit(layoutWidget);
        ftpServerPortLineEdit->setObjectName(QString::fromUtf8("ftpServerPortLineEdit"));

        gridLayout->addWidget(ftpServerPortLineEdit, 1, 3, 1, 1);

        passWordlineEdit = new QLineEdit(layoutWidget);
        passWordlineEdit->setObjectName(QString::fromUtf8("passWordlineEdit"));
        passWordlineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passWordlineEdit, 2, 3, 1, 1);

        encoding = new QLabel(layoutWidget);
        encoding->setObjectName(QString::fromUtf8("encoding"));
        QFont font;
        font.setFamily(QString::fromUtf8("AlArabiya"));
        encoding->setFont(font);
        encoding->setStyleSheet(QString::fromUtf8(""));
        encoding->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(encoding, 0, 2, 1, 1);

        ftpServerCode = new QLineEdit(layoutWidget);
        ftpServerCode->setObjectName(QString::fromUtf8("ftpServerCode"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ftpServerCode->sizePolicy().hasHeightForWidth());
        ftpServerCode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ftpServerCode, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        connectPB = new QPushButton(layoutWidget);
        connectPB->setObjectName(QString::fromUtf8("connectPB"));

        horizontalLayout->addWidget(connectPB);

        cdUpDirPB = new QPushButton(layoutWidget);
        cdUpDirPB->setObjectName(QString::fromUtf8("cdUpDirPB"));
        cdUpDirPB->setEnabled(false);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8(":/images/cdtoparent.png")), QIcon::Normal, QIcon::Off);
        cdUpDirPB->setIcon(icon);

        horizontalLayout->addWidget(cdUpDirPB);

        downLoadPB = new QPushButton(layoutWidget);
        downLoadPB->setObjectName(QString::fromUtf8("downLoadPB"));
        downLoadPB->setEnabled(false);

        horizontalLayout->addWidget(downLoadPB);

        upload = new QPushButton(layoutWidget);
        upload->setObjectName(QString::fromUtf8("upload"));
        upload->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(upload->sizePolicy().hasHeightForWidth());
        upload->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(upload);

        quitPB = new QPushButton(layoutWidget);
        quitPB->setObjectName(QString::fromUtf8("quitPB"));

        horizontalLayout->addWidget(quitPB);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        passWordLab->setBuddy(passWordlineEdit);
        ftpServerPortLab->setBuddy(ftpServerPortLineEdit);
        ftpServerLab->setBuddy(ftpServerLineEdit);
        userNameLab->setBuddy(userNamelineEdit);
        encoding->setBuddy(ftpServerCode);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ftpServerLineEdit, ftpServerPortLineEdit);
        QWidget::setTabOrder(ftpServerPortLineEdit, userNamelineEdit);
        QWidget::setTabOrder(userNamelineEdit, passWordlineEdit);
        QWidget::setTabOrder(passWordlineEdit, connectPB);
        QWidget::setTabOrder(connectPB, cdUpDirPB);
        QWidget::setTabOrder(cdUpDirPB, downLoadPB);
        QWidget::setTabOrder(downLoadPB, quitPB);

        retranslateUi(FtpClientWindowClass);

        QMetaObject::connectSlotsByName(FtpClientWindowClass);
    } // setupUi

    void retranslateUi(QDialog *FtpClientWindowClass)
    {
        FtpClientWindowClass->setWindowTitle(QApplication::translate("FtpClientWindowClass", "ftpClient", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = fileList->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("FtpClientWindowClass", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("FtpClientWindowClass", "Group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("FtpClientWindowClass", "Owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("FtpClientWindowClass", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("FtpClientWindowClass", "Name", 0, QApplication::UnicodeUTF8));
        passWordLab->setText(QApplication::translate("FtpClientWindowClass", "Pa&wd:", 0, QApplication::UnicodeUTF8));
        ftpServerPortLab->setText(QApplication::translate("FtpClientWindowClass", "&Port:", 0, QApplication::UnicodeUTF8));
        ftpServerLab->setText(QApplication::translate("FtpClientWindowClass", "&Server:", 0, QApplication::UnicodeUTF8));
        userNameLab->setText(QApplication::translate("FtpClientWindowClass", "&User:", 0, QApplication::UnicodeUTF8));
        statusLab->setText(QString());
        userNamelineEdit->setText(QApplication::translate("FtpClientWindowClass", "Hlin", 0, QApplication::UnicodeUTF8));
        ftpServerLineEdit->setText(QApplication::translate("FtpClientWindowClass", "192.168.0.8", 0, QApplication::UnicodeUTF8));
        ftpServerPortLineEdit->setText(QApplication::translate("FtpClientWindowClass", "2121", 0, QApplication::UnicodeUTF8));
        passWordlineEdit->setText(QApplication::translate("FtpClientWindowClass", "anonymous", 0, QApplication::UnicodeUTF8));
        encoding->setText(QApplication::translate("FtpClientWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'AlArabiya'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">&amp;Code:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ftpServerCode->setText(QApplication::translate("FtpClientWindowClass", "utf-8", 0, QApplication::UnicodeUTF8));
        connectPB->setText(QApplication::translate("FtpClientWindowClass", "&Connect", 0, QApplication::UnicodeUTF8));
        cdUpDirPB->setText(QString());
        downLoadPB->setText(QApplication::translate("FtpClientWindowClass", "&Download", 0, QApplication::UnicodeUTF8));
        upload->setText(QApplication::translate("FtpClientWindowClass", "&Upload", 0, QApplication::UnicodeUTF8));
        quitPB->setText(QApplication::translate("FtpClientWindowClass", "&Quit", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FtpClientWindowClass);
    } // retranslateUi

};

namespace Ui {
    class FtpClientWindowClass: public Ui_FtpClientWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPCLIENTWINDOW_H
