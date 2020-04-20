#include <QApplication>
#include <QtWidgets>
#include "buttons.h"

int main(int c, char *v[]){
    QApplication prog(c,v);
    QWidget mainWindow;

    buttons *link = new buttons(&mainWindow);

    mainWindow.show();

    return prog.exec();
}
