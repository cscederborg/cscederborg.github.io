#ifndef CALCMODEL_H
#define CALCMODEL_H

#include <QWidget>
#include <QString>

class CalcModel
{
public:
    CalcModel();

    void processUserInput(QString in);

    bool checkInputInt(QString in);

    QString getCurrentValue();

private:
    int state;
    int currentValue;
    int operand1;
    int result;

    QString operator1;
};

#endif // CALCMODEL_H
