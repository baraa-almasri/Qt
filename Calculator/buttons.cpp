#include "buttons.h"

buttons::buttons(QWidget *parent): QWidget(){

    result = 0;

    text = new QLabel("Result:",parent);
    text->setGeometry(10,10,40,20);

    res = new QLabel(parent);
    res->setGeometry(50,10,160,20);

    plus = new QPushButton("+",parent);
    plus->setGeometry(40,40,25,25);
    connect(plus,SIGNAL(clicked()),this,SLOT(add()));


    minus = new QPushButton("-",parent);
    minus->setGeometry(80,40,25,25);
    connect(minus,SIGNAL(clicked()),this,SLOT(sub()));

    mult = new QPushButton("*",parent);
    mult->setGeometry(120,40,25,25);
    connect(mult,SIGNAL(clicked()),this,SLOT(multiply()));

    div = new QPushButton("/",parent);
    div->setGeometry(160,40,25,25);
    connect(div,SIGNAL(clicked()),this,SLOT(divide()));



}
void buttons::add(){
    //this->result++;
    otherNumber = QInputDialog::getDouble(this,"Dialog","Enter a value!");
    this->result += otherNumber;
    res->setNum(this->result);
}
void buttons::sub(){
    otherNumber = QInputDialog::getDouble(this,"Dialog","Enter a value!");
    this->result -= otherNumber;
    res->setNum(this->result);
}
void buttons::multiply(){
    otherNumber = QInputDialog::getDouble(this,"Dialog","Enter a value!");
    this->result *= otherNumber;
    res->setNum(this->result);
}
void buttons::divide(){
    otherNumber = QInputDialog::getDouble(this,"Dialog","Enter a value!");
    if (otherNumber == 0){
        QMessageBox::warning(this,"Warning!","Hold up you can't devide by zero!, look at this mess you ruined the number :(");
        result = -69420;
        res->setNum(this->result);
    }else{
        this->result /= otherNumber;
        res->setNum(this->result);
    }
}
