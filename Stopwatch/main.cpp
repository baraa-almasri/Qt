#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication *program = new QApplication(argc, argv);

    MainWindow *w = new MainWindow(nullptr);
    w->show();

    return program->exec();
}
