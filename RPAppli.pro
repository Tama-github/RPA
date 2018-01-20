#-------------------------------------------------
#
# Project created by QtCreator 2017-12-09T12:06:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RPAppli
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    ability.cpp \
    characteristic.cpp \
    characteristics.cpp \
    armorpiece.cpp \
    level.cpp \
    xpmanager.cpp \
    bodypart.cpp \
    character.cpp \
    body.cpp \
    inventory.cpp \
    mjboard.cpp \
    src/ability.cpp \
    src/armorpiece.cpp \
    src/body.cpp \
    src/bodypart.cpp \
    src/character.cpp \
    src/characterdescription.cpp \
    src/characteristic.cpp \
    src/characteristics.cpp \
    src/inventory.cpp \
    src/level.cpp \
    src/mjboard.cpp \
    src/wearableobject.cpp \
    src/xpmanager.cpp

HEADERS  += mainwindow.h \
    ability.h \
    characteristic.h \
    characteristics.h \
    armorpiece.h \
    level.h \
    xpmanager.h \
    bodypart.h \
    character.h \
    body.h \
    wearableobject.h \
    inventory.h \
    mjboard.h \
    include/ability.h \
    include/armorpiece.h \
    include/body.h \
    include/bodypart.h \
    include/character.h \
    include/characterdescription.h \
    include/characteristic.h \
    include/characteristics.h \
    include/inventory.h \
    include/level.h \
    include/mjboard.h \
    include/wearableobject.h \
    include/xpmanager.h

FORMS    += mainwindow.ui
