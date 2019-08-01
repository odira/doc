#ifndef CALCULATORINTERFACE_H
#define CALCULATORINTERFACE_H

#include <QWidget>
#include <QSignalMapper>

class Calculator;

namespace Ui {
    class CalculatorInterface;
}

class CalculatorInterface : public QWidget {
    Q_OBJECT
public:
    CalculatorInterface(QWidget *parent = 0);
    ~CalculatorInterface();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CalculatorInterface *ui;
    Calculator *m_calculator;

    QSignalMapper *buttonSignalMapper;

private slots:


private slots:
};

#endif // CALCULATORINTERFACE_H
