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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QLabel *label;
    QProgressBar *progressBar;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
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
        pushButton = new QPushButton(Proceso);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 210, 80, 24));
        pushButton_2 = new QPushButton(Proceso);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 210, 80, 24));
        pushButton_3 = new QPushButton(Proceso);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 290, 80, 24));
        comboBox = new QComboBox(Proceso);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(360, 150, 72, 24));
        label = new QLabel(Proceso);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 150, 91, 16));
        progressBar = new QProgressBar(Proceso);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(110, 50, 471, 23));
        progressBar->setValue(24);
        lineEdit = new QLineEdit(Proceso);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 90, 21, 24));
        lineEdit_2 = new QLineEdit(Proceso);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 90, 21, 24));
        lineEdit_3 = new QLineEdit(Proceso);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(420, 90, 21, 24));
        lineEdit_4 = new QLineEdit(Proceso);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(550, 90, 21, 24));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Apagar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Cerrar Sesion", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingrese lavado:", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", " 1", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", " 1", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", " 1", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", " 1", nullptr));
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
