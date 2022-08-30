#include "prueba_fallo.h"
#include "ui_prueba_fallo.h"

Prueba_fallo::Prueba_fallo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prueba_fallo)
{
    ui->setupUi(this);
}

Prueba_fallo::~Prueba_fallo()
{
    delete ui;
}

void Prueba_fallo::on_buttonBox_accepted()
{

}

