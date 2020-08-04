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

    connect(this->ui->settingsButton, SIGNAL(clicked()), this, SLOT(openSettings()));

    // setup dialpad dialog
    this->popupDialpad = new dialpad(this);
    // setup settings dialog
    this->popupSettings = new Settings(this);

    // limits
    this->ui->ammountOfSeconds->setRange(0, 1000000);

    // default sound
    this->timeUp = "qrc:/mp3s/timerFinishes(goat).mp3";
}

MainWindow::~MainWindow() {
    delete ui;
}

// finite stopwatch
void MainWindow::startFiniteStopWatch() {

    this->stop = false;

    this->timeUp = this->popupSettings->getTimeUpFile();

    this->ui->ammountOfSeconds->setValue(this->popupDialpad->getSeconds());

    for(qreal kurrentSecond = 0; kurrentSecond <= this->ui->ammountOfSeconds->value() ; kurrentSecond += 0.1) {
        if(this->stop){
            break;
        }

        this->ui->secsDisplay->display(kurrentSecond);

        delayInMilliseconds(0.1 * 1000);
    }


    playSound(timeUp);

}

void MainWindow::stopTimer() {
    this->stop = true;
}

// infinte stopwatch
void MainWindow::startInfiniteStopWatch() {
    this->stop = false;

    this->timeUp = this->popupSettings->getTimeUpFile();

    for(qreal kurrentSecond = 0;  ; kurrentSecond += 0.1) {
        if(this->stop){
            break;
        }
        this->ui->secsDisplay->display(kurrentSecond);

        delayInMilliseconds(0.1 * 1000);
    }

    playSound(timeUp);
}

void MainWindow::setSeconds_clicked() {
    // before calling the popup window, you need to create the window form
    // , include its header file in this window
    // and create an instance object of that window to be able to use it

    // reset seconds
    this->popupDialpad->setSeconds(0);
    this->popupDialpad->show();
    //dp->setModal(true);
    //dp->exec();
}

// open settings
void MainWindow::openSettings() {

    this->popupSettings->show();

}
