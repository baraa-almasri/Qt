#include <QApplication>
#include <QtWidgets>
int main(int argCount, char *argValue[]){
    QApplication prog(argCount, argValue);
    QWidget window;
    QPushButton *btn;
    btn = new QPushButton("Hello there general Kenobi",&window);
    btn->setToolTip("This button does nothing");
    btn->setGeometry(10,40,180,30);//setGeometry(x-axis, y-axis, width, height)
    //making cursor appear as hand when hovering over the button
    btn->setCursor(Qt::PointingHandCursor);
    window.show();
    
    /*to compile a Qt project run:
    $ qmake
    $ make
    and that's it for tiny projects
    */
    return prog.exec();
}
