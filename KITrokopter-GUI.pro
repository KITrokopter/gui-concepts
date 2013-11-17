#-------------------------------------------------
#
# Project created by QtCreator 2013-11-10T15:21:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KITrokopter-GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    selectquadrocoptersdialog.cpp \
    calibrationwindow.cpp

HEADERS  += mainwindow.h \
    selectquadrocoptersdialog.h \
    calibrationwindow.h

FORMS    += mainwindow.ui \
    selectquadrocoptersdialog.ui \
    calibrationwindow.ui
