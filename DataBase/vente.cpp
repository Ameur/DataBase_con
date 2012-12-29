#include "vente.h"
#include "ui_vente.h"
#include "menu.h"
#include<QTableWidget>

#include "QDebug.h"
#include <QtSql>
#include <QApplication>
#include <QLabel>
#include <QComboBox>
#include <QVBoxLayout>
#include <QtGui>



#define Path_to_DB "d:/aelabed/Bureau/DataBase_con/DataBase/gestion_de_pharcie.sqlite"


vente::vente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vente)
{
    ui->setupUi(this);
    //ui->lcdNumber_2->setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();




    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( Path_to_DB );
    if( !db.open() )
    {
    qDebug() << db.lastError();
    qFatal( "Failed to connect." );
    }
    qDebug( "Connected!" );

    QDate QDTime = QDate::currentDate();
    QString QDTStr = QDTime.toString();
    ui->label_7->setText(QDTStr);







}


void vente::showTime()
//! [1] //! [2]
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->lcdNumber_2->display(text);
}



vente::~vente()
{
    delete ui;
}

void vente::on_commandLinkButton_clicked()
{
    Menu m;
    this->close();
    m.exec();
}

void vente::on_lineEdit_3_textChanged(const QString &arg1)
{

    int i=0;

        QSqlQuery req;
        if (req.exec("SELECT * FROM MEDICAMENT WHERE LIBELLE LIKE '"+ui->lineEdit_3->text()+"%'"))
            if( !req.exec() )
            {

                QMessageBox::critical(0, qApp->tr("Cannot open database"),
                    qApp->tr("impossible de passer la requete.\n Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            { qDebug("done1");

                ui->tableVente->setRowCount(0);
                while(req.next())//pour avancer les lignes
                {
                    ui->tableVente->setRowCount(i+1);

                   QString CODE_FAMILLE=req.value(0).toString();
                   QString ID_MED=req.value(1).toString();
                   QString LIBELLE=req.value(3).toString();
                   QString CATEGORIE=req.value(5).toString();
                   QString PRIX_VENTE=req.value(6).toString();
                   qDebug("done2");

                   ui->tableVente->setItem(i,0,new QTableWidgetItem(LIBELLE));
                   ui->tableVente->setItem(i,1,new QTableWidgetItem(ID_MED));
                   ui->tableVente->setItem(i,2,new QTableWidgetItem(CODE_FAMILLE));
                   ui->tableVente->setItem(i,3,new QTableWidgetItem(CATEGORIE));
                   ui->tableVente->setItem(i,4,new QTableWidgetItem(PRIX_VENTE));
                   i++;
            }

            }

}

void vente::on_lineEdit_textChanged(const QString &arg1)
{
    int j=0;

        QSqlQuery req;
        if (req.exec("SELECT * FROM MEDICAMENT WHERE ID_MED LIKE '"+ui->lineEdit->text()+"%'"))
            if( !req.exec() )
            {

                QMessageBox::critical(0, qApp->tr("Cannot open database"),
                    qApp->tr("impossible de passer la requete.\n Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            { qDebug("done1");

                ui->tableVente->setRowCount(0);
                while(req.next())//pour avancer les lignes
                {
                    ui->tableVente->setRowCount(j+1);

                   QString CODE_FAMILLE=req.value(0).toString();
                   QString ID_MED=req.value(1).toString();
                   QString LIBELLE=req.value(3).toString();
                   QString CATEGORIE=req.value(5).toString();
                   QString PRIX_VENTE=req.value(6).toString();
                   qDebug("done2");

                   ui->tableVente->setItem(j,0,new QTableWidgetItem(LIBELLE));
                   ui->tableVente->setItem(j,1,new QTableWidgetItem(ID_MED));
                   ui->tableVente->setItem(j,2,new QTableWidgetItem(CODE_FAMILLE));
                   ui->tableVente->setItem(j,3,new QTableWidgetItem(CATEGORIE));
                   ui->tableVente->setItem(j,4,new QTableWidgetItem(PRIX_VENTE));
                   j++;
            }

            }

}

void vente::on_commandLinkButton_2_clicked()
{
/*

    int r =ui->tableVente->currentRow();
        int nb =ui->tablesomme->rowCount();

        ui->tablesomme->setRowCount(nb+1);


       QTableWidgetItem *LIBELLE = ui->tableVente->item(r,0);
       QString LIBELLE1= LIBELLE->text();
       QTableWidgetItem *idmed = ui->tableVente->item(r,1);
       QString id_med= idmed->text();

       QTableWidgetItem *PRIX_VENTE = ui->tableVente->item(r,4);
       double PRIX_VENTE1= PRIX_VENTE->text().toDouble();


       int quante=ui->spinBox_2->value();
       PRIX_VENTE1=PRIX_VENTE1*quante;

       QString Quant=QString::number(quante);
       QString pri=QString::number(PRIX_VENTE1,'f',3);

       ui->tablesomme->setItem(nb,0,new QTableWidgetItem(id_med));
       ui->tablesomme->setItem(nb,1,new QTableWidgetItem(Quant));
       ui->tablesomme->setItem(nb,2,new QTableWidgetItem(LIBELLE1));
       ui->tablesomme->setItem(nb,3,new QTableWidgetItem(pri));

       ui->lcdNumber->display(PRIX_VENTE1+ui->lcdNumber->value());

*/

}

void vente::on_pushButton_13_clicked()
{
        int r= ui->tablesomme->currentRow();



       QTableWidgetItem *prix = ui->tablesomme->item(r,3);
       double zs= prix->text().toDouble();
       double total=ui->lcdNumber->value();
       total=total-zs;
       ui->lcdNumber->display(total);
       ui->tablesomme->removeRow(r);


}








void vente::on_one_clicked()
{
    ui->line->setText(ui->line->text()+"1");
}

void vente::on_two_clicked()
{
    ui->line->setText(ui->line->text()+"2");

}

void vente::on_three_clicked()
{
    ui->line->setText(ui->line->text()+"3");

}

void vente::on_fore_clicked()
{
    ui->line->setText(ui->line->text()+"4");

}

void vente::on_five_clicked()
{
    ui->line->setText(ui->line->text()+"5");

}

void vente::on_zero_clicked()
{
    ui->line->setText(ui->line->text()+"0");

}

void vente::on_six_clicked()
{
    ui->line->setText(ui->line->text()+"6");

}

void vente::on_seven_clicked()
{
    ui->line->setText(ui->line->text()+"7");

}

void vente::on_eight_clicked()
{
    ui->line->setText(ui->line->text()+"8");

}

void vente::on_nine_clicked()
{
    ui->line->setText(ui->line->text()+"9");

}

void vente::on_pushButton_11_clicked()
{
    ui->line->setText(ui->line->text()+",");

}

void vente::on_pushButton_10_clicked()
{
    int max =ui->tablesomme->rowCount();

    /*

int r= ui->agentlist->currentRow();
    QSqlQuery qry;
    QTableWidgetItem *user = ui->agentlist->item(r,0);
    QString user1= user->text();
    QTableWidgetItem *pass = ui->agentlist->item(r,1);
    QString pass1= pass->text();
    r=r+1;
    switch( QMessageBox::warning(this,"Confirmation","Voulez-vous vraiment ajouter ce personnel ? ","Oui","Non",0,1))
    {
    case 0:
        qry.prepare("INSERT INTO agent (user,pass) VALUES (:user,:pass)");

        qry.bindValue(":user",user1);
        qry.bindValue(":pass",pass1);

    if (qry.exec())
    { ///Requete reussi
    qDebug("req reussi! ");
    QMessageBox::information(this, tr("Done"),tr("Le utilisateur ajouter avec succes! "));
setupview();
    }
    else
    {
        qDebug("req NO reussi! ");
        QMessageBox::information(this, tr("Done"),tr("errue ajouter utilisateur! "));

    }

    case 1:
    default:
    ;
    }

        QDate QDTime = QDate::currentDate();
        QString QDTStr = QDTime.toString();
        QSqlQuery qry;
    int i;
    int max =ui->tablesomme->rowCount();

    for( i=1;i<=max;i++)
    {
        QTableWidgetItem *id = ui->tablesomme->item(i,0);
        QString idd= id->text();
        QTableWidgetItem *qtt = ui->tablesomme->item(i,1);
        QString quant= qtt->text();
        QTableWidgetItem *prix = ui->tablesomme->item(i,3);
        QString prixt= prix->text();
        qry.prepare("INSERT INTO VENTE (ID_MED,QTE,DATE,prixt) VALUES ('"+idd+"','"+quant+"','"+QDTStr+"','"+prixt+"');");

        if(qry.exec())

        {


            QMessageBox::information(this, "Succée", "ajout ok");
         }

    else
      {
      QMessageBox::critical(0, tr("Connexion Echoué"),tr("requete invalide"), QMessageBox::Ok);

       }
    }*/

}


void vente::on_tableVente_doubleClicked()
{
    int r =ui->tableVente->currentRow();
        int nb =ui->tablesomme->rowCount();

        ui->tablesomme->setRowCount(nb+1);


       QTableWidgetItem *LIBELLE = ui->tableVente->item(r,0);
       QString LIBELLE1= LIBELLE->text();
       QTableWidgetItem *idmed = ui->tableVente->item(r,1);
       QString id_med= idmed->text();

       QTableWidgetItem *PRIX_VENTE = ui->tableVente->item(r,4);
       double PRIX_VENTE1= PRIX_VENTE->text().toDouble();


       int quante=ui->spinBox_2->value();
       PRIX_VENTE1=PRIX_VENTE1*quante;

       QString Quant=QString::number(quante);
       QString pri=QString::number(PRIX_VENTE1,'f',3);

       ui->tablesomme->setItem(nb,0,new QTableWidgetItem(id_med));
       ui->tablesomme->setItem(nb,1,new QTableWidgetItem(Quant));
       ui->tablesomme->setItem(nb,2,new QTableWidgetItem(LIBELLE1));
       ui->tablesomme->setItem(nb,3,new QTableWidgetItem(pri));

       ui->lcdNumber->display(PRIX_VENTE1+ui->lcdNumber->value());

}
// supprimmer ligne de la table somme
void vente::on_tablesomme_doubleClicked()
{
    int r= ui->tablesomme->currentRow();
         ui->tablesomme->removeRow(r);

}
