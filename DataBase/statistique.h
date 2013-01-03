#ifndef STATISTIQUE_H
#define STATISTIQUE_H

#include <QDialog>

namespace Ui {
class Statistique;
}

class Statistique : public QDialog
{
    Q_OBJECT
    
public:
    explicit Statistique(QWidget *parent = 0);
    ~Statistique();
    
private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::Statistique *ui;
};

#endif // STATISTIQUE_H
