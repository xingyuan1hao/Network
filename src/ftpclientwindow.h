#ifndef FTPCLIENTWINDOW_H
#define FTPCLIENTWINDOW_H

#include <QtGui>
#include "ui_ftpclientwindow.h"
#include "ftpclient.h"

class QTreeWidgetItem;

class FtpClientWindow : public QDialog,    Ui::FtpClientWindowClass
{
    Q_OBJECT

public:
    FtpClientWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~FtpClientWindow();

public:
	QHash<QString, QString> directory;
	QByteArray code;
	

private slots:
	void changeServerCode();
	void changeServerName();
	void changeServerPort();
	void changeUserName();
	void changePWD();

	void ftpConnect();
	void processItem(QTreeWidgetItem *item);
	void switchDownloadButton();
	void cdParent();
	void downloadFile();
	void uploadFile();

	void changeList(const QUrlInfo &urlInfo);
	void onConnect(bool);
	void onGot(bool);
	void onList(bool);
	void onTopDir(bool);
    void on_ftpServerLineEdit_cursorPositionChanged(int arg1, int arg2);

private:
	FtpClient* ftpClient;

};

#endif // FTPCLIENTWINDOW_H
