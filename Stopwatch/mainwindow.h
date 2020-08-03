#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QAbstractButton>
#include <QMediaPlayer>
#include <math.h>
#include "dialpad.h"


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

private: // functions
    // static functions
    static void playSound(QString, int);
    static void delayInMilliseconds(double);


private: // variables
    Ui::MainWindow *ui;
    // dialout instance object
    dialpad *popupDialpad;
    qreal seconds;
    bool stop;
};

#endif // MAINWINDOW_H
