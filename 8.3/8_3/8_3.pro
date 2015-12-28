QT += core
QT -= gui

CONFIG += c++11

TARGET = 8_1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    tree.cpp

HEADERS += \
    tree.h

DISTFILES += \
    input.txt
