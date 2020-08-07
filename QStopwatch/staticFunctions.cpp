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
void MainWindow::playSound(QString filePath) {
    QMediaPlayer *player = new QMediaPlayer;

    // will be discussed later
    if(filePath[0] == 'q') {
        player->setMedia(QUrl(filePath));
    }
    else {
        player->setMedia(QUrl::fromLocalFile(filePath));
    }
    //

    player->setVolume(100);
    player->play();

}
