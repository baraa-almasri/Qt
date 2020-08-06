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
    //this->ui->hexadecimalNumber->setRange(0, 1000000000);

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
    this->ui->binaryNumber->setValue( convertDecimalToBinary( this->ui->decimalNumber->value() ).toInt() );
    this->ui->octalNumber->setValue( convertDecimalToOctal( this->ui->decimalNumber->value() ).toInt() );
    this->ui->hexadecimalNumber->setText( convertDecimalToHexadecimal( this->ui->decimalNumber->value() ) );
}

void MainWindow::convertBinaryToOthers() {
    clearBoxes();

}

void MainWindow::convertOctalToOthers() {
    clearBoxes();

}

void MainWindow::convertHexadecimalToOthers() {
    clearBoxes();

}

void MainWindow::clearBoxes() {
    this->ui->decimalNumber->clear();
    this->ui->binaryNumber->clear();
    this->ui->octalNumber->clear();
    this->ui->hexadecimalNumber->clear();

}
