#ifndef DIALPAD_H
#define DIALPAD_H

#include <QDialog>

namespace Ui {
    class dialpad;
}

class dialpad : public QDialog {
    Q_OBJECT

public slots:
    void addOne();
    void addTwo();
    void addThree();
    void addFour();
    void addFive();
    void addSix();
    void addSeven();
    void addEight();
    void addNine();
    void addZero();
    void GTFOH();

public:
    explicit dialpad(QWidget *parent = nullptr);
    ~dialpad();

    qreal getSeconds();
    void setSeconds(qreal);

private:
    Ui::dialpad *ui;
    qreal seconds;
};

#endif // DIALPAD_H
