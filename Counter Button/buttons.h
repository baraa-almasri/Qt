#ifndef BUTTONS_H
#define BUTTONS_H
#include <QApplication>
#include <QtWidgets>

class buttons: public QWidget{
    Q_OBJECT
public slots:
    void add();
public:
    buttons(QWidget *parentPtr);
private:
    QPushButton *plus, *minus, *equals;
    double counter = 0;
    QLabel *count;

};


#endif
