#include "midicament.h"
#include "ui_midicament.h"
#include "menu.h"
#include "QDebug.h"
#include <QtSql>
#include <QApplication>
#include <QLabel>
#include <QComboBox>
#include <QVBoxLayout>




#define Path_to_DB "d:/aelabed/Bureau/DataBase_con/DataBase/gestion_de_pharcie.sqlite"

midicament::midicament(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::midicament)
{
    ui->setupUi(this);


    // controle de saissi
        QRegExp regExp1("[A-Za-z][A-Za-z ]*[A-Za-z0-9]*");
        ui->lineEditLibelle->setValidator(new QRegExpValidator(regExp1, this));

        QRegExp regExp2("[0-9]{1,5}");
        ui->lineEditCodee->setValidator(new QRegExpValidator(regExp2, this));
        ui->comboCode_fam->setValidator(new QRegExpValidator(regExp2, this));
        ui->lineEditQuantite->setValidator(new QRegExpValidator(regExp2, this));
        ui->lineEditCodee_med->setValidator(new QRegExpValidator(regExp2, this));
        ui->lineEditcodefamille_3->setValidator(new QRegExpValidator(regExp2, this));
        ui->lineEditQuantite_3->setValidator(new QRegExpValidator(regExp2, this));

        QRegExp regExp3("[0-9]{1,5},[0-9]{1,3}");
        ui->lineEdPrixVente->setValidator(new QRegExpValidator(regExp3, this));
        ui->lineEdPrixVente_3->setValidator(new QRegExpValidator(regExp3, this));


    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( Path_to_DB );
    if( !db.open() )
    {
    qDebug() << db.lastError();
    qFatal( "Failed to connect." );
    }
    qDebug( "Connected!" );






    listedARMOI();
    listeLibellert();
    listemed();
    listedFamille();



}


void midicament::listedARMOI(){
    int j=0;
    QSqlQuery qry1;
    if(!qry1.exec("SELECT LIBELLE FROM ARMOIRE"))
        {
            qDebug() << qry1.lastError();
        }
        else
            qDebug( "Table Selected!" );

        ui->ArmoiLis->clear();
        ui->ArmoiLis->addItem(" selectionner Armoire ");
       while (qry1.next()) {
            QString item = qry1.value(0).toString();
            ui->ArmoiLis->addItem(item);
            qDebug() << item;
            j++;

        }

}


void midicament::listedFamille(){
    int j=0;
    QSqlQuery qry1;
    if(!qry1.exec("SELECT DSEIGNATION_FAMILLE FROM FAMILLE_MED"))
        {
            qDebug() << qry1.lastError();
        }
        else
            qDebug( "Table Selected!" );

        ui->comboCode_fam->clear();
        ui->comboCode_fam->addItem(" selectionner Famille ");

        while (qry1.next()) {
            QString item = qry1.value(0).toString();

            ui->comboCode_fam->addItem(item);

            qDebug() << item;
            j++;

        }


}



void midicament::on_commandLinkButton_clicked()
{
    Menu m;
    this->close();
    m.exec();
}



