#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "calcmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_clearButton_clicked();

    void on_equalsButton_clicked();

    void on_divideButton_clicked();

    void on_multiplyButton_clicked();

    void on_minusButton_clicked();

    void on_plusButton_clicked();

    void on_numberZeroButton_clicked();

    void on_numberOneButton_clicked();

    void on_numberTwoButton_clicked();

    void on_numberThreeButton_clicked();

    void on_numberFourButton_clicked();

    void on_numberFiveButton_clicked();

    void on_numberSixButton_clicked();

    void on_numberSevenButton_clicked();

    void on_numberEightButton_clicked();

    void on_numberNineButton_clicked();

private:
    Ui::MainWindow *ui;
    CalcModel *labCalc;
};

#endif // MAINWINDOW_H
