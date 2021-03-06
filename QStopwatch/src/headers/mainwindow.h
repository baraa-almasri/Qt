#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QAbstractButton>
#include <QMediaPlayer>
#include <math.h>
#include "dialpad.h"
#include "settings.h"
#include "pausemenu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
 }

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // start timer
    void startFiniteStopWatch();
    // start stopwatch
    void startInfiniteStopWatch();
    // set seconds
    int setSeconds();
    // stop timer
    void stopTimer();
    // open settings function
    void openSettings();
    // halt the timer
    void pauseTimer();

private: // functions
    // static functions
    static void playSound(QString, short);
    static void delayInMilliseconds(double);


private: // variables
    Ui::MainWindow *ui;
    // dialpad instance object
    dialpad *popupDialpad;
    // stoping condition
    bool stop;
    // ammount of seconds of the stopwatch
    qreal seconds;
    // time up file path
    QString timeUp;
    // settings instance object
    Settings *popupSettings;
    // pause popup dialog
    pauseMenu *popupPause;
    // time up volume
    short volume;
};

#endif // MAINWINDOW_H
