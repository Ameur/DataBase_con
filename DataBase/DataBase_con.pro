#-------------------------------------------------
#
# Project created by QtCreator 2012-12-13T01:40:19
#
#-------------------------------------------------

QT       += core gui sql

TARGET = DataBase
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    menu.cpp \
    midicament.cpp \
    fournisseur.cpp \
    vente.cpp \
    deconnection.cpp

HEADERS  += dialog.h \
    menu.h \
    midicament.h \
    fournisseur.h \
    vente.h \
    deconnection.h

FORMS    += dialog.ui \
    menu.ui \
    midicament.ui \
    fournisseur.ui \
    vente.ui \
    deconnection.ui

RESOURCES += \
    ressources.qrc

OTHER_FILES += \
    ressources/ACCUEIL PHARMACIE(3).jpg
