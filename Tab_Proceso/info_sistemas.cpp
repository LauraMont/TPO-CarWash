#include "info_sistemas.h"
#include "ui_info_sistemas.h"

info_sistemas::info_sistemas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info_sistemas)
{
    ui->setupUi(this);
}

info_sistemas::~info_sistemas()
{
    delete ui;
}
