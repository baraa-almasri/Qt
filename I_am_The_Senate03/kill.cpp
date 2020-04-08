#include "kill.h"
kill::kill(QWidget *parentPTR) : QWidget(){

    btn = new QPushButton(parentPTR);//pointer to the parent widget LOL
    btn->setText("execute order 66");
    btn->setGeometry(30,30,180,30);
    //setting an action to the button
    connect(btn,SIGNAL(clicked()),this,SLOT(order66()));

    btn2 = new QPushButton("That's against the senate!",parentPTR);
    btn2->setGeometry(30,80,180,30);

    label = new QLabel(parentPTR);
    label->setText("I am The Senate");
    label->setGeometry(70,5,180,30);
    label->setVisible(false);

    connect(btn2, SIGNAL(clicked()), this, SLOT(favLine()));
    //"this" points to class' namespace so it would show the label
    //or I guess so

}

void kill::order66(){
    QApplication::quit();
    //usleep(3000000);
}
void kill::favLine(){
    QMessageBox::question(this,"I am The Senate","It's treason then");
    QMessageBox::about(this,"I am The Senate","It's treason then");
    QMessageBox::aboutQt(this,"I am The Qt Senate");
    QMessageBox::warning(this,"I am The Senates","It's treason then");
    QMessageBox::information(this,"I am The Senate","It's treason then");
    QMessageBox::critical(this,"I am The Senate","It's treason then");
    label->setVisible(true);

}
