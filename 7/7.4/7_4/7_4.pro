QT += core
QT -= gui

CONFIG += c++11

TARGET = 7_4
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    stack.cpp \
    count.cpp

HEADERS += \
    stack.h \
    count.h

DISTFILES += \
