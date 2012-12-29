/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed 26. Dec 20:25:50 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *textuser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtPass;
    QPushButton *btnOk;
    QPushButton *btnClear;
    QLabel *lblstatu;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(447, 110);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textuser = new QLineEdit(Dialog);
        textuser->setObjectName(QString::fromUtf8("textuser"));

        horizontalLayout_2->addWidget(textuser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txtPass = new QLineEdit(Dialog);
        txtPass->setObjectName(QString::fromUtf8("txtPass"));
        txtPass->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txtPass);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 2, 1);

        btnOk = new QPushButton(Dialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        gridLayout->addWidget(btnOk, 0, 1, 1, 1);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        lblstatu = new QLabel(Dialog);
        lblstatu->setObjectName(QString::fromUtf8("lblstatu"));
        lblstatu->setFrameShape(QFrame::Box);
        lblstatu->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(lblstatu, 3, 0, 1, 2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Matricule ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "Password", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("Dialog", "Login", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("Dialog", "Annuler", 0, QApplication::UnicodeUTF8));
        lblstatu->setText(QApplication::translate("Dialog", "[+] Status ...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
