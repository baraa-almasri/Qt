#ifndef BUTTONS_H
#define BUTTONS_H
#include <QtWidgets>
#include <QApplication>
class buttons: public QWidget{
    Q_OBJECT
public slots:
    void add();
    void sub();
    void multiply();
    void divide();
public:
    buttons(QWidget *parent);
private:
    QPushButton *plus, *minus, *mult, *div;
    QLabel *res, *text;
    double result;
    double otherNumber;

};

#endif // BUTTONS_H
