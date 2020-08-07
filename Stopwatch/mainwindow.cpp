#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    // instead of putting every thing over here
    ui->setupUi(this);

    //
    this->stop = false;

    // buttons setup

    connect(this->ui->finiteStopwatch, SIGNAL(clicked()), this, SLOT(startFiniteStopWatch()));
    connect(this->ui->infiniteStopwatch, SIGNAL(clicked()), this, SLOT(startInfiniteStopWatch()));
    connect(this->ui->killTimer, SIGNAL(clicked()), this, SLOT(stopTimer()));

    connect(this->ui->_exec66 , SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(this->ui->openSettingsPopup, SIGNAL(clicked()), this, SLOT(openSettings()));

    // setup dialpad dialog
    this->popupDialpad = new dialpad(this);
    // setup settings dialog
    this->popupSettings = new Settings(this);

    // resetup seconds display
    delete this->ui->secsDisplay;
    ui->secsDisplay = new QLCDNumber(10, ui->centralwidget);
    ui->secsDisplay->setObjectName(QString::fromUtf8("secsDisplay"));

    ui->verticalLayout->addWidget(ui->secsDisplay);
    //this->ui->secsDisplay = new QLCDNumber(1000000000, this);

    // default sound
    this->popupSettings->setTimeUpFile( "qrc:/mp3s/timerFinishes(goat).mp3" );


}

MainWindow::~MainWindow() {
    delete ui;
}

// timer
void MainWindow::startFiniteStopWatch() {
    this->stop = false;

    this->timeUp = this->popupSettings->getTimeUpFile();

    this->seconds = setSeconds();

    for(qreal kurrentSecond = this->seconds; kurrentSecond >= 0 ; kurrentSecond -= 0.1) {
        if(this->stop){
            break;
        }

        this->ui->secsDisplay->display(kurrentSecond);

        delayInMilliseconds(0.1 * 1000);
    }

    this->ui->secsDisplay->display(0);

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

int MainWindow::setSeconds() {
    // before calling the popup window, you need to create the window form
    // , include its header file in this window
    // and create an instance object of that window to be able to use it

    // reset seconds
    this->popupDialpad->setSeconds(0);
    // pause main program execution to set the ammount of secontds
    this->popupDialpad->setModal(true);
    this->popupDialpad->exec();

    return this->popupDialpad->getSeconds();
}

// open settings
void MainWindow::openSettings() {

    this->popupSettings->show();

}
