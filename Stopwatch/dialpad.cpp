#include "dialpad.h"
#include "ui_dialpad.h"

dialpad::dialpad(QWidget *parent): QDialog(parent), ui(new Ui::dialpad) {
    ui->setupUi(this);
    // buttons setup
    connect(this->ui->killPopup, SIGNAL(clicked()), this, SLOT(hide()));
}

dialpad::~dialpad() {
    delete ui;
}
