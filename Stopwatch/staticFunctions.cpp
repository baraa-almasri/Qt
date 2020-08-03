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

    player->setMedia(QUrl(filePath));
    player->setVolume(100);
    player->play();

}
