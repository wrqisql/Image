#-------------------------------------------------
#
# Project created by QtCreator 2018-09-07T09:08:25
#
#-------------------------------------------------

QT       += core gui
RC_ICONS += image.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Image
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ImageProcess/HuiDuBianHuan.cpp

HEADERS  += mainwindow.h \
    ImageProcess/HuiDuBianHuan.h

FORMS    += mainwindow.ui

DISTFILES += \
    pic.rc

RESOURCES += \
    res.qrc
