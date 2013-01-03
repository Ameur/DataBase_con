/********************************************************************************
** Form generated from reading UI file 'midicament.ui'
**
** Created: Thu 3. Jan 15:24:43 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDICAMENT_H
#define UI_MIDICAMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_midicament
{
public:
    QTabWidget *Med;
    QWidget *Ajouter;
    QCommandLinkButton *commandLinkButton;
    QPushButton *BotAjouterAjouMed;
    QPushButton *BOTAnnulerAjout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *codeajout;
    QLabel *libelleajout;
    QLabel *labelCodefamille;
    QLabel *Categorieajout;
    QLabel *labelArmoire;
    QLabel *prixajout;
    QLabel *labelQuantite;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditCodee;
    QLineEdit *lineEditLibelle;
    QComboBox *comboCode_fam;
    QComboBox *CategListe;
    QComboBox *ArmoiLis;
    QLineEdit *lineEdPrixVente;
    QLineEdit *lineEditQuantite;
    QLabel *label;
    QWidget *ModifierSupprimer;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *libelleajout_2;
    QLabel *codeajout_3;
    QLabel *labelCodefamille_3;
    QLabel *Categorieajout_3;
    QLabel *labelArmoire_3;
    QLabel *prixajout_3;
    QLabel *labelQuantite_3;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBoxLib;
    QLineEdit *lineEditCodee_med;
    QLineEdit *lineEditcodefamille_3;
    QComboBox *lineEditCategorie_3;
    QComboBox *lineEditArmoire_3;
    QLineEdit *lineEdPrixVente_3;
    QLineEdit *lineEditQuantite_3;
    QPushButton *pushButtonSupModMed;
    QPushButton *pushButtonModifModMed;
    QCommandLinkButton *commandLinkButton_3;
    QWidget *Recherche;
    QLabel *labelRechecrchMed;
    QLineEdit *lineEditRechecrchMed;
    QPushButton *pushButtonRecherchmed;
    QComboBox *reches;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *codeajout_2;
    QLabel *labelCodefamille_2;
    QLabel *Categorieajout_2;
    QLabel *labelArmoire_2;
    QLabel *prixajout_2;
    QLabel *labelQuantite_2;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditCodee_2;
    QLineEdit *lineEditcodefamille_2;
    QLineEdit *lineEditCategorie_2;
    QLineEdit *lineEditArmoire_2;
    QLineEdit *lineEdPrixVente_2;
    QLineEdit *lineEditQuantite_2;
    QCommandLinkButton *commandLinkButton_2;
    QWidget *tab;
    QTableWidget *tabtab;
    QCommandLinkButton *commandLinkButton_4;

    void setupUi(QDialog *midicament)
    {
        if (midicament->objectName().isEmpty())
            midicament->setObjectName(QString::fromUtf8("midicament"));
        midicament->resize(651, 446);
        midicament->setMinimumSize(QSize(651, 446));
        midicament->setMaximumSize(QSize(651, 446));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix2/ressources/images (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        midicament->setWindowIcon(icon);
        Med = new QTabWidget(midicament);
        Med->setObjectName(QString::fromUtf8("Med"));
        Med->setGeometry(QRect(0, 0, 651, 451));
        Med->setMinimumSize(QSize(651, 451));
        Med->setMaximumSize(QSize(651, 451));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Med->setFont(font);
        Ajouter = new QWidget();
        Ajouter->setObjectName(QString::fromUtf8("Ajouter"));
        commandLinkButton = new QCommandLinkButton(Ajouter);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(550, 380, 91, 41));
        BotAjouterAjouMed = new QPushButton(Ajouter);
        BotAjouterAjouMed->setObjectName(QString::fromUtf8("BotAjouterAjouMed"));
        BotAjouterAjouMed->setGeometry(QRect(341, 351, 75, 23));
        BOTAnnulerAjout = new QPushButton(Ajouter);
        BOTAnnulerAjout->setObjectName(QString::fromUtf8("BOTAnnulerAjout"));
        BOTAnnulerAjout->setGeometry(QRect(422, 351, 75, 23));
        layoutWidget = new QWidget(Ajouter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(62, 22, 311, 321));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        codeajout = new QLabel(layoutWidget);
        codeajout->setObjectName(QString::fromUtf8("codeajout"));

        verticalLayout_2->addWidget(codeajout);

        libelleajout = new QLabel(layoutWidget);
        libelleajout->setObjectName(QString::fromUtf8("libelleajout"));

        verticalLayout_2->addWidget(libelleajout);

        labelCodefamille = new QLabel(layoutWidget);
        labelCodefamille->setObjectName(QString::fromUtf8("labelCodefamille"));

        verticalLayout_2->addWidget(labelCodefamille);

        Categorieajout = new QLabel(layoutWidget);
        Categorieajout->setObjectName(QString::fromUtf8("Categorieajout"));

        verticalLayout_2->addWidget(Categorieajout);

        labelArmoire = new QLabel(layoutWidget);
        labelArmoire->setObjectName(QString::fromUtf8("labelArmoire"));

        verticalLayout_2->addWidget(labelArmoire);

        prixajout = new QLabel(layoutWidget);
        prixajout->setObjectName(QString::fromUtf8("prixajout"));

        verticalLayout_2->addWidget(prixajout);

        labelQuantite = new QLabel(layoutWidget);
        labelQuantite->setObjectName(QString::fromUtf8("labelQuantite"));

        verticalLayout_2->addWidget(labelQuantite);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditCodee = new QLineEdit(layoutWidget);
        lineEditCodee->setObjectName(QString::fromUtf8("lineEditCodee"));

        verticalLayout->addWidget(lineEditCodee);

        lineEditLibelle = new QLineEdit(layoutWidget);
        lineEditLibelle->setObjectName(QString::fromUtf8("lineEditLibelle"));

        verticalLayout->addWidget(lineEditLibelle);

        comboCode_fam = new QComboBox(layoutWidget);
        comboCode_fam->setObjectName(QString::fromUtf8("comboCode_fam"));

        verticalLayout->addWidget(comboCode_fam);

        CategListe = new QComboBox(layoutWidget);
        CategListe->setObjectName(QString::fromUtf8("CategListe"));

        verticalLayout->addWidget(CategListe);

        ArmoiLis = new QComboBox(layoutWidget);
        ArmoiLis->setObjectName(QString::fromUtf8("ArmoiLis"));

        verticalLayout->addWidget(ArmoiLis);

        lineEdPrixVente = new QLineEdit(layoutWidget);
        lineEdPrixVente->setObjectName(QString::fromUtf8("lineEdPrixVente"));

        verticalLayout->addWidget(lineEdPrixVente);

        lineEditQuantite = new QLineEdit(layoutWidget);
        lineEditQuantite->setObjectName(QString::fromUtf8("lineEditQuantite"));

        verticalLayout->addWidget(lineEditQuantite);


        horizontalLayout_2->addLayout(verticalLayout);

        label = new QLabel(Ajouter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-5, -18, 651, 441));
        label->setMaximumSize(QSize(651, 16777215));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ressources/4571158-pilules-ovale-vert-isole-sur-fond-blanc.jpg")));
        Med->addTab(Ajouter, QString());
        label->raise();
        commandLinkButton->raise();
        BotAjouterAjouMed->raise();
        BOTAnnulerAjout->raise();
        layoutWidget->raise();
        ModifierSupprimer = new QWidget();
        ModifierSupprimer->setObjectName(QString::fromUtf8("ModifierSupprimer"));
        layoutWidget_3 = new QWidget(ModifierSupprimer);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 10, 351, 321));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        libelleajout_2 = new QLabel(layoutWidget_3);
        libelleajout_2->setObjectName(QString::fromUtf8("libelleajout_2"));

        verticalLayout_3->addWidget(libelleajout_2);

        codeajout_3 = new QLabel(layoutWidget_3);
        codeajout_3->setObjectName(QString::fromUtf8("codeajout_3"));

        verticalLayout_3->addWidget(codeajout_3);

        labelCodefamille_3 = new QLabel(layoutWidget_3);
        labelCodefamille_3->setObjectName(QString::fromUtf8("labelCodefamille_3"));

        verticalLayout_3->addWidget(labelCodefamille_3);

        Categorieajout_3 = new QLabel(layoutWidget_3);
        Categorieajout_3->setObjectName(QString::fromUtf8("Categorieajout_3"));

        verticalLayout_3->addWidget(Categorieajout_3);

        labelArmoire_3 = new QLabel(layoutWidget_3);
        labelArmoire_3->setObjectName(QString::fromUtf8("labelArmoire_3"));

        verticalLayout_3->addWidget(labelArmoire_3);

        prixajout_3 = new QLabel(layoutWidget_3);
        prixajout_3->setObjectName(QString::fromUtf8("prixajout_3"));

        verticalLayout_3->addWidget(prixajout_3);

        labelQuantite_3 = new QLabel(layoutWidget_3);
        labelQuantite_3->setObjectName(QString::fromUtf8("labelQuantite_3"));

        verticalLayout_3->addWidget(labelQuantite_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        comboBoxLib = new QComboBox(layoutWidget_3);
        comboBoxLib->setObjectName(QString::fromUtf8("comboBoxLib"));

        verticalLayout_4->addWidget(comboBoxLib);

        lineEditCodee_med = new QLineEdit(layoutWidget_3);
        lineEditCodee_med->setObjectName(QString::fromUtf8("lineEditCodee_med"));

        verticalLayout_4->addWidget(lineEditCodee_med);

        lineEditcodefamille_3 = new QLineEdit(layoutWidget_3);
        lineEditcodefamille_3->setObjectName(QString::fromUtf8("lineEditcodefamille_3"));
        lineEditcodefamille_3->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(lineEditcodefamille_3);

        lineEditCategorie_3 = new QComboBox(layoutWidget_3);
        lineEditCategorie_3->setObjectName(QString::fromUtf8("lineEditCategorie_3"));

        verticalLayout_4->addWidget(lineEditCategorie_3);

        lineEditArmoire_3 = new QComboBox(layoutWidget_3);
        lineEditArmoire_3->setObjectName(QString::fromUtf8("lineEditArmoire_3"));

        verticalLayout_4->addWidget(lineEditArmoire_3);

        lineEdPrixVente_3 = new QLineEdit(layoutWidget_3);
        lineEdPrixVente_3->setObjectName(QString::fromUtf8("lineEdPrixVente_3"));

        verticalLayout_4->addWidget(lineEdPrixVente_3);

        lineEditQuantite_3 = new QLineEdit(layoutWidget_3);
        lineEditQuantite_3->setObjectName(QString::fromUtf8("lineEditQuantite_3"));

        verticalLayout_4->addWidget(lineEditQuantite_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        pushButtonSupModMed = new QPushButton(ModifierSupprimer);
        pushButtonSupModMed->setObjectName(QString::fromUtf8("pushButtonSupModMed"));
        pushButtonSupModMed->setGeometry(QRect(331, 341, 75, 23));
        pushButtonModifModMed = new QPushButton(ModifierSupprimer);
        pushButtonModifModMed->setObjectName(QString::fromUtf8("pushButtonModifModMed"));
        pushButtonModifModMed->setGeometry(QRect(412, 341, 75, 23));
        commandLinkButton_3 = new QCommandLinkButton(ModifierSupprimer);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(530, 380, 91, 41));
        Med->addTab(ModifierSupprimer, QString());
        Recherche = new QWidget();
        Recherche->setObjectName(QString::fromUtf8("Recherche"));
        labelRechecrchMed = new QLabel(Recherche);
        labelRechecrchMed->setObjectName(QString::fromUtf8("labelRechecrchMed"));
        labelRechecrchMed->setGeometry(QRect(40, 30, 161, 16));
        lineEditRechecrchMed = new QLineEdit(Recherche);
        lineEditRechecrchMed->setObjectName(QString::fromUtf8("lineEditRechecrchMed"));
        lineEditRechecrchMed->setGeometry(QRect(170, 30, 261, 20));
        pushButtonRecherchmed = new QPushButton(Recherche);
        pushButtonRecherchmed->setObjectName(QString::fromUtf8("pushButtonRecherchmed"));
        pushButtonRecherchmed->setGeometry(QRect(450, 30, 101, 23));
        reches = new QComboBox(Recherche);
        reches->setObjectName(QString::fromUtf8("reches"));
        reches->setGeometry(QRect(170, 70, 261, 22));
        reches->setAcceptDrops(false);
        reches->setEditable(false);
        layoutWidget_2 = new QWidget(Recherche);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(70, 100, 361, 291));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        codeajout_2 = new QLabel(layoutWidget_2);
        codeajout_2->setObjectName(QString::fromUtf8("codeajout_2"));

        verticalLayout_5->addWidget(codeajout_2);

        labelCodefamille_2 = new QLabel(layoutWidget_2);
        labelCodefamille_2->setObjectName(QString::fromUtf8("labelCodefamille_2"));

        verticalLayout_5->addWidget(labelCodefamille_2);

        Categorieajout_2 = new QLabel(layoutWidget_2);
        Categorieajout_2->setObjectName(QString::fromUtf8("Categorieajout_2"));

        verticalLayout_5->addWidget(Categorieajout_2);

        labelArmoire_2 = new QLabel(layoutWidget_2);
        labelArmoire_2->setObjectName(QString::fromUtf8("labelArmoire_2"));

        verticalLayout_5->addWidget(labelArmoire_2);

        prixajout_2 = new QLabel(layoutWidget_2);
        prixajout_2->setObjectName(QString::fromUtf8("prixajout_2"));

        verticalLayout_5->addWidget(prixajout_2);

        labelQuantite_2 = new QLabel(layoutWidget_2);
        labelQuantite_2->setObjectName(QString::fromUtf8("labelQuantite_2"));

        verticalLayout_5->addWidget(labelQuantite_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEditCodee_2 = new QLineEdit(layoutWidget_2);
        lineEditCodee_2->setObjectName(QString::fromUtf8("lineEditCodee_2"));
        lineEditCodee_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEditCodee_2);

        lineEditcodefamille_2 = new QLineEdit(layoutWidget_2);
        lineEditcodefamille_2->setObjectName(QString::fromUtf8("lineEditcodefamille_2"));
        lineEditcodefamille_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEditcodefamille_2);

        lineEditCategorie_2 = new QLineEdit(layoutWidget_2);
        lineEditCategorie_2->setObjectName(QString::fromUtf8("lineEditCategorie_2"));
        lineEditCategorie_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEditCategorie_2);

        lineEditArmoire_2 = new QLineEdit(layoutWidget_2);
        lineEditArmoire_2->setObjectName(QString::fromUtf8("lineEditArmoire_2"));
        lineEditArmoire_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEditArmoire_2);

        lineEdPrixVente_2 = new QLineEdit(layoutWidget_2);
        lineEdPrixVente_2->setObjectName(QString::fromUtf8("lineEdPrixVente_2"));
        lineEdPrixVente_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEdPrixVente_2);

        lineEditQuantite_2 = new QLineEdit(layoutWidget_2);
        lineEditQuantite_2->setObjectName(QString::fromUtf8("lineEditQuantite_2"));
        lineEditQuantite_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(lineEditQuantite_2);


        horizontalLayout_3->addLayout(verticalLayout_6);

        commandLinkButton_2 = new QCommandLinkButton(Recherche);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(540, 380, 91, 41));
        Med->addTab(Recherche, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabtab = new QTableWidget(tab);
        if (tabtab->columnCount() < 7)
            tabtab->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setKerning(false);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("Code Medicament"));
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(QColor(170, 255, 255));
        tabtab->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tabtab->setObjectName(QString::fromUtf8("tabtab"));
        tabtab->setGeometry(QRect(0, 60, 641, 251));
        tabtab->setMouseTracking(false);
        tabtab->setFocusPolicy(Qt::WheelFocus);
        tabtab->setAcceptDrops(false);
        tabtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabtab->setTabKeyNavigation(false);
        tabtab->setProperty("showDropIndicator", QVariant(false));
        tabtab->setDragEnabled(false);
        tabtab->setDragDropOverwriteMode(false);
        tabtab->setDragDropMode(QAbstractItemView::NoDragDrop);
        tabtab->setTextElideMode(Qt::ElideRight);
        tabtab->setShowGrid(true);
        tabtab->setGridStyle(Qt::DashDotLine);
        tabtab->setWordWrap(false);
        tabtab->setCornerButtonEnabled(false);
        commandLinkButton_4 = new QCommandLinkButton(tab);
        commandLinkButton_4->setObjectName(QString::fromUtf8("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(550, 380, 91, 41));
        Med->addTab(tab, QString());
        QWidget::setTabOrder(lineEditCodee, lineEditLibelle);
        QWidget::setTabOrder(lineEditLibelle, comboCode_fam);
        QWidget::setTabOrder(comboCode_fam, CategListe);
        QWidget::setTabOrder(CategListe, ArmoiLis);
        QWidget::setTabOrder(ArmoiLis, lineEdPrixVente);
        QWidget::setTabOrder(lineEdPrixVente, lineEditQuantite);
        QWidget::setTabOrder(lineEditQuantite, BotAjouterAjouMed);
        QWidget::setTabOrder(BotAjouterAjouMed, BOTAnnulerAjout);
        QWidget::setTabOrder(BOTAnnulerAjout, commandLinkButton);
        QWidget::setTabOrder(commandLinkButton, comboBoxLib);
        QWidget::setTabOrder(comboBoxLib, lineEditCodee_med);
        QWidget::setTabOrder(lineEditCodee_med, lineEditCategorie_3);
        QWidget::setTabOrder(lineEditCategorie_3, lineEditArmoire_3);
        QWidget::setTabOrder(lineEditArmoire_3, lineEdPrixVente_3);
        QWidget::setTabOrder(lineEdPrixVente_3, lineEditQuantite_3);
        QWidget::setTabOrder(lineEditQuantite_3, pushButtonSupModMed);
        QWidget::setTabOrder(pushButtonSupModMed, pushButtonModifModMed);
        QWidget::setTabOrder(pushButtonModifModMed, commandLinkButton_3);
        QWidget::setTabOrder(commandLinkButton_3, lineEditRechecrchMed);
        QWidget::setTabOrder(lineEditRechecrchMed, reches);
        QWidget::setTabOrder(reches, pushButtonRecherchmed);
        QWidget::setTabOrder(pushButtonRecherchmed, commandLinkButton_2);
        QWidget::setTabOrder(commandLinkButton_2, tabtab);
        QWidget::setTabOrder(tabtab, commandLinkButton_4);
        QWidget::setTabOrder(commandLinkButton_4, Med);

        retranslateUi(midicament);

        Med->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(midicament);
    } // setupUi

    void retranslateUi(QDialog *midicament)
    {
        midicament->setWindowTitle(QApplication::translate("midicament", "Medicament", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("midicament", "Menu", 0, QApplication::UnicodeUTF8));
        BotAjouterAjouMed->setText(QApplication::translate("midicament", "Ajouter", 0, QApplication::UnicodeUTF8));
        BOTAnnulerAjout->setText(QApplication::translate("midicament", "Annuler", 0, QApplication::UnicodeUTF8));
        codeajout->setText(QApplication::translate("midicament", "Code Medicament", 0, QApplication::UnicodeUTF8));
        libelleajout->setText(QApplication::translate("midicament", "Libelle Medicament", 0, QApplication::UnicodeUTF8));
        labelCodefamille->setText(QApplication::translate("midicament", "Designi famille", 0, QApplication::UnicodeUTF8));
        Categorieajout->setText(QApplication::translate("midicament", "Categorie", 0, QApplication::UnicodeUTF8));
        labelArmoire->setText(QApplication::translate("midicament", "Armoire", 0, QApplication::UnicodeUTF8));
        prixajout->setText(QApplication::translate("midicament", "Prix de vente", 0, QApplication::UnicodeUTF8));
        labelQuantite->setText(QApplication::translate("midicament", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        CategListe->clear();
        CategListe->insertItems(0, QStringList()
         << QApplication::translate("midicament", "Selectionner Cat\303\251gorie", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("midicament", "B\303\251b\303\251 < 4ans", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("midicament", "enfant > 12ans", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("midicament", "Enfant < 16 ans", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("midicament", "Adulte < 35 ans", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("midicament", "Adulte > 35 ans", 0, QApplication::UnicodeUTF8)
         << QString()
        );
        label->setText(QString());
        Med->setTabText(Med->indexOf(Ajouter), QApplication::translate("midicament", "Ajouter ", 0, QApplication::UnicodeUTF8));
        libelleajout_2->setText(QApplication::translate("midicament", "Libelle Medicament", 0, QApplication::UnicodeUTF8));
        codeajout_3->setText(QApplication::translate("midicament", "Code Medicament", 0, QApplication::UnicodeUTF8));
        labelCodefamille_3->setText(QApplication::translate("midicament", "Famille", 0, QApplication::UnicodeUTF8));
        Categorieajout_3->setText(QApplication::translate("midicament", "Categorie", 0, QApplication::UnicodeUTF8));
        labelArmoire_3->setText(QApplication::translate("midicament", "Armoire", 0, QApplication::UnicodeUTF8));
        prixajout_3->setText(QApplication::translate("midicament", "Prix de vente", 0, QApplication::UnicodeUTF8));
        labelQuantite_3->setText(QApplication::translate("midicament", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        pushButtonSupModMed->setText(QApplication::translate("midicament", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonModifModMed->setText(QApplication::translate("midicament", "Modifier", 0, QApplication::UnicodeUTF8));
        commandLinkButton_3->setText(QApplication::translate("midicament", "Menu", 0, QApplication::UnicodeUTF8));
        Med->setTabText(Med->indexOf(ModifierSupprimer), QApplication::translate("midicament", "Modifier / Supprimer", 0, QApplication::UnicodeUTF8));
        labelRechecrchMed->setText(QApplication::translate("midicament", "Entrer Nom Medicament", 0, QApplication::UnicodeUTF8));
        pushButtonRecherchmed->setText(QApplication::translate("midicament", "Lancer Recherche", 0, QApplication::UnicodeUTF8));
        codeajout_2->setText(QApplication::translate("midicament", "Code Medicament", 0, QApplication::UnicodeUTF8));
        labelCodefamille_2->setText(QApplication::translate("midicament", "Code famille", 0, QApplication::UnicodeUTF8));
        Categorieajout_2->setText(QApplication::translate("midicament", "Categorie", 0, QApplication::UnicodeUTF8));
        labelArmoire_2->setText(QApplication::translate("midicament", "Armoire", 0, QApplication::UnicodeUTF8));
        prixajout_2->setText(QApplication::translate("midicament", "Prix de vente", 0, QApplication::UnicodeUTF8));
        labelQuantite_2->setText(QApplication::translate("midicament", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        commandLinkButton_2->setText(QApplication::translate("midicament", "Menu", 0, QApplication::UnicodeUTF8));
        Med->setTabText(Med->indexOf(Recherche), QApplication::translate("midicament", "Recherche", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tabtab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("midicament", "Libelle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tabtab->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("midicament", "Code Famille", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tabtab->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("midicament", "Code Armoire", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tabtab->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("midicament", "Cat\303\251gorie", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tabtab->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("midicament", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tabtab->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("midicament", "Prix de vente", 0, QApplication::UnicodeUTF8));
        commandLinkButton_4->setText(QApplication::translate("midicament", "Menu", 0, QApplication::UnicodeUTF8));
        Med->setTabText(Med->indexOf(tab), QApplication::translate("midicament", "Affichage complet", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class midicament: public Ui_midicament {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDICAMENT_H
