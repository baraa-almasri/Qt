#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    // instead of putting every thing over here
    ui->setupUi(this);

    //
    this->stop = false;

    // buttons setup
    connect(this->ui->kill, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(this->ui->finiteStopwatch, SIGNAL(clicked()), this, SLOT(startFiniteStopWatch()));
    connect(this->ui->infiniteStopwatch, SIGNAL(clicked()), this, SLOT(startInfiniteStopWatch()));
    connect(this->ui->setSeconds, SIGNAL(clicked()), this, SLOT(setSeconds_clicked()));
    connect(this->ui->killTimer, SIGNAL(clicked()), this, SLOT(stopTimer()));

    // setup dialpad dialog
    popupDialpad = new dialpad(this);

    // limits
    this->ui->ammountOfSeconds->setRange(0, 1000000);
}

MainWindow::~MainWindow() {
    delete ui;
}

// finite stopwatch
void MainWindow::startFiniteStopWatch() {

    this->ui->ammountOfSeconds->setValue(this->popupDialpad->getSeconds());

    for(qreal kurrentSecond = 0; kurrentSecond <= this->ui->ammountOfSeconds->value() + 0.1; kurrentSecond += 0.1) {
        if(this->stop){
            break;
        }

        this->ui->secsDisplay->display(kurrentSecond);

        if( kurrentSecond >= 60 && (int)kurrentSecond % 60 == 0 ) {
            kurrentSecond += 2.0;
            playSound("qrc:/mp3s/timerFinishes.mp3");
        }

        delayInMilliseconds(0.1 * 1000);
    }

    playSound("qrc:/mp3s/timerFinishes.mp3");

}

void MainWindow::stopTimer() {
    this->stop = true;
}

// infinte stopwatch
void MainWindow::startInfiniteStopWatch() {

    for(qreal kurrentSecond = 0;  ; kurrentSecond += 0.1) {
        if(this->stop){
            break;
        }
        this->ui->secsDisplay->display(kurrentSecond);


        delayInMilliseconds(0.1 * 1000);

    }

    playSound("qrc:/mp3s/timerFinishes.mp3");
}

#include <QMessageBox>
void MainWindow::setSeconds_clicked() {
    // before calling the popup window, you need to create the window form
    // , include its header file in this window
    // and create an instance object of that window to be able to use it
    QMessageBox::warning(this, "LOL", "Currently broken");
    // reset seconds
    this->popupDialpad->setSeconds(0);
    this->popupDialpad->show();
    //dp->setModal(true);
    //dp->exec();
}
