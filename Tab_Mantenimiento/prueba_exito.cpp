#include "prueba_exito.h"
#include "ui_prueba_exito.h"

Prueba_exito::Prueba_exito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prueba_exito)
{
    ui->setupUi(this);
}

Prueba_exito::~Prueba_exito()
{
    delete ui;
}

void Prueba_exito::on_buttonBox_accepted()
{

}

