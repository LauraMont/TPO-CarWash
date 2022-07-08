#include "informacion_etapas.h"
#include "ui_informacion_etapas.h"

Informacion_etapas::Informacion_etapas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Informacion_etapas)
{
    ui->setupUi(this);
}

Informacion_etapas::~Informacion_etapas()
{
    delete ui;
}
