#include <QApplication>
#include <QtWidgets>
#include "kill.h"
int main(int argCount, char *argValue[]){
    QApplication prog(argCount, argValue);

    kill *b = new kill();
    b->show();

    return prog.exec();
}
