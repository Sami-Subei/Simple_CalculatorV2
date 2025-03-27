/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *txtDisplay;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *ButtonMult;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *ButtonDiv;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *ButtonAdd;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button0;
    QPushButton *ButtonDot;
    QPushButton *ButtonEqual;
    QPushButton *ButtonMinus;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(259, 386);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        txtDisplay = new QLineEdit(centralwidget);
        txtDisplay->setObjectName("txtDisplay");
        txtDisplay->setGeometry(QRect(20, 40, 221, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 100, 221, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Button7 = new QPushButton(widget);
        Button7->setObjectName("Button7");
        Button7->setStyleSheet(QString::fromUtf8("setStyleSheet{\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient();\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"};"));

        horizontalLayout->addWidget(Button7);

        Button8 = new QPushButton(widget);
        Button8->setObjectName("Button8");

        horizontalLayout->addWidget(Button8);

        Button9 = new QPushButton(widget);
        Button9->setObjectName("Button9");

        horizontalLayout->addWidget(Button9);

        ButtonMult = new QPushButton(widget);
        ButtonMult->setObjectName("ButtonMult");
        ButtonMult->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        ButtonMult->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(ButtonMult);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Button4 = new QPushButton(widget);
        Button4->setObjectName("Button4");

        horizontalLayout_2->addWidget(Button4);

        Button5 = new QPushButton(widget);
        Button5->setObjectName("Button5");

        horizontalLayout_2->addWidget(Button5);

        Button6 = new QPushButton(widget);
        Button6->setObjectName("Button6");

        horizontalLayout_2->addWidget(Button6);

        ButtonDiv = new QPushButton(widget);
        ButtonDiv->setObjectName("ButtonDiv");

        horizontalLayout_2->addWidget(ButtonDiv);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Button1 = new QPushButton(widget);
        Button1->setObjectName("Button1");

        horizontalLayout_3->addWidget(Button1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName("Button2");

        horizontalLayout_3->addWidget(Button2);

        Button3 = new QPushButton(widget);
        Button3->setObjectName("Button3");

        horizontalLayout_3->addWidget(Button3);

        ButtonAdd = new QPushButton(widget);
        ButtonAdd->setObjectName("ButtonAdd");

        horizontalLayout_3->addWidget(ButtonAdd);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Button0 = new QPushButton(widget);
        Button0->setObjectName("Button0");

        horizontalLayout_4->addWidget(Button0);

        ButtonDot = new QPushButton(widget);
        ButtonDot->setObjectName("ButtonDot");

        horizontalLayout_4->addWidget(ButtonDot);

        ButtonEqual = new QPushButton(widget);
        ButtonEqual->setObjectName("ButtonEqual");
        ButtonEqual->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(ButtonEqual);

        ButtonMinus = new QPushButton(widget);
        ButtonMinus->setObjectName("ButtonMinus");

        horizontalLayout_4->addWidget(ButtonMinus);


        verticalLayout->addLayout(horizontalLayout_4);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        ButtonMult->setText(QCoreApplication::translate("Calculator", "X", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ButtonDot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        ButtonEqual->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        ButtonMinus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