void midicament::on_comboBoxLib_currentIndexChanged(){
    if (ui->comboBoxLib->currentText()!="")
        {
        QSqlQuery req;
        req.prepare("select * from MEDICAMENT where LIBELLE='"+ui->comboBoxLib->currentText()+"'");
        if( !req.exec() )
        {
          // Error Handling, check query.lastError(), probably return
            QMessageBox::critical(0, qApp->tr("Cannot open database"),
                qApp->tr("impossible de passer la requete.\n"

                         "Click Cancel to exit."), QMessageBox::Cancel);
        }
        while (req.next())
           {
          // ***** ajouter ds catégorie *****
           ui->lineEditCodee_med->setText(req.value(1).toString());
           ui->lineEditcodefamille_3->setText(req.value(0).toString());
           if(req.value(5).toString()=="Bébé < 4ans")
           {
               ui->lineEditCategorie_3->clear();
               ui->lineEditCategorie_3->addItem(req.value(5).toString());
               ui->lineEditCategorie_3->addItem("Enfant > 12 ans");
               ui->lineEditCategorie_3->addItem("Enfant < 16 ans");
               ui->lineEditCategorie_3->addItem("Adulte < 35 ans");
               ui->lineEditCategorie_3->addItem("Adulte > 35 ans");
           }
           else
           if(req.value(5).toString()=="enfant > 12ans")
           {
               ui->lineEditCategorie_3->clear();
               ui->lineEditCategorie_3->addItem(req.value(5).toString());
               ui->lineEditCategorie_3->addItem("Bébé < 4ans");
               ui->lineEditCategorie_3->addItem("Enfant < 16 ans");
               ui->lineEditCategorie_3->addItem("Adulte < 35 ans");
               ui->lineEditCategorie_3->addItem("Adulte > 35 ans");
           }
           else
               if(req.value(5).toString()=="Enfant < 16 ans")
               {
                   ui->lineEditCategorie_3->clear();
                   ui->lineEditCategorie_3->addItem(req.value(5).toString());
                   ui->lineEditCategorie_3->addItem("Bébé < 4ans");
                   ui->lineEditCategorie_3->addItem("Enfant > 12 ans");
                   ui->lineEditCategorie_3->addItem("Adulte < 35 ans");
                   ui->lineEditCategorie_3->addItem("Adulte > 35 ans");

               }
               else
                   if(req.value(5).toString()=="Adulte < 35 ans")
                   {
                       ui->lineEditCategorie_3->clear();
                       ui->lineEditCategorie_3->addItem(req.value(5).toString());
                       ui->lineEditCategorie_3->addItem("Bébé < 4ans");
                       ui->lineEditCategorie_3->addItem("Enfant > 12 ans");
                       ui->lineEditCategorie_3->addItem("Enfant < 16 ans");
                       ui->lineEditCategorie_3->addItem("Adulte > 35 ans");

                   }
                   else
                       if(req.value(5).toString()=="Adulte > 35 ans")
                       {
                           ui->lineEditCategorie_3->clear();
                           ui->lineEditCategorie_3->addItem(req.value(5).toString());
                           ui->lineEditCategorie_3->addItem("Bébé < 4ans");
                           ui->lineEditCategorie_3->addItem("Enfant > 12 ans");
                           ui->lineEditCategorie_3->addItem("Enfant < 16 ans");
                           ui->lineEditCategorie_3->addItem("Adulte < 35 ans");
                       }


     listedARMOI2();
           ui->lineEdPrixVente_3->setText(req.value(6).toString());
           ui->lineEditQuantite_3->setText(req.value(4).toString());
           }
           }
           else
           {

        ui->lineEditCodee_med->clear();
        ui->lineEditcodefamille_3->clear();
        ui->lineEditCategorie_3->clear();
        ui->lineEditArmoire_3->clear();
        ui->lineEdPrixVente_3->clear();
        ui->lineEditQuantite_3->clear();
        }
        }




void midicament::on_BotAjouterAjouMed_clicked()
{
    QSqlDatabase db1 = QSqlDatabase::addDatabase( "QSQLITE" );
    db1.setDatabaseName( Path_to_DB );
    if( !db1.open() )
    {
    qDebug() << db1.lastError();
    qFatal( "Failed to connect." );
    }
    qDebug( "Connected!" );
    QSqlQuery qry;


    QString ArmoiLis=ui->ArmoiLis->currentText();
    QString CategListe=ui->CategListe->currentText();
    QString comboCode_fam=ui->comboCode_fam->currentText();

    if((!ui->lineEditCodee->text().isEmpty()) &&(!ui->lineEditLibelle->text().isEmpty())&&(ui->comboCode_fam->currentIndex()!=0)&& (ui->CategListe->currentIndex()!=0)&& (ui->ArmoiLis->currentIndex()!=0)&& (!ui->lineEdPrixVente->text().isEmpty())&&(!ui->lineEditQuantite->text().isEmpty()))
        {

            if(qry.exec("INSERT INTO MEDICAMENT VALUES ('"+ui->comboCode_fam->currentText()+"' ,'"+ui->lineEditCodee->text()+"','"+ArmoiLis+"','"+ui->lineEditLibelle->text()+"','"+ui->lineEditQuantite->text()+"','"+CategListe+"','"+ui->lineEdPrixVente->text()+"');"))

            {
                listemed();
                QString msg = "nouveau\n medicament\n ajouté \n" +qry.value(0).toString();
              QMessageBox::information(this, "Succée", msg);
             }

        else
          {
          QMessageBox::critical(0, tr("Connexion Echoué"),tr("requete invalide"), QMessageBox::Ok);

           }

        }
         else
            {
             QMessageBox::critical(0, tr("Vérification"),tr("Il Faut Remplir tous Les Champs"), QMessageBox::Ok);

             }
    ui->lineEditCodee->clear();
    ui->lineEditLibelle->clear();
    ui->lineEdPrixVente->clear();
    ui->lineEditQuantite->clear();
    listeLibellert();

}



void midicament::on_BOTAnnulerAjout_clicked()
{

    ui->lineEditCodee->setText("");
    ui->lineEditLibelle->setText("");
    ui->lineEditQuantite->setText("");
    ui->lineEdPrixVente->setText("");
}



