#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class Calculator : public QObject
{
Q_OBJECT
public:
    explicit Calculator(QObject *parent = 0);

public slots:
    void numEntered(int);

    void clear();
    void allClear();

    void invertMode();

    void additionMode();
    void subtractionMode();
    void multiplyMode();
    void divideMode();

    void calculate();

signals:
    void displayChanged(QString);

private:
    int m_lastResult;
    int m_currentNumber;

    bool m_isNegative;
    bool m_isAdding;
    bool m_isSubtracting;
    bool m_isMultiplying;
    bool m_isDividing;

    void calculating();
};

#endif // CALCULATOR_H
