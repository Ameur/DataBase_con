/********************************************************************************
** Form generated from reading UI file 'vente.ui'
**
** Created: Sat 29. Dec 01:09:48 2012
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
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vente
{
public:
    QWidget *widget;
    QFrame *line_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpinBox *spinBox_2;
    QWidget *widget_2;
    QTableWidget *tablesomme;
    QLineEdit *line;
    QLabel *label_5;
    QLCDNumber *lcdNumber;
    QLabel *label_6;
    QPushButton *pushButton_10;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *fore;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *pushButton_11;
    QPushButton *zero;
    QPushButton *pushButton_13;
    QCommandLinkButton *commandLinkButton;
    QFrame *lineo;
    QTableWidget *tableVente;
    QLabel *label_7;
    QFrame *line_3;
    QFrame *line_4;
    QLCDNumber *lcdNumber_2;

    void setupUi(QDialog *vente)
    {
        if (vente->objectName().isEmpty())
            vente->setObjectName(QString::fromUtf8("vente"));
        vente->resize(963, 542);
        widget = new QWidget(vente);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, -1, 271, 111));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 150, 521, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(11, 31, 128, 20));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 11, 91, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 121, 16));
        label_3->setFont(font);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(174, 25, 61, 21));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 80, 121, 20));
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(182, 60, 41, 21));
        spinBox_2->setFont(font);
        spinBox_2->setMinimum(1);
        line_2->raise();
        widget_2 = new QWidget(vente);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(530, -1, 481, 541));
        tablesomme = new QTableWidget(widget_2);
        if (tablesomme->columnCount() < 4)
            tablesomme->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablesomme->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        __qtablewidgetitem1->setFont(font2);
        tablesomme->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablesomme->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablesomme->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tablesomme->setObjectName(QString::fromUtf8("tablesomme"));
        tablesomme->setGeometry(QRect(10, 100, 421, 201));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        tablesomme->setFont(font3);
        tablesomme->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ClosedHandCursor)));
        tablesomme->setEditTriggers(QAbstractItemView::NoEditTriggers);
        line = new QLineEdit(widget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(130, 50, 161, 31));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 20, 91, 20));
        label_5->setSizeIncrement(QSize(6, 6));
        label_5->setBaseSize(QSize(0, 0));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        label_5->setFont(font4);
        lcdNumber = new QLCDNumber(widget_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(100, 10, 191, 31));
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setNumDigits(10);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 60, 46, 13));
        pushButton_10 = new QPushButton(widget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(60, 480, 311, 41));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 310, 311, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        one = new QPushButton(layoutWidget);
        one->setObjectName(QString::fromUtf8("one"));

        gridLayout->addWidget(one, 0, 0, 1, 1);

        two = new QPushButton(layoutWidget);
        two->setObjectName(QString::fromUtf8("two"));

        gridLayout->addWidget(two, 0, 1, 1, 1);

        three = new QPushButton(layoutWidget);
        three->setObjectName(QString::fromUtf8("three"));

        gridLayout->addWidget(three, 0, 2, 1, 1);

        fore = new QPushButton(layoutWidget);
        fore->setObjectName(QString::fromUtf8("fore"));

        gridLayout->addWidget(fore, 1, 0, 1, 1);

        five = new QPushButton(layoutWidget);
        five->setObjectName(QString::fromUtf8("five"));

        gridLayout->addWidget(five, 1, 1, 1, 1);

        six = new QPushButton(layoutWidget);
        six->setObjectName(QString::fromUtf8("six"));

        gridLayout->addWidget(six, 1, 2, 1, 1);

        seven = new QPushButton(layoutWidget);
        seven->setObjectName(QString::fromUtf8("seven"));

        gridLayout->addWidget(seven, 2, 0, 1, 1);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName(QString::fromUtf8("eight"));

        gridLayout->addWidget(eight, 2, 1, 1, 1);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName(QString::fromUtf8("nine"));

        gridLayout->addWidget(nine, 2, 2, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 0, 1, 1);

        zero = new QPushButton(layoutWidget);
        zero->setObjectName(QString::fromUtf8("zero"));

        gridLayout->addWidget(zero, 3, 1, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setFont(font3);

        gridLayout->addWidget(pushButton_13, 3, 2, 1, 1);

        commandLinkButton = new QCommandLinkButton(widget_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(340, 10, 81, 41));
        lineo = new QFrame(vente);
        lineo->setObjectName(QString::fromUtf8("lineo"));
        lineo->setGeometry(QRect(415, 0, 231, 501));
        lineo->setFrameShape(QFrame::VLine);
        lineo->setFrameShadow(QFrame::Sunken);
        tableVente = new QTableWidget(vente);
        if (tableVente->columnCount() < 5)
            tableVente->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableVente->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableVente->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableVente->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableVente->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableVente->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        tableVente->setObjectName(QString::fromUtf8("tableVente"));
        tableVente->setGeometry(QRect(5, 120, 521, 421));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        font5.setKerning(true);
        tableVente->setFont(font5);
        tableVente->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableVente->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableVente->setTabKeyNavigation(true);
        tableVente->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableVente->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableVente->setShowGrid(true);
        tableVente->setGridStyle(Qt::DashLine);
        tableVente->setWordWrap(true);
        tableVente->setCornerButtonEnabled(true);
        label_7 = new QLabel(vente);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 20, 121, 20));
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        label_7->setPalette(palette);
        label_7->setFont(font);
        label_7->setAutoFillBackground(false);
        line_3 = new QFrame(vente);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 100, 271, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(vente);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(260, 0, 20, 111));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        lcdNumber_2 = new QLCDNumber(vente);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(410, 10, 81, 31));
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setFrameShadow(QFrame::Raised);
        lcdNumber_2->setLineWidth(2);
        lcdNumber_2->setSmallDecimalPoint(false);
        lcdNumber_2->setDigitCount(5);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);

        retranslateUi(vente);

        QMetaObject::connectSlotsByName(vente);
    } // setupUi

    void retranslateUi(QDialog *vente)
    {
        vente->setWindowTitle(QApplication::translate("vente", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("vente", "Code a barre", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("vente", "Nom Medicament", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("vente", "Quantit\303\251 ", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tablesomme->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vente", "Code medicament", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tablesomme->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vente", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tablesomme->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vente", "Libelle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tablesomme->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vente", "Prix", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("vente", "   TOTAL", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("vente", "RECU", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("vente", "VALIDER", 0, QApplication::UnicodeUTF8));
        one->setText(QApplication::translate("vente", "1", 0, QApplication::UnicodeUTF8));
        two->setText(QApplication::translate("vente", "2", 0, QApplication::UnicodeUTF8));
        three->setText(QApplication::translate("vente", "3", 0, QApplication::UnicodeUTF8));
        fore->setText(QApplication::translate("vente", "4", 0, QApplication::UnicodeUTF8));
        five->setText(QApplication::translate("vente", "5", 0, QApplication::UnicodeUTF8));
        six->setText(QApplication::translate("vente", "6", 0, QApplication::UnicodeUTF8));
        seven->setText(QApplication::translate("vente", "7", 0, QApplication::UnicodeUTF8));
        eight->setText(QApplication::translate("vente", "8", 0, QApplication::UnicodeUTF8));
        nine->setText(QApplication::translate("vente", "9", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("vente", ",", 0, QApplication::UnicodeUTF8));
        zero->setText(QApplication::translate("vente", "0", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("vente", "Effacer", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("vente", "Menu", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableVente->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("vente", "Libelle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableVente->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("vente", "Code medicament", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableVente->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("vente", "Famille", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableVente->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("vente", "Cat\303\251gorie", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableVente->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("vente", "Prix", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("vente", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0000ff;\">TextLabel</span><span style=\" color:#0000ff;\"> </span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class vente: public Ui_vente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTE_H
