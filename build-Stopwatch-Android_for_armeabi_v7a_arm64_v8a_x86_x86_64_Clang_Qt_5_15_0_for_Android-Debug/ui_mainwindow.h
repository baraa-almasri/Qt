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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLCDNumber *secsDisplay;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *ammountOfSeconds;
    QPushButton *setSeconds;
    QPushButton *finiteStopwatch;
    QPushButton *infiniteStopwatch;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *kill;
    QPushButton *killTimer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(262, 477);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        secsDisplay = new QLCDNumber(centralwidget);
        secsDisplay->setObjectName(QString::fromUtf8("secsDisplay"));

        verticalLayout->addWidget(secsDisplay);

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

        finiteStopwatch = new QPushButton(centralwidget);
        finiteStopwatch->setObjectName(QString::fromUtf8("finiteStopwatch"));
        finiteStopwatch->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(finiteStopwatch);

        infiniteStopwatch = new QPushButton(centralwidget);
        infiniteStopwatch->setObjectName(QString::fromUtf8("infiniteStopwatch"));
        infiniteStopwatch->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(infiniteStopwatch);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        kill = new QPushButton(centralwidget);
        kill->setObjectName(QString::fromUtf8("kill"));

        horizontalLayout_2->addWidget(kill);

        killTimer = new QPushButton(centralwidget);
        killTimer->setObjectName(QString::fromUtf8("killTimer"));

        horizontalLayout_2->addWidget(killTimer);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        setSeconds->setText(QCoreApplication::translate("MainWindow", "Set Seconds", nullptr));
        finiteStopwatch->setText(QCoreApplication::translate("MainWindow", "Finite Stopwatch", nullptr));
        infiniteStopwatch->setText(QCoreApplication::translate("MainWindow", "Infinite Stopwatch", nullptr));
        kill->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        killTimer->setText(QCoreApplication::translate("MainWindow", "Stop Timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