void midicament::on_reches_currentIndexChanged(const QString &arg1)
{

    QSqlQuery qry;
    if (qry.exec("SELECT * FROM MEDICAMENT WHERE LIBELLE LIKE '"+ui->reches->currentText()+"%'"))

    {


        if (!qry.exec())
        {

               QMessageBox::critical(0, tr("Connexion Echoué"),tr("requete invalide"), QMessageBox::Ok);

        }


  else qry.next();
{

    ui->lineEditCodee_2->clear();
    ui->lineEditcodefamille_2->clear();
    ui->lineEditCategorie_2->clear();
    ui->lineEditArmoire_2->clear();
    ui->lineEdPrixVente_2->clear();
    ui->lineEditQuantite_2->clear();

    ui->lineEditCodee_2->insert(qry.value(1).toString());
    ui->lineEditcodefamille_2->insert(qry.value(0).toString());
    ui->lineEdPrixVente_2->insert(qry.value(6).toString());
    ui->lineEditQuantite_2->insert(qry.value(4).toString());
    ui->lineEditCategorie_2->insert(qry.value(5).toString());
    ui->lineEditArmoire_2->insert(qry.value(2).toString());
}
}

}


void midicament::on_pushButtonRecherchmed_clicked()
{
    QSqlQuery qry;
  if(!ui->lineEditRechecrchMed->text().isEmpty())
    {if (qry.exec("SELECT * FROM MEDICAMENT WHERE LIBELLE LIKE '"+ui->lineEditRechecrchMed->text()+"%'"))

        {   ui->reches->clear();
            while (qry.next())
            {
                ui->reches->insertItem(-1,qry.value(3).toString());

            }
            QMessageBox::information(this,tr("Succée"),tr("Rech terminé") );

            if (!qry.exec())
            {

               QMessageBox::critical(0, tr("Connexion Echoué"),tr("requete invalide"), QMessageBox::Ok);

            }


  else qry.next();
{

    ui->lineEditCodee_2->clear();
    ui->lineEditcodefamille_2->clear();
    ui->lineEditCategorie_2->clear();
    ui->lineEditArmoire_2->clear();
    ui->lineEdPrixVente_2->clear();
    ui->lineEditQuantite_2->clear();

    ui->lineEditCodee_2->insert(qry.value(1).toString());
    ui->lineEditcodefamille_2->insert(qry.value(0).toString());
    ui->lineEdPrixVente_2->insert(qry.value(6).toString());
    ui->lineEditQuantite_2->insert(qry.value(4).toString());
    ui->lineEditCategorie_2->insert(qry.value(5).toString());
    ui->lineEditArmoire_2->insert(qry.value(2).toString());
}
}
}
  else
  {
      QMessageBox::critical(0, tr("Attention"),tr("Champs vide"), QMessageBox::Ok);

      ui->reches->clear();
      ui->lineEditCodee_2->clear();
      ui->lineEditcodefamille_2->clear();
      ui->lineEditCategorie_2->clear();
      ui->lineEditArmoire_2->clear();
      ui->lineEdPrixVente_2->clear();
      ui->lineEditQuantite_2->clear();
  }
}




void midicament::on_pushButton_clicked()
{
    ui->lineEditCodee_2->clear();
    ui->lineEditcodefamille_2->clear();
    ui->lineEditCategorie_2->clear();
    ui->lineEditArmoire_2->clear();
    ui->lineEdPrixVente_2->clear();
    ui->lineEditQuantite_2->clear();
    ui->reches->clear();
    ui->lineEditRechecrchMed->clear();
}



