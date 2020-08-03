#include "mainwindow.h"
#include "ui_mainwindow.h"

// delay function
void MainWindow::delayInMilliseconds( double millisecondsToWait ) {
    //millisecondsToWait *= 1000;
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime ) {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

// play sound
void MainWindow::playSound(QString filePath, int playingTime) {
    QMediaPlayer *player = new QMediaPlayer;

    for(qreal kurrentSecond = 1; kurrentSecond <=  playingTime ; kurrentSecond++) {
        player->setMedia(QUrl(filePath));
        player->setVolume(100);
        player->play();

        delayInMilliseconds(2 * 1000);
    }
}
