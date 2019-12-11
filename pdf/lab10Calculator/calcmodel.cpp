#include "calcmodel.h"

CalcModel::CalcModel()
{
    state = 0;
    currentValue = 0;
    operand1 = 0;
    result = 0;

    operator1 = "";
}

void CalcModel::processUserInput(QString in)
{
    switch (state)
    {
    case 0:

        if (in == "C" || in == "0")
        {
            currentValue = 0;
        }
        else if (in == "+" || in == "-" || in == "/" || in == "*")
        {
            operand1 = currentValue;
            operator1 = in;
            state = 2;
        }
        else if (in.toInt() > 0 && in.toInt() <= 9)
        {
            currentValue = in.toInt();
            state = 1;
        }


        break;

    case 1:

        if (checkInputInt(in))
        {
            currentValue = currentValue*10 + in.toInt();
        }
        else if (in == "+" || in == "-" || in == "/" || in == "*")
        {
            operand1 = currentValue;
            operator1 = in;
            state = 2;
        }
        else if (in == "C")
        {
            currentValue = 0;
            state = 0;
        }

        break;

    case 2:

        if (checkInputInt(in))
        {
            currentValue = in.toInt();
            state = 3;
        }
        else if (in == "+" || in == "-" || in == "/" || in == "*")
        {
            operator1 = in;
        }
        else if (in == "C")
        {
            currentValue = 0;
            state = 0;
        }

        break;

    case 3:

        if (checkInputInt(in)) //Recursive State
        {
            currentValue = currentValue*10 + in.toInt();
        }
        else if (in == "+") //State 2 Indicators
        {
            result = operand1 + currentValue;
            operand1 = result;
            currentValue = result;
            state = 2;
        }
        else if (in == "-")
        {
            result = operand1 - currentValue;
            operand1 = result;
            currentValue = result;
            state = 2;
        }
        else if (in == "/")
        {
            result = operand1 / currentValue;
            operand1 = result;
            currentValue = result;
            state = 2;
        }
        else if (in == "*")
        {
            result = operand1 * currentValue;
            operand1 = result;
            currentValue = result;
            state = 2;
        }
        else if (in == "=") //State 0 Indicator
        {
            if (operator1 == "+")
            {
                result = operand1 + currentValue;
                currentValue = result;
                state = 0;
            }
            else if (operator1 == "-")
            {
                result = operand1 - currentValue;
                currentValue = result;
                state = 0;
            }
            else if (operator1 == "/")
            {
                result = operand1 / currentValue;
                currentValue = result;
                state = 0;
            }
            else if (operator1 == "*")
            {
                result = operand1 * currentValue;
                currentValue = result;
                state = 0;
            }
        }
        else if (in == "C")
        {
            currentValue = 0;
            state = 0;
        }

        break;

    }


}

bool CalcModel::checkInputInt(QString in)
{
    QChar temp = in[0];
    if (temp.isNumber())
    {
        return true;
    }
    return false;
}

QString CalcModel::getCurrentValue()
{
    QString temp = temp.number(currentValue);
    return temp;
}
