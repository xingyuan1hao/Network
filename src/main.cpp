#include <QtGui/QApplication>
#include "ftpclientwindow.h"
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	QTextCodec::setCodecForTr( QTextCodec::codecForName("utf-8"));
    FtpClientWindow wnd;
    wnd.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    return app.exec();
}
