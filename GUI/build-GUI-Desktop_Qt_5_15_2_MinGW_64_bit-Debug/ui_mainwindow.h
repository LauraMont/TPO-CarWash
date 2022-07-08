/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Proceso;
    QPushButton *iniciar_pb;
    QPushButton *apagar_pb;
    QPushButton *cerrar_sesion_pb;
    QComboBox *tipo_lavado_pb;
    QLabel *lavado_lb;
    QProgressBar *proceso_progbar;
    QLineEdit *e_lavado_le;
    QLineEdit *e_cepillado_le;
    QLineEdit *e_enjuague_le;
    QLineEdit *e_secado_le;
    QPushButton *info_pb;
    QWidget *Estadistica;
    QWidget *Mantenimiento;
    QWidget *Configuracion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(674, 401);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 681, 371));
        Proceso = new QWidget();
        Proceso->setObjectName(QString::fromUtf8("Proceso"));
        iniciar_pb = new QPushButton(Proceso);
        iniciar_pb->setObjectName(QString::fromUtf8("iniciar_pb"));
        iniciar_pb->setGeometry(QRect(240, 210, 80, 24));
        apagar_pb = new QPushButton(Proceso);
        apagar_pb->setObjectName(QString::fromUtf8("apagar_pb"));
        apagar_pb->setGeometry(QRect(360, 210, 80, 24));
        cerrar_sesion_pb = new QPushButton(Proceso);
        cerrar_sesion_pb->setObjectName(QString::fromUtf8("cerrar_sesion_pb"));
        cerrar_sesion_pb->setGeometry(QRect(300, 290, 80, 24));
        tipo_lavado_pb = new QComboBox(Proceso);
        tipo_lavado_pb->setObjectName(QString::fromUtf8("tipo_lavado_pb"));
        tipo_lavado_pb->setGeometry(QRect(360, 150, 72, 24));
        lavado_lb = new QLabel(Proceso);
        lavado_lb->setObjectName(QString::fromUtf8("lavado_lb"));
        lavado_lb->setGeometry(QRect(230, 150, 91, 16));
        proceso_progbar = new QProgressBar(Proceso);
        proceso_progbar->setObjectName(QString::fromUtf8("proceso_progbar"));
        proceso_progbar->setGeometry(QRect(110, 50, 471, 23));
        proceso_progbar->setValue(24);
        e_lavado_le = new QLineEdit(Proceso);
        e_lavado_le->setObjectName(QString::fromUtf8("e_lavado_le"));
        e_lavado_le->setGeometry(QRect(120, 90, 21, 24));
        e_cepillado_le = new QLineEdit(Proceso);
        e_cepillado_le->setObjectName(QString::fromUtf8("e_cepillado_le"));
        e_cepillado_le->setGeometry(QRect(280, 90, 21, 24));
        e_enjuague_le = new QLineEdit(Proceso);
        e_enjuague_le->setObjectName(QString::fromUtf8("e_enjuague_le"));
        e_enjuague_le->setGeometry(QRect(420, 90, 21, 24));
        e_secado_le = new QLineEdit(Proceso);
        e_secado_le->setObjectName(QString::fromUtf8("e_secado_le"));
        e_secado_le->setGeometry(QRect(550, 90, 21, 24));
        info_pb = new QPushButton(Proceso);
        info_pb->setObjectName(QString::fromUtf8("info_pb"));
        info_pb->setGeometry(QRect(30, 210, 21, 21));
        tabWidget->addTab(Proceso, QString());
        Estadistica = new QWidget();
        Estadistica->setObjectName(QString::fromUtf8("Estadistica"));
        tabWidget->addTab(Estadistica, QString());
        Mantenimiento = new QWidget();
        Mantenimiento->setObjectName(QString::fromUtf8("Mantenimiento"));
        tabWidget->addTab(Mantenimiento, QString());
        Configuracion = new QWidget();
        Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        tabWidget->addTab(Configuracion, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 674, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        iniciar_pb->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        apagar_pb->setText(QCoreApplication::translate("MainWindow", "Apagar", nullptr));
        cerrar_sesion_pb->setText(QCoreApplication::translate("MainWindow", "Cerrar Sesion", nullptr));
        lavado_lb->setText(QCoreApplication::translate("MainWindow", "Ingrese lavado:", nullptr));
        e_lavado_le->setText(QCoreApplication::translate("MainWindow", " 1", nullptr));
        e_cepillado_le->setText(QCoreApplication::translate("MainWindow", " 2", nullptr));
        e_enjuague_le->setText(QCoreApplication::translate("MainWindow", " 3", nullptr));
        e_secado_le->setText(QCoreApplication::translate("MainWindow", " 4", nullptr));
        info_pb->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Proceso), QCoreApplication::translate("MainWindow", "Proceso", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Estadistica), QCoreApplication::translate("MainWindow", "Estadistica", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Mantenimiento), QCoreApplication::translate("MainWindow", "Mantenimiento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Configuracion), QCoreApplication::translate("MainWindow", "Configuracion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
