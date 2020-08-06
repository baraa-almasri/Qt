#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // buttons setup

    connect(this->ui->convertBinaryToOthers, SIGNAL(clicked()), this, SLOT(convertBinaryToOthers()));
    connect(this->ui->convertOctalToOthers, SIGNAL(clicked()), this, SLOT(convertOctalToOthers()));
    connect(this->ui->convertDecimalToOthers, SIGNAL(clicked()), this, SLOT(convertDecimalToOthers()));
    connect(this->ui->convertHexaToOthers, SIGNAL(clicked()), this, SLOT(convertHexadecimalToOthers()));

    // menus setup

    connect(this->ui->actionExit, SIGNAL(triggered()), qApp, SLOT(quit()));

    // limits setup

    this->ui->binaryNumber->setRange(0, 1000000000);
    this->ui->decimalNumber->setRange(0, 1000000000);
    this->ui->octalNumber->setRange(0, 1000000000);

    // initial values

    this->ui->decimalNumber->setValue(0);
    this->ui->binaryNumber->setValue(0);
    this->ui->octalNumber->setValue(0);
    this->ui->hexadecimalNumber->setText("0");

}

MainWindow::~MainWindow() {
    delete ui;
}
#include <string>
#include <iostream>
void MainWindow::convertDecimalToOthers() {
    qlonglong tmp = this->ui->decimalNumber->value();

    clearBoxes();

    this->ui->decimalNumber->setValue( tmp );
    this->ui->binaryNumber->setValue( convertDecimalToBinary( tmp ).toInt() );
    this->ui->octalNumber->setValue( convertDecimalToOctal( tmp ).toInt() );
    this->ui->hexadecimalNumber->setText( convertDecimalToHexadecimal( tmp ) );
}

void MainWindow::convertBinaryToOthers() {
    qlonglong tmp = this->ui->binaryNumber->value();

    clearBoxes();

    this->ui->binaryNumber->setValue( tmp );
    this->ui->decimalNumber->setValue( convertBinaryToDecimal(tmp).toInt() ) ;
    this->ui->octalNumber->setValue( convertBinaryToOctal(tmp).toInt());
    this->ui->hexadecimalNumber->setText( convertBinaryToHexadecimal(tmp) );
}

void MainWindow::convertOctalToOthers() {
    qlonglong tmp = this->ui->octalNumber->value();

    clearBoxes();

    this->ui->octalNumber->setValue( tmp );
    this->ui->decimalNumber->setValue( convertOctalToDecimal( tmp ).toInt() );
    this->ui->hexadecimalNumber->setText( convertOctalToHexadecimal( tmp ) ) ;
    this->ui->binaryNumber->setValue( convertOctalToBinary( tmp ).toInt() );
}

void MainWindow::convertHexadecimalToOthers() {
    QString tmp = this->ui->hexadecimalNumber->toMarkdown();// >toHtml();

    clearBoxes();

    this->ui->hexadecimalNumber->setText( tmp );
    this->ui->octalNumber->setValue( convertHexadecimalToOctal( tmp ).toInt() );
    this->ui->decimalNumber->setValue( convertHexadecimalToDecimal( tmp ).toInt() );
    this->ui->binaryNumber->setValue( convertHexadecimalToBinary( tmp ).toInt() );
}

void MainWindow::clearBoxes() {
    this->ui->decimalNumber->setValue(0);
    this->ui->binaryNumber->setValue(0);
    this->ui->octalNumber->setValue(0);
    this->ui->hexadecimalNumber->setText("0");

}
