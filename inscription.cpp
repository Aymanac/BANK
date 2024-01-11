#include "inscription.h"
#include "ui_inscription.h"

Inscription::Inscription(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Inscription)
{
    ui->setupUi(this);
}

Inscription::~Inscription()
{
    delete ui;
}



void Inscription::on_Sinscrire_clicked()
{
    QSqlDatabase database ;
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("127.0.0.1");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("clients");

    if(database.open())  {

        QMessageBox::information(this,"Connected", "Database Connected") ;
    }else {

        QMessageBox::information(this,"Not Connected", "Database Is Not Connected") ;
    }
}

