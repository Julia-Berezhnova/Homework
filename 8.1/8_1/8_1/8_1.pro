QT += core
QT -= gui

CONFIG += c++11

TARGET = 8_1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    arraylist.cpp \
    mergesort.cpp \
    pointerlist.cpp

HEADERS += \
    arraylist.h \
    mergesort.h \
    pointerlist.h

DISTFILES += \
    input.txt \
    input2.txt
