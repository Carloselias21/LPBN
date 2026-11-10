#include "mainwindow.h"
#include "ui_mainwindow.h"


#define PWM 14
#define led 0
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode (led, OUPUT);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    digitalWrite (led,HIGH);
    ui->label->setText("LED ON");
}



void MainWindow::on_pushButton_2_clicked()
{
        digitalWrite (led,LOW);
        ui->label->setText("LED OFF");

}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{

}

