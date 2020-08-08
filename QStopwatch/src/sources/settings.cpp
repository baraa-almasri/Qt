#include "src/headers/settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings) {
    ui->setupUi(this);

    // buttons setup
    connect(this->ui->killSettings, SIGNAL(clicked()), this, SLOT(hide()));

    connect(this->ui->goat, SIGNAL(clicked()), this, SLOT(setGoatSound()));
    connect(this->ui->blyat, SIGNAL(clicked()), this, SLOT(setBlyatSound()));
    connect(this->ui->setSoundFile, SIGNAL(clicked()), this, SLOT(setSoundFromFile()));
}

Settings::~Settings() {
    delete ui;
}

void Settings::setGoatSound() {
    this->setTimeUpFile( "qrc:/assets/timerFinishes(goat).mp3" );
}

void Settings::setBlyatSound() {
    this->setTimeUpFile( "qrc:/assets/timerFinishes(blyaaaat).mp3" );
}

short Settings::setVolume() {
    return (short)this->ui->volumeSlider->value();
}

void Settings::setSoundFromFile() {
    this->timeUpFile = QInputDialog::getText(this, "File Path", "Enter File Path", QLineEdit::Normal);
}


void Settings::setTimeUpFile(QString filePath) {
    this->timeUpFile = filePath;
}

QString Settings::getTimeUpFile() {
    return this->timeUpFile;
}
