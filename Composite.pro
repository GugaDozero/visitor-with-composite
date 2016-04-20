TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    leaf1.cpp \
    togglecasevisitor.cpp \
    leaf2.cpp \
    composite.cpp

DISTFILES += \
    Composite.pro.user

HEADERS += \
    component.h \
    composite.h \
    ivisitor.h \
    leaf1.h \
    togglecasevisitor.h \
    leaf2.h
