#ifndef BUTTONS_H
#define BUTTONS_H
#include <QApplication>
#include <QtWidgets>

class buttons: public QWidget{
    Q_OBJECT
public slots:
    void add();
    void subtract();
public:
    buttons(QWidget *parentPtr);
private:
    QPushButton *plus, *minus;
    double counter = 0;
    QLabel *count;

};


#endif
