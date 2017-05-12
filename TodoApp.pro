#-------------------------------------------------
#
# Project created by QtCreator 2017-05-09T15:23:53
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TodoApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    task.cpp

HEADERS  += mainwindow.h \
    task.h

FORMS    += mainwindow.ui \
    task.ui
