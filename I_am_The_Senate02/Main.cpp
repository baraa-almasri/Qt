#include <QApplication>
#include <QtWidgets>
#include "kill.h"
int main(int argCount, char *argValue[]){
    QApplication prog(argCount, argValue);
    QWidget window;
    kill *b = new kill(&window);
    kill *label = new kill(&window);
    //b->show();
    window.show();
    /*
    as usual compile using:
    $ qmake
    $ make
    then run the executable
    $ ./I_am_The_Senate
    */
    return prog.exec();
}
