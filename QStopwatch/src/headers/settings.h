#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include <QInputDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog {
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    void setTimeUpFile(QString);
    QString getTimeUpFile();

public slots:
    // set timer ending sound to goat screaming
    void setGoatSound();
    // set timer ending sound to kid screaming blyat
    void setBlyatSound();
    // set timer ending sound from file
    void setSoundFromFile();
    // set volume
    short setVolume();

private:
    Ui::Settings *ui;
    // path to timer ending sound file
    QString timeUpFile;
};

#endif // SETTINGS_H
