#include "dialog.h"
#include "ui_dialog.h"
#include "menu.h"


#define Path_to_DB "d:/aelabed/Bureau/DataBase_con/DataBase/gestion_de_pharcie.sqlite"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);




    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(Path_to_DB);
    QFileInfo checkFile(Path_to_DB);

    if(checkFile.isFile())
    {
        if(myDB.open())
        {   qDebug() << "Connexion aboutie";

            ui->lblstatu->setText("[+] Vous êtes Connecté");
        }
    }else{
             ui->lblstatu->setText("[!] Echec Tentative de Connexion");
    }
}

Dialog::~Dialog()
{
    delete ui;
    myDB.close();
    qDebug() << "Connexion Fermé";
}

void Dialog::on_btnClear_clicked()
{
     ui->txtPass->setText("");
     ui->textuser->setText("");

}

void Dialog::on_btnOk_clicked()
{
    QString Login, Password;
    Login = ui->textuser->text();
    Password = ui->txtPass->text();

    if(!myDB.isOpen()){

        ui->lblstatu->setText("[!] Aucune Connexion a la base");
        return;


    }
    QSqlQuery qry;
    if(qry.exec("SELECT LOGIN, MOT_DE_PASSE FROM RESPONSABLE WHERE LOGIN=\'" +Login + "\'AND MOT_DE_PASSE=\'" +Password +"\'"))
    {
        if(qry.next())
        {
            ui->lblstatu->setText("[+] Cordonnées valide");
            QString msg = "Bienvenue \n"
                     +qry.value(0).toString();
            QMessageBox::warning(this, "Succes", msg);

            QDialog *con= new Menu;
            con->show();
            this->close();


        }

        else{
            ui->lblstatu->setText("[!] Cordonnées invalide");
        }
    }
}
