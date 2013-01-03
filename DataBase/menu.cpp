#include "menu.h"
#include "ui_menu.h"
#include "midicament.h"
#include "fournisseur.h"
#include "vente.h"
#include "deconnection.h"
#include "statistique.h"


Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_butmedicam_clicked()
{

    QDialog *medic= new midicament();
    medic->show();
    this->close();

}

void Menu::on_butfourni_clicked()
{
    QDialog *four= new fournisseur();
    four->show();
    this->close();
}

void Menu::on_butvente_clicked()
{
    QDialog *ven= new vente();
    ven->show();
    this->close();
}

void Menu::on_pushButton_clicked()
{
    QDialog *stat= new Statistique();
    stat->show();
    this->close();
}

void Menu::on_butDeconnexion_clicked()
{
    switch( QMessageBox::question(
                    this,
                    tr("Deconnexion"),
                    tr("Voulez vous deconnecter ?"),

                    QMessageBox::Ok |

                    QMessageBox::No ))
        {
          case QMessageBox::Ok:
            {
             this->close();
             QString msg = "Deconnecté";
             QMessageBox::warning(this,"Déconnecté", msg);}
            break;

          case QMessageBox::No:
            qDebug( "cancel" );
            break;

        }
}


