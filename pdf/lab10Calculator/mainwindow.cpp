#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calcmodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    labCalc(new CalcModel)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clearButton_clicked()
{
    QString input = "C";
    labCalc->processUserInput(input);


    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_equalsButton_clicked()
{
    QString input = "=";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_divideButton_clicked()
{
    QString input = "/";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_multiplyButton_clicked()
{
    QString input = "*";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_minusButton_clicked()
{
    QString input = "-";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_plusButton_clicked()
{
    QString input = "+";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberZeroButton_clicked()
{
    QString input = "0";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberOneButton_clicked()
{
    QString input = "1";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberTwoButton_clicked()
{
    QString input = "2";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberThreeButton_clicked()
{
    QString input = "3";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberFourButton_clicked()
{
    QString input = "4";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberFiveButton_clicked()
{
    QString input = "5";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberSixButton_clicked()
{
    QString input = "6";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberSevenButton_clicked()
{
    QString input = "7";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberEightButton_clicked()
{
    QString input = "8";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}

void MainWindow::on_numberNineButton_clicked()
{
    QString input = "9";
    labCalc->processUserInput(input);

    QString temp = labCalc->getCurrentValue();
    ui->numberDisplay->setText(temp);
}
