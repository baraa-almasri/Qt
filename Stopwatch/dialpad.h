#ifndef DIALPAD_H
#define DIALPAD_H

#include <QDialog>

namespace Ui {
    class dialpad;
}

class dialpad : public QDialog {
    Q_OBJECT

public:
    explicit dialpad(QWidget *parent = nullptr);
    ~dialpad();

private:
    Ui::dialpad *ui;

};

#endif // DIALPAD_H
