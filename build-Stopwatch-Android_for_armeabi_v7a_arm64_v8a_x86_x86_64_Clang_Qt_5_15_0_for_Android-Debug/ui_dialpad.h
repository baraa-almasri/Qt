/********************************************************************************
** Form generated from reading UI file 'dialpad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALPAD_H
#define UI_DIALPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialpad
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *zero;
    QSpacerItem *horizontalSpacer;
    QPushButton *killPopup;

    void setupUi(QDialog *dialpad)
    {
        if (dialpad->objectName().isEmpty())
            dialpad->setObjectName(QString::fromUtf8("dialpad"));
        dialpad->resize(274, 175);
        gridLayout = new QGridLayout(dialpad);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        seven = new QPushButton(dialpad);
        seven->setObjectName(QString::fromUtf8("seven"));

        horizontalLayout_7->addWidget(seven);

        eight = new QPushButton(dialpad);
        eight->setObjectName(QString::fromUtf8("eight"));

        horizontalLayout_7->addWidget(eight);

        nine = new QPushButton(dialpad);
        nine->setObjectName(QString::fromUtf8("nine"));

        horizontalLayout_7->addWidget(nine);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        four = new QPushButton(dialpad);
        four->setObjectName(QString::fromUtf8("four"));

        horizontalLayout_6->addWidget(four);

        five = new QPushButton(dialpad);
        five->setObjectName(QString::fromUtf8("five"));

        horizontalLayout_6->addWidget(five);

        six = new QPushButton(dialpad);
        six->setObjectName(QString::fromUtf8("six"));

        horizontalLayout_6->addWidget(six);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        one = new QPushButton(dialpad);
        one->setObjectName(QString::fromUtf8("one"));

        horizontalLayout_5->addWidget(one);

        two = new QPushButton(dialpad);
        two->setObjectName(QString::fromUtf8("two"));

        horizontalLayout_5->addWidget(two);

        three = new QPushButton(dialpad);
        three->setObjectName(QString::fromUtf8("three"));

        horizontalLayout_5->addWidget(three);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        zero = new QPushButton(dialpad);
        zero->setObjectName(QString::fromUtf8("zero"));

        horizontalLayout_4->addWidget(zero);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        killPopup = new QPushButton(dialpad);
        killPopup->setObjectName(QString::fromUtf8("killPopup"));

        horizontalLayout_4->addWidget(killPopup);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(dialpad);

        QMetaObject::connectSlotsByName(dialpad);
    } // setupUi

    void retranslateUi(QDialog *dialpad)
    {
        dialpad->setWindowTitle(QCoreApplication::translate("dialpad", "Dialog", nullptr));
        seven->setText(QCoreApplication::translate("dialpad", "7", nullptr));
        eight->setText(QCoreApplication::translate("dialpad", "8", nullptr));
        nine->setText(QCoreApplication::translate("dialpad", "9", nullptr));
        four->setText(QCoreApplication::translate("dialpad", "4", nullptr));
        five->setText(QCoreApplication::translate("dialpad", "5", nullptr));
        six->setText(QCoreApplication::translate("dialpad", "6", nullptr));
        one->setText(QCoreApplication::translate("dialpad", "1", nullptr));
        two->setText(QCoreApplication::translate("dialpad", "2", nullptr));
        three->setText(QCoreApplication::translate("dialpad", "3", nullptr));
        zero->setText(QCoreApplication::translate("dialpad", "0", nullptr));
        killPopup->setText(QCoreApplication::translate("dialpad", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialpad: public Ui_dialpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALPAD_H
