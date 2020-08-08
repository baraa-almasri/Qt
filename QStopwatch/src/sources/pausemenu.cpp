#include "src/headers/pausemenu.h"
#include "ui_pausemenu.h"

pauseMenu::pauseMenu(QWidget *parent) : QDialog(parent), ui(new Ui::pauseMenu) {
    ui->setupUi(this);

    // button setup
    connect(this->ui->resumeButton, SIGNAL(clicked()), this, SLOT(hide()));
}

pauseMenu::~pauseMenu() {
    delete ui;
}
