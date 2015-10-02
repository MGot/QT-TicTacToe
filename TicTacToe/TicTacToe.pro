#-------------------------------------------------
#
# Project created by QtCreator 2015-10-01T12:38:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app


SOURCES += main.cpp\
        newgamewindow.cpp \
    gamewindow.cpp \
    player.cpp \
    human.cpp \
    cpu.cpp \
    game.cpp

HEADERS  += newgamewindow.h \
    gamewindow.h \
    player.h \
    human.h \
    cpu.h \
    game.h

FORMS    += newgamewindow.ui \
    gamewindow.ui
