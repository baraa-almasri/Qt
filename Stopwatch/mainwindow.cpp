#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // buttons setup
    connect(this->ui->kill, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(this->ui->finiteStopwatch, SIGNAL(clicked()), this, SLOT(startFiniteStopWatch()));
    connect(this->ui->infiniteStopwatch, SIGNAL(clicked()), this, SLOT(startInfiniteStopWatch()));

    // limits
    this->ui->ammountOfSeconds->setRange(0, 1000000);

}

MainWindow::~MainWindow() {
    delete ui;
}

// finite stopwatch
void MainWindow::startFiniteStopWatch() {
    qreal seconds = ui->ammountOfSeconds->value();

    for(qreal kurrentSecond = 1; kurrentSecond <= seconds + 0.1; kurrentSecond += 0.1) {
        this->ui->secsDisplay->display(kurrentSecond);
        delayInMilliseconds(0.1 * 1000);
    }

    playSound("/home/bebo/The Force/Qt/Stopwatch/timerFinishes.mp3", 3);

}

// infinte stopwatch
void MainWindow::startInfiniteStopWatch() {

    playSound("/home/bebo/The Force/Qt/Stopwatch/timerFinishes.mp3", 1);

    for(qreal kurrentSecond = 1; ; kurrentSecond += 0.1) {
        this->ui->secsDisplay->display(kurrentSecond);
        delayInMilliseconds(0.1 * 1000);
    }
}
