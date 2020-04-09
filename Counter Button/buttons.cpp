#include "buttons.h"

buttons::buttons(QWidget *parentPtr): QWidget(){

    plus = new QPushButton(parentPtr);
    plus->setGeometry(40,30,30,30);
    plus->setText("+");

    connect(plus,SIGNAL(clicked()),this,SLOT(add()));

    minus = new QPushButton(parentPtr);
    minus->setGeometry(80,30,30,30);
    minus->setText("-");
    connect(minus,SIGNAL(clicked()),this,SLOT(subtract()));


    count = new QLabel(parentPtr);
    count->setGeometry(70,10,50,10);

}
void buttons::add(){
    buttons::counter++;
    count->setNum(counter);
}
void buttons::subtract(){
    buttons::counter--;
    count->setNum(counter);
}
