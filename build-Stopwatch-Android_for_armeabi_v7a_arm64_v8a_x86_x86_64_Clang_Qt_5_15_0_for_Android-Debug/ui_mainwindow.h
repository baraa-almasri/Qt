/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSettings;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLCDNumber *secsDisplay;
    QPushButton *killTimer;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *ammountOfSeconds;
    QPushButton *setSeconds;
    QPushButton *infiniteStopwatch;
    QPushButton *finiteStopwatch;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(262, 477);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        secsDisplay = new QLCDNumber(centralwidget);
        secsDisplay->setObjectName(QString::fromUtf8("secsDisplay"));

        verticalLayout->addWidget(secsDisplay);

        killTimer = new QPushButton(centralwidget);
        killTimer->setObjectName(QString::fromUtf8("killTimer"));

        verticalLayout->addWidget(killTimer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ammountOfSeconds = new QDoubleSpinBox(centralwidget);
        ammountOfSeconds->setObjectName(QString::fromUtf8("ammountOfSeconds"));
        ammountOfSeconds->setCursor(QCursor(Qt::PointingHandCursor));
        ammountOfSeconds->setMouseTracking(false);

        horizontalLayout->addWidget(ammountOfSeconds);

        setSeconds = new QPushButton(centralwidget);
        setSeconds->setObjectName(QString::fromUtf8("setSeconds"));

        horizontalLayout->addWidget(setSeconds);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        infiniteStopwatch = new QPushButton(centralwidget);
        infiniteStopwatch->setObjectName(QString::fromUtf8("infiniteStopwatch"));
        infiniteStopwatch->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(infiniteStopwatch, 6, 0, 1, 1);

        finiteStopwatch = new QPushButton(centralwidget);
        finiteStopwatch->setObjectName(QString::fromUtf8("finiteStopwatch"));
        finiteStopwatch->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(finiteStopwatch, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 262, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        killTimer->setText(QCoreApplication::translate("MainWindow", "Stop Timer", nullptr));
        setSeconds->setText(QCoreApplication::translate("MainWindow", "Set Seconds", nullptr));
        infiniteStopwatch->setText(QCoreApplication::translate("MainWindow", "Stopwatch", nullptr));
        finiteStopwatch->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
