#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->info_pb, SIGNAL(clicked()), this, SLOT(info_pb_Clicked()));
    connect(ui->cerrar_sesion_pb, SIGNAL(clicked()), this, SLOT(cerrar_sesion_pb_Clicked()));
}

void MainWindow:: info_pb_Clicked(void){
    //Abro la ventana de info_sistemas
    info_sistemas *ventana1 = new info_sistemas(this);
    ventana1->setModal(true);
    ventana1->show();
}
void MainWindow:: cerrar_sesion_pb_Clicked(void){
    this->close();
    //deberia volver a login
}

MainWindow::~MainWindow(){
    delete ui;
}
