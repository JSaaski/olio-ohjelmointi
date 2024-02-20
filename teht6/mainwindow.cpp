#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}


void MainWindow::on_buttonCount_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"Nappia painettu";
    ui->lineEdit->setText(""+s+"");

}


void MainWindow::on_buttonReset_clicked()
{
    x = 0;
    QString s = QString::number(x);
    qDebug()<<"Reset nappia painettu";
    ui->lineEdit->setText(s);

}

