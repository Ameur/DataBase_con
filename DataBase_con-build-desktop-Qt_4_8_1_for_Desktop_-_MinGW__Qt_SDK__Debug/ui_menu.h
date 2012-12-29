/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created: Wed 26. Dec 20:25:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *butmedicam;
    QPushButton *butfourni;
    QPushButton *butvente;
    QPushButton *butDeconnexion;
    QLabel *lbMenu;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(478, 234);
        butmedicam = new QPushButton(Menu);
        butmedicam->setObjectName(QString::fromUtf8("butmedicam"));
        butmedicam->setGeometry(QRect(11, 138, 75, 61));
        butfourni = new QPushButton(Menu);
        butfourni->setObjectName(QString::fromUtf8("butfourni"));
        butfourni->setGeometry(QRect(140, 140, 75, 61));
        butvente = new QPushButton(Menu);
        butvente->setObjectName(QString::fromUtf8("butvente"));
        butvente->setGeometry(QRect(280, 140, 75, 61));
        butDeconnexion = new QPushButton(Menu);
        butDeconnexion->setObjectName(QString::fromUtf8("butDeconnexion"));
        butDeconnexion->setGeometry(QRect(400, 140, 75, 61));
        lbMenu = new QLabel(Menu);
        lbMenu->setObjectName(QString::fromUtf8("lbMenu"));
        lbMenu->setGeometry(QRect(10, 0, 461, 131));
        lbMenu->setFrameShape(QFrame::Box);
        lbMenu->setFrameShadow(QFrame::Raised);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", 0, QApplication::UnicodeUTF8));
        butmedicam->setText(QApplication::translate("Menu", "Medicaments", 0, QApplication::UnicodeUTF8));
        butfourni->setText(QApplication::translate("Menu", "Fournisseurs", 0, QApplication::UnicodeUTF8));
        butvente->setText(QApplication::translate("Menu", "Ventes", 0, QApplication::UnicodeUTF8));
        butDeconnexion->setText(QApplication::translate("Menu", "Deconnecter", 0, QApplication::UnicodeUTF8));
        lbMenu->setText(QApplication::translate("Menu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt; font-weight:600; color:#0000ff;\">Menu</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
