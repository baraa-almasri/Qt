#include "kill.h"
//providing the body of the constructor
kill::kill() : QWidget(){

    /*btn = new QPushButton(this);//"this" points to the button pointer
    btn->setText("execute order 66");
    btn->setFixedSize(180,30);
    //setting an action to the button
    connect(btn,SIGNAL(clicked()),qApp,SLOT(quit()));
    //qApp points to the main Qt application
    */
    btn = new QPushButton(this);
    btn->setText("This is against the senate!");
    btn->setGeometry(40,70,180,30);
    label = new QLabel("I am The Senate!!",this);
    label->setVisible(false);
    QObject::connect(btn,SIGNAL(clicked()),this,SLOT(reveal()));

}
void kill::reveal(){
    label->setVisible(true);
}
