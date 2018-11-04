SOURCES += main.cpp \
 ftpclient.cpp \
 ftpclientwindow.cpp
TEMPLATE = app
CONFIG += warn_on \
	  thread \
          qt
TARGET = ftpclient
DESTDIR = ../bin
HEADERS += ftpclient.h \
ftpclientwindow.h
FORMS += ftpclientwindow.ui

RESOURCES += ftp.qrc

QT += network


