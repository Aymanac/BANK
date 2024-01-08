#include "emsibank.h"
#include "./ui_emsibank.h"

EMSIBank::EMSIBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EMSIBank)
{
    ui->setupUi(this);
    ptrInscription = new Inscription();
}

EMSIBank::~EMSIBank()
{
    delete ui;
    delete ptrInscription ;
}

void EMSIBank::on_pushButton_2_clicked()
{
    ptrInscription -> show();
}

