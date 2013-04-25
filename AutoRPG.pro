#-------------------------------------------------
#
# Project created by QtCreator 2013-04-21T18:46:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AutoRPG
TEMPLATE = app


SOURCES += main.cpp\
        autorpg.cpp \
    newcharacter.cpp \
    character.cpp \
    namegenerator.cpp \
    game.cpp \
    item.cpp \
    creature.cpp \
    eventsgenerator.cpp

HEADERS  += autorpg.h \
    newcharacter.h \
    character.h \
    namegenerator.h \
    game.h \
    item.h \
    creature.h \
    eventsgenerator.h

FORMS    += autorpg.ui \
    newcharacter.ui

RESOURCES = res.qrc

