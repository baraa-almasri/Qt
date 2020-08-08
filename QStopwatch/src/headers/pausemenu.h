#ifndef PAUSEMENU_H
#define PAUSEMENU_H

#include <QDialog>

namespace Ui {
class pauseMenu;
}

class pauseMenu : public QDialog
{
    Q_OBJECT

public:
    explicit pauseMenu(QWidget *parent = nullptr);
    ~pauseMenu();

private:
    Ui::pauseMenu *ui;
};

#endif // PAUSEMENU_H
