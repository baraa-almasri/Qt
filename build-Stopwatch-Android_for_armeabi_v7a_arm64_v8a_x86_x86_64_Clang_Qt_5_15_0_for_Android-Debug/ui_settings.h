/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QPushButton *killSettings;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *goat;
    QPushButton *blyat;
    QPushButton *setSoundFile;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(281, 157);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        killSettings = new QPushButton(Settings);
        killSettings->setObjectName(QString::fromUtf8("killSettings"));

        gridLayout->addWidget(killSettings, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        goat = new QPushButton(Settings);
        goat->setObjectName(QString::fromUtf8("goat"));

        horizontalLayout->addWidget(goat);

        blyat = new QPushButton(Settings);
        blyat->setObjectName(QString::fromUtf8("blyat"));

        horizontalLayout->addWidget(blyat);


        verticalLayout->addLayout(horizontalLayout);

        setSoundFile = new QPushButton(Settings);
        setSoundFile->setObjectName(QString::fromUtf8("setSoundFile"));

        verticalLayout->addWidget(setSoundFile);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        killSettings->setText(QCoreApplication::translate("Settings", "X", nullptr));
        label->setText(QCoreApplication::translate("Settings", "timer end sound:", nullptr));
        goat->setText(QCoreApplication::translate("Settings", "Goat", nullptr));
        blyat->setText(QCoreApplication::translate("Settings", "Blyat", nullptr));
        setSoundFile->setText(QCoreApplication::translate("Settings", "Select file as time sound", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
