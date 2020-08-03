#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QAbstractButton>
#include <QMediaPlayer>
#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public slots:
    void startFiniteStopWatch();
    void startInfiniteStopWatch();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private:
    Ui::MainWindow *ui;
    static void playSound(QString, int);
    static void delayInMilliseconds(double);
};

#endif // MAINWINDOW_H
