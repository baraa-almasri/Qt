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

    this->ui->hexadecimalNumber->setText("0.0");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::convertDecimalToOthers() {
    double tmp = this->ui->decimalNumber->value();

    clearBoxes();

    this->updateBoxes(
        DecimalConverter::convertToBinary(tmp).c_str(),
        DecimalConverter::convertToOctal(tmp).c_str(),
        QString::number(tmp),
        DecimalConverter::convertToHexadecimal(tmp).c_str()

    );

}

void MainWindow::convertBinaryToOthers() {
    double tmp = this->ui->binaryNumber->value();

    clearBoxes();

    this->ui->binaryNumber->setValue(tmp);
    this->ui->decimalNumber->valueFromText( QString::fromStdString( BinaryConverter::convertToDecimal(tmp) ) ) ;
    this->ui->octalNumber->valueFromText( QString::fromStdString( BinaryConverter::convertToOctal(tmp) ) );
    this->ui->hexadecimalNumber->setText( QString::fromStdString( BinaryConverter::convertToHexadecimal(tmp) ) );
}

void MainWindow::convertOctalToOthers() {
    double tmp = this->ui->octalNumber->value();

    clearBoxes();

    this->ui->octalNumber->setValue( tmp );
    this->ui->decimalNumber->valueFromText(QString::fromStdString( OctalConverter::convertToDecimal(tmp) ));
    this->ui->hexadecimalNumber->setText( QString::fromStdString( OctalConverter::convertToHexadecimal(tmp) ) ) ;
    this->ui->binaryNumber->valueFromText(QString::fromStdString( OctalConverter::convertToBinary(tmp) ));
}

void MainWindow::convertHexadecimalToOthers() {
    std::string tmp = this->ui->hexadecimalNumber->toMarkdown().toStdString();

    clearBoxes();

    this->ui->hexadecimalNumber->setText( QString::fromStdString(tmp) );
    this->ui->octalNumber->valueFromText( QString::fromStdString(HexadecimalConverter::convertToOctal(tmp) ));
    this->ui->decimalNumber->valueFromText( QString::fromStdString(HexadecimalConverter::convertToOctal(tmp) ) );
    this->ui->binaryNumber->valueFromText( QString::fromStdString(HexadecimalConverter::convertToOctal(tmp) ) );
}

void MainWindow::clearBoxes() {
    this->updateBoxes("0.0", "0.0", "0.0", "0.0");

}

void MainWindow::updateBoxes(QString _2, QString _8, QString _10, QString _16) {
    QDoubleSpinBox tmp;
    tmp.setMaximum(9999999999999);
    tmp.setDecimals(99);

    this->ui->octalNumber->setValue( tmp.valueFromText(_8) );
    this->ui->decimalNumber->setValue(tmp.valueFromText(_10));
    this->ui->hexadecimalNumber->setText(_16) ;
    this->ui->binaryNumber->setValue(tmp.valueFromText(_2));

}

void MainWindow::showAbout() {
    QMessageBox::about(this, "about", "A Qt port to Raed's numerical converter");
}
