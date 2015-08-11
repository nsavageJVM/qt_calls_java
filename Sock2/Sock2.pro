#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T00:30:58
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sock2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    javasocketconnect.cpp

HEADERS  += mainwindow.h \
    javasocketconnect.h

FORMS    += mainwindow.ui
