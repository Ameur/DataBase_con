/********************************************************************************
** Form generated from reading UI file 'deconnection.ui'
**
** Created: Wed 26. Dec 20:25:51 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECONNECTION_H
#define UI_DECONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_deconnection
{
public:

    void setupUi(QDialog *deconnection)
    {
        if (deconnection->objectName().isEmpty())
            deconnection->setObjectName(QString::fromUtf8("deconnection"));
        deconnection->resize(400, 300);

        retranslateUi(deconnection);

        QMetaObject::connectSlotsByName(deconnection);
    } // setupUi

    void retranslateUi(QDialog *deconnection)
    {
        deconnection->setWindowTitle(QApplication::translate("deconnection", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class deconnection: public Ui_deconnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECONNECTION_H
