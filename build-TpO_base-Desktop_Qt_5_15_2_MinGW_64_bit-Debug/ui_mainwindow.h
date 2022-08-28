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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *T_menus;
    QWidget *Proceso;
    QWidget *Estadsticas;
    QComboBox *CB_categorias;
    QWidget *Configuracion;
    QWidget *Mantenimiento;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        T_menus = new QTabWidget(centralwidget);
        T_menus->setObjectName(QString::fromUtf8("T_menus"));
        T_menus->setGeometry(QRect(-6, -1, 811, 551));
        Proceso = new QWidget();
        Proceso->setObjectName(QString::fromUtf8("Proceso"));
        T_menus->addTab(Proceso, QString());
        Estadsticas = new QWidget();
        Estadsticas->setObjectName(QString::fromUtf8("Estadsticas"));
        CB_categorias = new QComboBox(Estadsticas);
        CB_categorias->addItem(QString());
        CB_categorias->addItem(QString());
        CB_categorias->setObjectName(QString::fromUtf8("CB_categorias"));
        CB_categorias->setGeometry(QRect(300, 400, 151, 24));
        T_menus->addTab(Estadsticas, QString());
        Configuracion = new QWidget();
        Configuracion->setObjectName(QString::fromUtf8("Configuracion"));
        T_menus->addTab(Configuracion, QString());
        Mantenimiento = new QWidget();
        Mantenimiento->setObjectName(QString::fromUtf8("Mantenimiento"));
        T_menus->addTab(Mantenimiento, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        T_menus->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        T_menus->setTabText(T_menus->indexOf(Proceso), QCoreApplication::translate("MainWindow", "Proceso", nullptr));
        CB_categorias->setItemText(0, QCoreApplication::translate("MainWindow", "Ganancia", nullptr));
        CB_categorias->setItemText(1, QCoreApplication::translate("MainWindow", "Lavados", nullptr));

        T_menus->setTabText(T_menus->indexOf(Estadsticas), QCoreApplication::translate("MainWindow", "Estad\303\255sticas", nullptr));
        T_menus->setTabText(T_menus->indexOf(Configuracion), QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        T_menus->setTabText(T_menus->indexOf(Mantenimiento), QCoreApplication::translate("MainWindow", "Mantenimiento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
