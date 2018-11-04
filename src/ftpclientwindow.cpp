
#include "ftpclientwindow.h"
#include <QtNetwork>

FtpClientWindow::FtpClientWindow(QWidget *parent, Qt::WFlags flags)
    : QDialog(parent, flags)
{
		setupUi(this);
		ftpClient = new FtpClient(this);
		changeServerCode();
		
		connect(ftpServerCode,SIGNAL(editingFinished()),this,SLOT(changeServerCode()));
		connect(ftpServerLineEdit, SIGNAL(editingFinished ()),
			this, SLOT(changeServerName()));
		connect(ftpServerPortLineEdit, SIGNAL(editingFinished ()),
			this, SLOT(changeServerPort()));
		connect(userNamelineEdit, SIGNAL(editingFinished ()),
			this, SLOT(changeUserName()));
		connect(passWordlineEdit, SIGNAL(editingFinished ()),
			this, SLOT(changePWD()));


		connect(fileList, SIGNAL(itemActivated(QTreeWidgetItem *, int)),
			this, SLOT(processItem(QTreeWidgetItem *)));
		connect(fileList, SIGNAL(currentItemChanged(QTreeWidgetItem *, QTreeWidgetItem *)),
			this, SLOT(switchDownloadButton()));
		connect(connectPB, SIGNAL(clicked()), this, SLOT(ftpConnect()));
		connect(cdUpDirPB, SIGNAL(clicked()), this, SLOT(cdParent()));
		connect(downLoadPB, SIGNAL(clicked()), this, SLOT(downloadFile()));
		connect(upload,SIGNAL(clicked()),this,SLOT(uploadFile()));


		connect(ftpClient, SIGNAL(cmdChangeList(const QUrlInfo &)), 
			this, SLOT(changeList(const QUrlInfo &)));

		connect(ftpClient, SIGNAL(cmdConncted(bool)), 
			this, SLOT(onConnect(bool)));
		connect(ftpClient, SIGNAL(cmdGot(bool)), 
			this, SLOT(onGot(bool)));
		connect(ftpClient, SIGNAL(cmdList(bool)), 
			this, SLOT(onList(bool)));		
		connect(ftpClient, SIGNAL(cmdIsTopDir(bool)), 
			this, SLOT(onTopDir(bool)));

		connect(quitPB, SIGNAL(clicked()), this, SLOT(close()));

}

FtpClientWindow::~FtpClientWindow()
{

}
void FtpClientWindow::changeServerCode()
{
	QString ba=ftpServerCode->text();
	code=ba.toLatin1();
	ftpClient->setserverCode(code);
}
void FtpClientWindow::changeServerName()
{
	ftpClient->setserverName(ftpServerLineEdit->text());
}

void FtpClientWindow::changeServerPort()
{
	ftpClient->setserverPort(ftpServerPortLineEdit->text());
}

void FtpClientWindow::changeUserName()
{
	ftpClient->setuserName(userNamelineEdit->text());
}

void FtpClientWindow::changePWD()
{
	ftpClient->setpassWord(passWordlineEdit->text());
}

void FtpClientWindow::ftpConnect()
{
	changeServerName();
	changeServerPort();
	changeUserName();
	changePWD();
	ftpClient-> ftpConnect();
}

void FtpClientWindow::processItem(QTreeWidgetItem *item)
{	
	QString temp=item->text(0);
	QString test=directory[temp];	
	ftpClient->changeDir(test);
	directory.clear();
	fileList->clear();
}

void FtpClientWindow::cdParent()
{
	directory.clear();
	ftpClient->changeDir("");
	fileList->clear();
}

void FtpClientWindow::switchDownloadButton()
{
	QTreeWidgetItem *current = fileList->currentItem();
	if (current) {
		downLoadPB->setEnabled(!ftpClient->isDir(current->text(0)));
	} else {
		downLoadPB->setEnabled(false);
	}
}

void FtpClientWindow::downloadFile()
{
	QString fileName = directory[fileList->currentItem()->text(0)];
	ftpClient->getFile(fileName);
}

void FtpClientWindow::uploadFile()
{
	ftpClient->putFile();
}

void FtpClientWindow::changeList(const QUrlInfo &urlInfo)
{
	QTreeWidgetItem *item = new QTreeWidgetItem;
	QTextCodec *codec=QTextCodec::codecForName(code);
	QByteArray ba=urlInfo.name().toLatin1();
	QString temp=codec->toUnicode(ba);
	directory[temp]=urlInfo.name();
	item->setText(0, temp);
        item->setText(1, QString::number(urlInfo.size()/1024)+"KB");
        item->setText(2, urlInfo.owner());
        item->setText(3, urlInfo.group());
        item->setText(4, urlInfo.lastModified().toString("MMM dd yyyy"));
	QPixmap pixmap(urlInfo.isDir() ? ":/images/dir.png" : ":/images/file.png");
	item->setIcon(0,pixmap);
	fileList->addTopLevelItem(item);
	if (!fileList->currentItem()) {
		fileList->setCurrentItem(fileList->topLevelItem(0));
		fileList->setEnabled(true);
	}
}

void FtpClientWindow::onConnect(bool isconnect)
{
	if(isconnect){
		fileList->clear();
		fileList->setEnabled(true);
		connectPB->setText(tr("Disconnect"));
		upload->setEnabled(true);
	}
	else{
		fileList->clear();
		fileList->setEnabled(false);
		connectPB->setText(tr("&Connect"));
	}
	statusLab->setText(ftpClient->getStatus());
}

void FtpClientWindow::onGot(bool /*error*/)
{
	switchDownloadButton();
	statusLab->setText(ftpClient->getStatus());
}

void FtpClientWindow::onList(bool error)
{
	if(error){
		fileList->addTopLevelItem(new QTreeWidgetItem(QStringList() << tr("<empty>")));
		fileList->setEnabled(false);
	}
	statusLab->setText(ftpClient->getStatus());
}

void FtpClientWindow::onTopDir(bool istop)
{

	if(istop){
		cdUpDirPB->setEnabled(false);
	}
	else{
		cdUpDirPB->setEnabled(true);
	}
	statusLab->setText(ftpClient->getStatus());
}


