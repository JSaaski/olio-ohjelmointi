#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}


void MainWindow::numberClickedHandler(int num)
{
    if(state == 1){
        QString currentText = ui->lineEdit_num1->text();
        QString stringNum = QString::number(num);
        ui->lineEdit_num1->setText(currentText + stringNum);
        number1 = ui->lineEdit_num1->text();
    }
    else if(state == 2) {
        QString currentText = ui->lineEdit_num2->text();
        QString stringNum = QString::number(num);
        ui->lineEdit_num2->setText(currentText + stringNum);
        number2 = ui->lineEdit_num2->text();
    }

}

void MainWindow::resetLineEdits()
{
    ui->lineEdit_num1->setText("");
    ui->lineEdit_num2->setText("");
    ui->lineEdit_result->setText("");
}

void MainWindow::clearAndEnterClickHandler()
{
    QObject *senderObj = sender();
    QPushButton *senderButton = qobject_cast<QPushButton *>(senderObj);

    if (senderButton == ui->buttonClear) {
        resetLineEdits();
    }

    else if (senderButton == ui->buttonEnter) {

        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        switch(operand){
        case 0: //plus
            result = n1 + n2;
            break;
        case 1: //miinus
            result = n1 - n2;
            break;
        case 2: //jako
            result = n1 / n2;
            break;
        case 3: //kerto
            result = n1 * n2;
            break;
        }

        ui->lineEdit_result->setText(QString::number(result));
        state = 1;
    }
}
void MainWindow::addSubMulDivClickHandler(short op)
{
    operand = op;
    state = 2;
}



void MainWindow::on_buttonN1_clicked()
{
    numberClickedHandler(1);
}

void MainWindow::on_buttonN2_clicked()
{
    numberClickedHandler(2);
}

void MainWindow::on_buttonN3_clicked()
{
    numberClickedHandler(3);
}

void MainWindow::on_buttonN4_clicked()
{
    numberClickedHandler(4);
}

void MainWindow::on_buttonN5_clicked()
{
    numberClickedHandler(5);
}

void MainWindow::on_buttonN6_clicked()
{
    numberClickedHandler(6);
}

void MainWindow::on_buttonN7_clicked()
{
    numberClickedHandler(7);
}

void MainWindow::on_buttonN8_clicked()
{
    numberClickedHandler(8);
}

void MainWindow::on_buttonN9_clicked()
{
    numberClickedHandler(9);
}

void MainWindow::on_buttonN0_clicked()
{
    numberClickedHandler(0);
}

void MainWindow::on_buttonAdd_clicked()
{
    addSubMulDivClickHandler(0);
}

void MainWindow::on_buttonSub_clicked()
{
   addSubMulDivClickHandler(1);
}

void MainWindow::on_buttonDiv_clicked()
{
   addSubMulDivClickHandler(2);
}
void MainWindow::on_buttonMul_clicked()
{
   addSubMulDivClickHandler(3);
}



void MainWindow::on_buttonEnter_clicked()
{
  clearAndEnterClickHandler();
}


void MainWindow::on_buttonClear_clicked()
{
  clearAndEnterClickHandler();
}
