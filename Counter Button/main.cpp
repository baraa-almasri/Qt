#include <QApplication>
#include <QWidget>
#include "buttons.h"
int main(int argsCount, char *argsVal[]){
    QApplication program(argsCount, argsVal);
    QWidget mainWindow;
    buttons *add = new buttons(&mainWindow);
    buttons *minus = new buttons(&mainWindow);
    mainWindow.show();

    return program.exec();
}
