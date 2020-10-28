#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox> // about popup
#include "Converter/BinaryConverter.hpp"
#include "Converter/OctalConverter.hpp"
#include "Converter/DecimalConverter.hpp"
#include "Converter/HexadecimalConverter.hpp"
#include <QDoubleSpinBox> // valueFromText

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

typedef long long int lli;

class MainWindow : public QMainWindow {
    Q_OBJECT

public slots:
    // buttons actions
    void convertDecimalToOthers();
    void convertBinaryToOthers();
    void convertOctalToOthers();
    void convertHexadecimalToOthers();
    // about app
    void showAbout();


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private: // variables
    Ui::MainWindow *ui;

public:
    // clear number boxes
    void clearBoxes();
    void updateBoxes(QString _2, QString _8, QString _10, QString _16);

};
#endif // MAINWINDOW_H
