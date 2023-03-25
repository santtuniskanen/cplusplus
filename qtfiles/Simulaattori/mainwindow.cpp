#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    correctCard = 1234;
    correctPin = 4321;
    cardNumber = 0;
    pinNumber = 0;
    attempts = 0;
    ui->setupUi(this);
    connect(ui->nappi, SIGNAL(clicked()),
            this, SLOT(clickHandler()));

    pRFIDreader = new RFIDreader(this);
    connect(pRFIDreader, SIGNAL(sendCardNumber(short)),
            this,SLOT(receiveCardNumber(short)));
    pPINui = new PINui(this);
    updateUI();
    setWindowTitle("Initial State");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    pRFIDreader->open();

}

void MainWindow::receiveCardNumber(short num)
{
    cardNumber = num;
    updateUI();
}

void MainWindow::receivePinNumber(short num)
{
    pinNumber = num;
    updateUI();
}

void MainWindow::updateUI()
{
    ui->cardNumber->setText(QString::number(cardNumber));
    ui->pinNumber->setText(QString::number(pinNumber));
    ui->numberOfAttempts->setText(QString::number(attempts));
}

