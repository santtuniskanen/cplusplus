#include "pinui.h"
#include "ui_pinui.h"

PINui::PINui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PINui)
{
    ui->setupUi(this);
    setWindowTitle("PINUI");
}

PINui::~PINui()
{
    qDebug()<<"Deleting PINui object";
    delete ui;
}
