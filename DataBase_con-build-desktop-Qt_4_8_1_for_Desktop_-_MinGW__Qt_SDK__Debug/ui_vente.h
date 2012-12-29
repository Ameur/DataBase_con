/********************************************************************************
** Form generated from reading UI file 'vente.ui'
**
** Created: Wed 26. Dec 20:25:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTE_H
#define UI_VENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_vente
{
public:
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *vente)
    {
        if (vente->objectName().isEmpty())
            vente->setObjectName(QString::fromUtf8("vente"));
        vente->resize(400, 300);
        commandLinkButton = new QCommandLinkButton(vente);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(310, 250, 81, 41));

        retranslateUi(vente);

        QMetaObject::connectSlotsByName(vente);
    } // setupUi

    void retranslateUi(QDialog *vente)
    {
        vente->setWindowTitle(QApplication::translate("vente", "Dialog", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("vente", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vente: public Ui_vente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTE_H
