#include "calculator.h"

Calculator::Calculator(QObject *parent) :
    QObject(parent), m_lastResult(0), m_currentNumber(0), m_isAdding(true)
{
}

void Calculator::numEntered(int num)
{
    m_currentNumber < 0 ? m_currentNumber = m_currentNumber*10 - num :
                          m_currentNumber = m_currentNumber*10 + num;

    emit displayChanged(QString::number(m_currentNumber));
}

void Calculator::clear()
{
    m_currentNumber = 0;
    emit displayChanged(QString::number(m_currentNumber));
}

void Calculator::allClear()
{
    m_currentNumber = 0;
    m_lastResult = 0;
    emit displayChanged(QString::number(m_currentNumber));
}

void Calculator::invertMode()
{
    m_currentNumber *= -1;
    emit displayChanged(QString::number(m_currentNumber));
}

void Calculator::additionMode()
{
    calculating();
    m_isAdding = true;
}

void Calculator::subtractionMode()
{
    calculating();
    m_isSubtracting = true;
}

void Calculator::multiplyMode()
{
    calculating();
    m_isMultiplying = true;
}

void Calculator::divideMode()
{
    calculating();
    m_isDividing = true;
}

void Calculator::calculate()
{
    if (m_currentNumber == 0) return;

    calculating();
    emit displayChanged(QString::number(m_lastResult));
}

void Calculator::calculating()
{
    if (m_isAdding) m_lastResult += m_currentNumber;
    else if (m_isSubtracting) m_lastResult -= m_currentNumber;
    else if (m_isMultiplying) m_lastResult *= m_currentNumber;
    else if (m_isDividing) m_lastResult /= m_currentNumber;
    else m_lastResult = m_currentNumber;

    m_currentNumber = 0;
    m_isAdding = m_isSubtracting = m_isMultiplying = m_isDividing = false;
}
