#ifndef BUTTONS_H
#define BUTTONS_H
#include <QtWidgets>
#include <QApplication>
#include <string>
class buttons: public QWidget{
    Q_OBJECT
public slots:
    void add();
    void sub();
    void multiply();
    void divide();
    void addOne();
    void addTwo();
    void addThree();
    void addFour();
    void addFive();
    void addSix();
    void addSeven();
    void addEight();
    void addNine();
    void addZero();
    void equalsf();
    void erase();
    //void factorial();
public:
    buttons(QWidget *parent);
    double factorialFinder(double number);
private:
    QPushButton *plus, *minus, *mult, *div, *fact;
    QPushButton *equals;
    QLabel *res, *text;
    double result;
    double otherNumber;
    QLCDNumber *lcd;
    QGridLayout *grid;
    //numbers
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *zero;
    QPushButton *ce;
    char op;

};

#endif // BUTTONS_H
