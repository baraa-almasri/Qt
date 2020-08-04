#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QAbstractButton>
#include <QMediaPlayer>
#include <math.h>
#include "dialpad.h"
#include "settings.h"

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
    void startFiniteStopWatch();
    void startInfiniteStopWatch();
    void setSeconds_clicked();
    void stopTimer();
    void openSettings();

private: // functions
    // static functions
    static void playSound(QString);
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
};

#endif // MAINWINDOW_H
