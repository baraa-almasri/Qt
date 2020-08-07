#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // buttons setup
    connect(this->ui->convertBinaryToOthers, SIGNAL(clicked()), this, SLOT(convertBinaryToOthers()));
    connect(this->ui->convertOctalToOthers, SIGNAL(clicked()), this, SLOT(convertOctalToOthers()));
    connect(this->ui->convertDecimalToOthers, SIGNAL(clicked()), this, SLOT(convertDecimalToOthers()));
    connect(this->ui->convertHexaToOthers, SIGNAL(clicked()), this, SLOT(convertHexadecimalToOthers()));

    connect(this->ui->_66, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(this->ui->getAbout, SIGNAL(clicked()), this, SLOT(showAbout()));

    // initial values
    this->ui->decimalNumber->setText("0");
    this->ui->binaryNumber->setText("0");
    this->ui->octalNumber->setText("0");
    this->ui->hexadecimalNumber->setText("0");

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::convertDecimalToOthers() {
    qlonglong tmp = this->ui->decimalNumber->toMarkdown().toLong();

    clearBoxes();

    this->ui->decimalNumber->setText( QString::number( tmp ) );
    this->ui->binaryNumber->setText( convertDecimalToBinary( tmp ) );
    this->ui->octalNumber->setText( convertDecimalToOctal( tmp ) );
    this->ui->hexadecimalNumber->setText( convertDecimalToHexadecimal( tmp ) );
}

void MainWindow::convertBinaryToOthers() {
    qlonglong tmp = this->ui->binaryNumber->toMarkdown().toLong();

    clearBoxes();

    this->ui->binaryNumber->setText( QString::number(tmp) );
    this->ui->decimalNumber->setText( convertBinaryToDecimal(tmp) ) ;
    this->ui->octalNumber->setText( convertBinaryToOctal(tmp));
    this->ui->hexadecimalNumber->setText( convertBinaryToHexadecimal(tmp) );
}

void MainWindow::convertOctalToOthers() {
    qlonglong tmp = this->ui->octalNumber->toMarkdown().toLong();

    clearBoxes();

    this->ui->octalNumber->setText( QString::number( tmp ) );
    this->ui->decimalNumber->setText( convertOctalToDecimal( tmp ) );
    this->ui->hexadecimalNumber->setText( convertOctalToHexadecimal( tmp ) ) ;
    this->ui->binaryNumber->setText( convertOctalToBinary( tmp ) );
}

void MainWindow::convertHexadecimalToOthers() {
    QString tmp = this->ui->hexadecimalNumber->toMarkdown();// >toHtml();

    clearBoxes();

    this->ui->hexadecimalNumber->setText( tmp );
    this->ui->octalNumber->setText( convertHexadecimalToOctal( tmp ) );
    this->ui->decimalNumber->setText( convertHexadecimalToDecimal( tmp ) );
    this->ui->binaryNumber->setText( convertHexadecimalToBinary( tmp ) );
}

void MainWindow::clearBoxes() {
    this->ui->decimalNumber->setText("0");
    this->ui->binaryNumber->setText("0");
    this->ui->octalNumber->setText("0");
    this->ui->hexadecimalNumber->setText("0");

}

void MainWindow::showAbout() {
    QMessageBox::about(this, "about", "A Qt port to Raed's numerical converter");
}
