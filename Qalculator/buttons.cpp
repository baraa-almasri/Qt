#include "buttons.h"

buttons::buttons(QWidget *parent): QWidget(){

    grid = new QGridLayout(parent);

    result = 0;
    op = '\0';

    lcd = new QLCDNumber(16,parent);
    lcd->setDecMode();
    grid->addWidget(lcd,1,1,2,5);


    plus = new QPushButton("+",parent);
    //plus->setGeometry(40,40,25,25);
    connect(plus,SIGNAL(clicked()),this,SLOT(add()));

    grid->addWidget(plus,6,4,1,1);

    minus = new QPushButton("-",parent);
    //minus->setGeometry(80,40,25,25);
    connect(minus,SIGNAL(clicked()),this,SLOT(sub()));

    grid->addWidget(minus,6,5,1,1);

    mult = new QPushButton("*",parent);
    //mult->setGeometry(120,40,25,25);
    connect(mult,SIGNAL(clicked()),this,SLOT(multiply()));

    grid->addWidget(mult,5,4,1,1);

    div = new QPushButton("/",parent);
    //div->setGeometry(160,40,25,25);
    connect(div,SIGNAL(clicked()),this,SLOT(divide()));
    grid->addWidget(div,5,5,1,1);

    equals = new QPushButton("=",parent);
    //equals->setFixedSize(80,78);
    connect(equals,SIGNAL(clicked()),this,SLOT(equalsf()));
    grid->addWidget(equals,7,5,1,1);

    ce = new QPushButton("CE",parent);
    connect(ce,SIGNAL(clicked()),this,SLOT(erase()));
    grid->addWidget(ce,4,4,1,2);

    //numbers
    seven = new QPushButton("7",parent);
    connect(seven,SIGNAL(clicked()),this,SLOT(addSeven()));
    grid->addWidget(seven,4,1,1,1);

    eight = new QPushButton("8",parent);
    connect(eight,SIGNAL(clicked()),this,SLOT(addEight()));
    grid->addWidget(eight,4,2,1,1);

    nine = new QPushButton("9",parent);
    connect(nine,SIGNAL(clicked()),this,SLOT(addNine()));
    grid->addWidget(nine,4,3,1,1);

    four = new QPushButton("4",parent);
    connect(four,SIGNAL(clicked()),this,SLOT(addFour()));
    grid->addWidget(four,5,1,1,1);

    five = new QPushButton("5",parent);
    connect(five,SIGNAL(clicked()),this,SLOT(addFive()));
    grid->addWidget(five,5,2,1,1);

    six = new QPushButton("6",parent);
    connect(six,SIGNAL(clicked()),this,SLOT(addSix()));
    grid->addWidget(six,5,3,1,1);

    one = new QPushButton("1",parent);
    connect(one,SIGNAL(clicked()),this,SLOT(addOne()));
    grid->addWidget(one,6,1,1,1);

    two = new QPushButton("2",parent);
    connect(two,SIGNAL(clicked()),this,SLOT(addTwo()));
    grid->addWidget(two,6,2,1,1);

    three = new QPushButton("3",parent);
    connect(three,SIGNAL(clicked()),this,SLOT(addThree()));
    grid->addWidget(three,6,3,1,1);

    zero = new QPushButton("0",parent);
    connect(zero,SIGNAL(clicked()),this,SLOT(addZero()));
    grid->addWidget(zero,7,1,1,1);





}
void buttons::erase(){
    result = 0;
    lcd->display(result);
}
void buttons::add(){
    otherNumber = result;
    result = 0;
    op = '+';
    lcd->display(result);

}
void buttons::sub(){
    otherNumber = result;
    result = 0;
    op = '-';
    lcd->display(result);

}
void buttons::multiply(){
    otherNumber = result;
    result = 0;
    op = '*';
    lcd->display(result);

}
void buttons::divide(){
    otherNumber = result;
    result = 0;
    op = '/';
    lcd->display(result);

}
void buttons::equalsf(){
    switch(op){
        case '+':
            result += otherNumber;
            break;
        case '-':
            result -= otherNumber;
            result *= -1;
            break;
        case '*':
            result *= otherNumber;
            break;
        case '/':
            if (result == 0){
                QMessageBox::warning(this,"Warning!","Hold up you can't devide by zero!, look at this mess you ruined the number :(");
                result = -69420;
            }
            else{
                result /= otherNumber;
                result *= 10;
            }
            break;
    }

    lcd->display(result);
}
//Numbers
void buttons::addOne(){
    result *= 10;
    result += 1;
    lcd->display(result);
}
void buttons::addTwo(){
    result *= 10;
    result += 2;
    lcd->display(result);
}
void buttons::addThree(){
    result *= 10;
    result += 3;
    lcd->display(result);
}
void buttons::addFour(){
    result *= 10;
    result += 4;
    lcd->display(result);
}
void buttons::addFive(){
    result *= 10;
    result += 5;
    lcd->display(result);
}
void buttons::addSix(){
    result *= 10;
    result += 6;
    lcd->display(result);
}
void buttons::addSeven(){
    result *= 10;
    result += 7;
    lcd->display(result);
}
void buttons::addEight(){
    result *= 10;
    result += 8;
    lcd->display(result);
}
void buttons::addNine(){
    result *= 10;
    result += 9;
    lcd->display(result);
}
void buttons::addZero(){
    result *= 10;
    //result += 10;
    lcd->display(result);
}
