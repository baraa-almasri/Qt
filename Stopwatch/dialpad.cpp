#include "dialpad.h"
#include "ui_dialpad.h"

dialpad::dialpad(QWidget *parent): QDialog(parent), ui(new Ui::dialpad) {
    ui->setupUi(this);

    this->setSeconds(0);

    // buttons setup
    connect(this->ui->killPopup, SIGNAL(clicked()), this, SLOT(hide()));

    connect(this->ui->one, SIGNAL(clicked()), this, SLOT(addOne()));
    connect(this->ui->two, SIGNAL(clicked()), this, SLOT(addTwo()));
    connect(this->ui->three, SIGNAL(clicked()), this, SLOT(addThree()));
    connect(this->ui->four, SIGNAL(clicked()), this, SLOT(addFour()));
    connect(this->ui->five, SIGNAL(clicked()), this, SLOT(addFive()));
    connect(this->ui->six, SIGNAL(clicked()), this, SLOT(addSix()));
    connect(this->ui->seven, SIGNAL(clicked()), this, SLOT(addSeven()));
    connect(this->ui->eight, SIGNAL(clicked()), this, SLOT(addEight()));
    connect(this->ui->nine, SIGNAL(clicked()), this, SLOT(addNine()));
    connect(this->ui->zero, SIGNAL(clicked()), this, SLOT(addZero()));

}

dialpad::~dialpad() {
    delete ui;
}

// close the dialog
void dialpad::GTFOH() {

}

//Numbers
void dialpad::addOne(){
    this->seconds *= 10;
    this->seconds += 1;
}
void dialpad::addTwo(){
    this->seconds *= 10;
    this->seconds += 2;
}
void dialpad::addThree(){
    this->seconds *= 10;
    this->seconds += 3;
}
void dialpad::addFour(){
    this->seconds *= 10;
    this->seconds += 4;
}
void dialpad::addFive(){
    this->seconds *= 10;
    this->seconds += 5;
}
void dialpad::addSix(){
    this->seconds *= 10;
    this->seconds += 6;
}
void dialpad::addSeven(){
    this->seconds *= 10;
    this->seconds += 7;
}
void dialpad::addEight(){
    this->seconds *= 10;
    this->seconds += 8;
}
void dialpad::addNine(){
    this->seconds *= 10;
    this->seconds += 9;
}
void dialpad::addZero(){
    this->seconds *= 10;

}

qreal dialpad::getSeconds() {
    return this->seconds;
}

void dialpad::setSeconds(qreal seconds) {
    this->seconds = seconds;
}
