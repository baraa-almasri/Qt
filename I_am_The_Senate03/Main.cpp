#include <QApplication>
#include <QtWidgets>
#include "kill.h"
int main(int argCount, char *argValue[]){
    QApplication prog(argCount, argValue);
    QWidget window;
    kill *b = new kill(&window);
    kill *label = new kill(&window);
    //kill *msg = new kill(&window);
    //b->show();

   // QMessageBox *d = new  QMessageBox::information(&window,"TT","Kpoop");
     // = QMessageBox::information("LOL","Hello there General Kenobi");
    window.show();



    /*/QMessageBox *msg = new QMessageBox();
    msg->setText("lol");
    msg->show();
*/
    return prog.exec();
}
