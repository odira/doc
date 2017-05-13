/********************************************************************************
** Form generated from reading UI file 'calculatorinterface.ui'
**
** Created: Sat Oct 22 00:00:39 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORINTERFACE_H
#define UI_CALCULATORINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorInterface
{
public:
    QGridLayout *gridLayout;
    QLabel *entryLabel;
    QPushButton *buttonSeven;
    QPushButton *buttonEight;
    QPushButton *buttonNine;
    QPushButton *buttonAllClear;
    QPushButton *buttonFour;
    QPushButton *buttonFive;
    QPushButton *buttonSix;
    QPushButton *buttonClear;
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonThree;
    QPushButton *buttonCalculate;
    QPushButton *buttonZero;
    QPushButton *buttonAdd;
    QPushButton *buttonSubtract;
    QPushButton *buttonMultiply;
    QPushButton *buttonDivide;
    QPushButton *buttonInvert;

    void setupUi(QWidget *CalculatorInterface)
    {
        if (CalculatorInterface->objectName().isEmpty())
            CalculatorInterface->setObjectName(QString::fromUtf8("CalculatorInterface"));
        CalculatorInterface->resize(344, 312);
        gridLayout = new QGridLayout(CalculatorInterface);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        entryLabel = new QLabel(CalculatorInterface);
        entryLabel->setObjectName(QString::fromUtf8("entryLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        entryLabel->setFont(font);
        entryLabel->setFrameShape(QFrame::Panel);
        entryLabel->setFrameShadow(QFrame::Sunken);
        entryLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(entryLabel, 0, 0, 1, 4);

        buttonSeven = new QPushButton(CalculatorInterface);
        buttonSeven->setObjectName(QString::fromUtf8("buttonSeven"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonSeven->sizePolicy().hasHeightForWidth());
        buttonSeven->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonSeven, 1, 0, 1, 1);

        buttonEight = new QPushButton(CalculatorInterface);
        buttonEight->setObjectName(QString::fromUtf8("buttonEight"));
        sizePolicy.setHeightForWidth(buttonEight->sizePolicy().hasHeightForWidth());
        buttonEight->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonEight, 1, 1, 1, 1);

        buttonNine = new QPushButton(CalculatorInterface);
        buttonNine->setObjectName(QString::fromUtf8("buttonNine"));
        sizePolicy.setHeightForWidth(buttonNine->sizePolicy().hasHeightForWidth());
        buttonNine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonNine, 1, 2, 1, 1);

        buttonAllClear = new QPushButton(CalculatorInterface);
        buttonAllClear->setObjectName(QString::fromUtf8("buttonAllClear"));
        sizePolicy.setHeightForWidth(buttonAllClear->sizePolicy().hasHeightForWidth());
        buttonAllClear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonAllClear, 1, 3, 1, 1);

        buttonFour = new QPushButton(CalculatorInterface);
        buttonFour->setObjectName(QString::fromUtf8("buttonFour"));
        sizePolicy.setHeightForWidth(buttonFour->sizePolicy().hasHeightForWidth());
        buttonFour->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonFour, 2, 0, 1, 1);

        buttonFive = new QPushButton(CalculatorInterface);
        buttonFive->setObjectName(QString::fromUtf8("buttonFive"));
        sizePolicy.setHeightForWidth(buttonFive->sizePolicy().hasHeightForWidth());
        buttonFive->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonFive, 2, 1, 1, 1);

        buttonSix = new QPushButton(CalculatorInterface);
        buttonSix->setObjectName(QString::fromUtf8("buttonSix"));
        sizePolicy.setHeightForWidth(buttonSix->sizePolicy().hasHeightForWidth());
        buttonSix->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonSix, 2, 2, 1, 1);

        buttonClear = new QPushButton(CalculatorInterface);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        sizePolicy.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonClear, 2, 3, 1, 1);

        buttonOne = new QPushButton(CalculatorInterface);
        buttonOne->setObjectName(QString::fromUtf8("buttonOne"));
        sizePolicy.setHeightForWidth(buttonOne->sizePolicy().hasHeightForWidth());
        buttonOne->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonOne, 3, 0, 1, 1);

        buttonTwo = new QPushButton(CalculatorInterface);
        buttonTwo->setObjectName(QString::fromUtf8("buttonTwo"));
        sizePolicy.setHeightForWidth(buttonTwo->sizePolicy().hasHeightForWidth());
        buttonTwo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonTwo, 3, 1, 1, 1);

        buttonThree = new QPushButton(CalculatorInterface);
        buttonThree->setObjectName(QString::fromUtf8("buttonThree"));
        sizePolicy.setHeightForWidth(buttonThree->sizePolicy().hasHeightForWidth());
        buttonThree->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonThree, 3, 2, 1, 1);

        buttonCalculate = new QPushButton(CalculatorInterface);
        buttonCalculate->setObjectName(QString::fromUtf8("buttonCalculate"));
        sizePolicy.setHeightForWidth(buttonCalculate->sizePolicy().hasHeightForWidth());
        buttonCalculate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonCalculate, 3, 3, 2, 1);

        buttonZero = new QPushButton(CalculatorInterface);
        buttonZero->setObjectName(QString::fromUtf8("buttonZero"));
        sizePolicy.setHeightForWidth(buttonZero->sizePolicy().hasHeightForWidth());
        buttonZero->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonZero, 4, 0, 1, 1);

        buttonAdd = new QPushButton(CalculatorInterface);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonAdd, 4, 1, 1, 1);

        buttonSubtract = new QPushButton(CalculatorInterface);
        buttonSubtract->setObjectName(QString::fromUtf8("buttonSubtract"));
        sizePolicy.setHeightForWidth(buttonSubtract->sizePolicy().hasHeightForWidth());
        buttonSubtract->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonSubtract, 4, 2, 1, 1);

        buttonMultiply = new QPushButton(CalculatorInterface);
        buttonMultiply->setObjectName(QString::fromUtf8("buttonMultiply"));

        gridLayout->addWidget(buttonMultiply, 5, 0, 1, 1);

        buttonDivide = new QPushButton(CalculatorInterface);
        buttonDivide->setObjectName(QString::fromUtf8("buttonDivide"));
        sizePolicy.setHeightForWidth(buttonDivide->sizePolicy().hasHeightForWidth());
        buttonDivide->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonDivide, 5, 1, 1, 1);

        buttonInvert = new QPushButton(CalculatorInterface);
        buttonInvert->setObjectName(QString::fromUtf8("buttonInvert"));

        gridLayout->addWidget(buttonInvert, 5, 2, 1, 1);


        retranslateUi(CalculatorInterface);

        QMetaObject::connectSlotsByName(CalculatorInterface);
    } // setupUi

    void retranslateUi(QWidget *CalculatorInterface)
    {
        CalculatorInterface->setWindowTitle(QApplication::translate("CalculatorInterface", "CalculatorInterface", 0, QApplication::UnicodeUTF8));
        entryLabel->setText(QApplication::translate("CalculatorInterface", "TextLabel", 0, QApplication::UnicodeUTF8));
        buttonSeven->setText(QApplication::translate("CalculatorInterface", "7", 0, QApplication::UnicodeUTF8));
        buttonEight->setText(QApplication::translate("CalculatorInterface", "8", 0, QApplication::UnicodeUTF8));
        buttonNine->setText(QApplication::translate("CalculatorInterface", "9", 0, QApplication::UnicodeUTF8));
        buttonAllClear->setText(QApplication::translate("CalculatorInterface", "AC", 0, QApplication::UnicodeUTF8));
        buttonFour->setText(QApplication::translate("CalculatorInterface", "4", 0, QApplication::UnicodeUTF8));
        buttonFive->setText(QApplication::translate("CalculatorInterface", "5", 0, QApplication::UnicodeUTF8));
        buttonSix->setText(QApplication::translate("CalculatorInterface", "6", 0, QApplication::UnicodeUTF8));
        buttonClear->setText(QApplication::translate("CalculatorInterface", "C", 0, QApplication::UnicodeUTF8));
        buttonOne->setText(QApplication::translate("CalculatorInterface", "1", 0, QApplication::UnicodeUTF8));
        buttonTwo->setText(QApplication::translate("CalculatorInterface", "2", 0, QApplication::UnicodeUTF8));
        buttonThree->setText(QApplication::translate("CalculatorInterface", "3", 0, QApplication::UnicodeUTF8));
        buttonCalculate->setText(QApplication::translate("CalculatorInterface", "=", 0, QApplication::UnicodeUTF8));
        buttonZero->setText(QApplication::translate("CalculatorInterface", "0", 0, QApplication::UnicodeUTF8));
        buttonAdd->setText(QApplication::translate("CalculatorInterface", "+", 0, QApplication::UnicodeUTF8));
        buttonSubtract->setText(QApplication::translate("CalculatorInterface", "-", 0, QApplication::UnicodeUTF8));
        buttonMultiply->setText(QApplication::translate("CalculatorInterface", "*", 0, QApplication::UnicodeUTF8));
        buttonDivide->setText(QApplication::translate("CalculatorInterface", "/", 0, QApplication::UnicodeUTF8));
        buttonInvert->setText(QApplication::translate("CalculatorInterface", "+/-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalculatorInterface: public Ui_CalculatorInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORINTERFACE_H
