#ifndef PINUI_H
#define PINUI_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class PINui;
}

class PINui : public QDialog
{
    Q_OBJECT

public:
    explicit PINui(QWidget *parent = nullptr);
    ~PINui();

private:
    Ui::PINui *ui;
};

#endif // PINUI_H
