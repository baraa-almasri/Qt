#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>

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
    void setGoatSound();
    void setBlyatSound();
    void setSoundFromFile();

private:
    Ui::Settings *ui;

    QString timeUpFile;
};

#endif // SETTINGS_H
