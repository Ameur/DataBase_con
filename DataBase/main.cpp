#include <QtGui/QApplication>
#include "dialog.h"
#include "midicament.h"
#include "vente.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
   //midicament w;
    vente w;
    w.show();
    
    return a.exec();
}
