#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT
    
public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();
    
private slots:
    void on_butmedicam_clicked();

    void on_butfourni_clicked();

    void on_butvente_clicked();

    void on_butDeconnexion_clicked();



    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
