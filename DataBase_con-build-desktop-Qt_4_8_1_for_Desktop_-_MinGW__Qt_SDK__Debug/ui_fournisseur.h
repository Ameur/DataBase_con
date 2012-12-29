/********************************************************************************
** Form generated from reading UI file 'fournisseur.ui'
**
** Created: Wed 26. Dec 20:25:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURNISSEUR_H
#define UI_FOURNISSEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fournisseur
{
public:
    QTabWidget *four;
    QWidget *tab;
    QCommandLinkButton *commandLinkButton_2;
    QWidget *tab_2;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *fournisseur)
    {
        if (fournisseur->objectName().isEmpty())
            fournisseur->setObjectName(QString::fromUtf8("fournisseur"));
        fournisseur->resize(557, 278);
        four = new QTabWidget(fournisseur);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(0, 0, 561, 281));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        commandLinkButton_2 = new QCommandLinkButton(tab);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(460, 210, 81, 41));
        four->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        commandLinkButton = new QCommandLinkButton(tab_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(470, 210, 81, 36));
        four->addTab(tab_2, QString());

        retranslateUi(fournisseur);

        four->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fournisseur);
    } // setupUi

    void retranslateUi(QDialog *fournisseur)
    {
        fournisseur->setWindowTitle(QApplication::translate("fournisseur", "Dialog", 0, QApplication::UnicodeUTF8));
        commandLinkButton_2->setText(QApplication::translate("fournisseur", "Menu", 0, QApplication::UnicodeUTF8));
        four->setTabText(four->indexOf(tab), QApplication::translate("fournisseur", "Ajouter", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("fournisseur", "Menu", 0, QApplication::UnicodeUTF8));
        four->setTabText(four->indexOf(tab_2), QApplication::translate("fournisseur", "Supprimer/Modifier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fournisseur: public Ui_fournisseur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURNISSEUR_H
