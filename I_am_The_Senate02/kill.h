#ifndef BUTTON_H
#define BUTTON_H
#include <QApplication>
#include <QtWidgets>

class kill : public QWidget{
    //a macro used to allow creating user defined slots
    Q_OBJECT
public:
    //here's a new thing
    //declare a constructor here
    //and provide its body in the .cpp file
    bool state;
    kill(QWidget *parentPTR);
public slots:
    void reveal();
private:
    QPushButton *btn;
    QPushButton *btn2;
    QLabel *label;
    int i = 0;

};

#endif // BUTTON_H