void midicament::on_lineEditCodee_3_currentIndexChanged(const QString &arg1)
{

}
void midicament::listemed(){

    int i=0;

        QSqlQuery req;
        req.prepare("SELECT * FROM MEDICAMENT");
            if( !req.exec() )
            {

                QMessageBox::critical(0, qApp->tr("Cannot open database"),
                    qApp->tr("impossible de passer la requete.\n Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            { qDebug("done1");

                ui->tabtab->setRowCount(0);
                while(req.next())//pour avancer les lignes
                {
                    ui->tabtab->setRowCount(i+1);

                   QString CODE_FAMILLE=req.value(0).toString();
                   QString ID_MED=req.value(1).toString();
                   QString ID_ARM=req.value(2).toString();
                   QString LIBELLE=req.value(3).toString();
                   QString QTE=req.value(4).toString();
                   QString CATEGORIE=req.value(5).toString();
                   QString PRIX_VENTE=req.value(6).toString();
                   qDebug("done2");

                   ui->tabtab->setItem(i,0,new QTableWidgetItem(LIBELLE));
                   ui->tabtab->setItem(i,1,new QTableWidgetItem(ID_MED));
                   ui->tabtab->setItem(i,2,new QTableWidgetItem(CODE_FAMILLE));
                   ui->tabtab->setItem(i,3,new QTableWidgetItem(ID_ARM));
                   ui->tabtab->setItem(i,4,new QTableWidgetItem(CATEGORIE));
                   ui->tabtab->setItem(i,5,new QTableWidgetItem(QTE));
                   ui->tabtab->setItem(i,6,new QTableWidgetItem(PRIX_VENTE));
                   i++;
            }

            }
}

void midicament::medica()
{
    QSqlQuery qry;
    if (qry.exec("select * from MEDICAMENT "))
    {

        while (qry.next());

    }


    else
    {

          QMessageBox::critical(0, tr("Connexion Echoué"),tr("requete invalide"), QMessageBox::Ok);


    }

}



void midicament::on_pushButtonSupModMed_clicked()
{
      { int x1=ui->comboBoxLib->currentIndex();
        QSqlQuery req;
            req.prepare("delete from MEDICAMENT where LIBELLE='"+ui->comboBoxLib->currentText()+"'");
            midicament();
            if( !req.exec() )
            {

                QMessageBox::critical(0, qApp->tr("Cannot open database"),
                    qApp->tr("impossible de passer la requete.\n"

                             "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::information(this, tr("Suppression"),tr(" Succé \n Medicament supprimé avec succé !"));

            ui->lineEditCodee_med->clear();
            ui->lineEditcodefamille_3->clear();
            ui->lineEditCategorie_3->clear();
            ui->lineEditArmoire_3->clear();
            ui->lineEdPrixVente_3->clear();
            ui->lineEditQuantite_3->clear();
            ui->comboBoxLib->removeItem(x1);
    }
    }}


void midicament::on_pushButtonModifModMed_clicked()
{

    QSqlQuery qry;
    if(qry.exec("UPDATE MEDICAMENT SET LIBELLE='"+ui->comboBoxLib->currentText()+"',ID_MED='"+ui->lineEditCodee_med->text()+"',CODE_FAMILLE='"+ui->lineEditcodefamille_3->text()+"',ID_ARM='"+ui->lineEditArmoire_3->currentText()+"',QTE='"+ui->lineEditQuantite_3->text()+"',CATEGORIE='"+ui->lineEditCategorie_3->currentText()+"',PRIX_VENTE='"+ui->lineEdPrixVente_3->text()+"' where LIBELLE='"+ui->comboBoxLib->currentText()+"'"))
    {

                listemed();

                QMessageBox::information(this, tr("Modif.."),tr("Medicament \n Modifier \n avec succée"), QMessageBox::Ok);

    }
    else {QMessageBox::critical(0, tr("Echec"),tr("requete invalide"), QMessageBox::Ok);}
}



void midicament::on_Med_destroyed()
{

}


void midicament::listedARMOI2()
{
    int j=0;

    QSqlQuery qry1,qry2;
    if(!qry2.exec("SELECT ID_ARM FROM MEDICAMENT where LIBELLE='"+ui->comboBoxLib->currentText()+"'"))
        {
            qDebug() << qry1.lastError();
        }
        else
            qDebug( "Table Selected!" );


        ui->lineEditArmoire_3->clear();
        QString item;
        while (qry2.next()) {
            item= qry2.value(0).toString();

            ui->lineEditArmoire_3->addItem(item);

            qDebug() << item;
            j++;

        }

        if(!qry1.exec("SELECT LIBELLE FROM ARMOIRE where LIBELLE <>'"+item+"'"))
            {
                qDebug() << qry1.lastError();
            }
            else
                qDebug( "Table Selected!" );
        while (qry1.next()) {
            QString item = qry1.value(0).toString();

            ui->lineEditArmoire_3->addItem(item);

            qDebug() << item;
            j++;

        }

}

midicament::~midicament()
{
    delete ui;
}


void midicament::on_commandLinkButton_3_clicked()
{
    Menu m;
    this->close();
    m.exec();
}

void midicament::listeLibellert()
{
    int l=0;
    QSqlQuery qrylib;
    if(!qrylib.exec("SELECT * FROM MEDICAMENT"))
        {
            qDebug() << qrylib.lastError();
        }
        else
            qDebug( "Table Selected!" );

        ui->comboBoxLib->clear();
        ui->comboBoxLib->addItem(":: select LIBELLE ::");

        while (qrylib.next()) {
            QString item = qrylib.value(3).toString();

            ui->comboBoxLib->addItem(item);

            qDebug() << item;
            l++;

        }
}

void midicament::on_commandLinkButton_2_clicked()
{
    Menu m;
    this->close();
    m.exec();
}

void midicament::on_commandLinkButton_4_clicked()
{
    Menu m;
    this->close();
    m.exec();
}
