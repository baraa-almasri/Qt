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
    kill();
public slots:
    void reveal();
private:
    QPushButton *btn;
    QLabel *label;
};


#endif // BUTTON_H
