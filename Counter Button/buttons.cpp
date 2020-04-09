#include "buttons.h"

buttons::buttons(QWidget *parentPtr): QWidget(){

    plus = new QPushButton(parentPtr);
    plus->setGeometry(40,30,30,30);
    plus->setText("+");

    connect(plus,SIGNAL(clicked()),this,SLOT(add()));

    count = new QLabel(parentPtr);
    count->setGeometry(40,10,50,10);

}
void buttons::add(){
    buttons::counter++;
    count->setNum(counter);
}
