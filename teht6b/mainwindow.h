#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonN1_clicked();

    void on_buttonN2_clicked();

    void on_buttonN3_clicked();

    void on_buttonN4_clicked();

    void on_buttonN5_clicked();

    void on_buttonN6_clicked();

    void on_buttonN7_clicked();

    void on_buttonN8_clicked();

    void on_buttonN9_clicked();

    void on_buttonN0_clicked();

    void on_buttonClear_clicked();

    void on_buttonEnter_clicked();

    void on_buttonDiv_clicked();

    void on_buttonAdd_clicked();

    void on_buttonSub_clicked();

    void on_buttonMul_clicked();

private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state = 1;
    float result;
    short operand;

    void numberClickedHandler(int num);
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler(short op);
    void resetLineEdits();
};
#endif // MAINWINDOW_H
