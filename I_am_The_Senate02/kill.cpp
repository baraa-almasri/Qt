#include "kill.h"
//providing the body of the constructor
kill::kill(QWidget *parentPTR) : QWidget(){

    btn = new QPushButton(parentPTR);//"this" points to the button pointer
    btn->setText("execute order 66");
    btn->setGeometry(30,30,180,30);
    //setting an action to the button
    connect(btn,SIGNAL(clicked()),qApp,SLOT(quit()));
    //qApp points to the main Qt application
    btn2 = new QPushButton("That's against the senate!",parentPTR);
    btn2->setGeometry(30,80,180,30);

    label = new QLabel(parentPTR);
    label->setText("I am The Senate");
    label->setGeometry(70,5,180,30);
    label->setVisible(false);

    connect(btn2, SIGNAL(clicked()), this, SLOT(reveal()));
    //"this" points to class' namespace so it would show the label
}

void kill::reveal(){
    label->setVisible(true);
}
