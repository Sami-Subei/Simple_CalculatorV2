#include "calculator.h"
#include "ui_calculator.h"
#include <QJSEngine>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->txtDisplay->setReadOnly(true);

    ui->txtDisplay->setStyleSheet("font-size:24px;");

    ui->Button0->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button1->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button2->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button3->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button4->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button5->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button6->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button7->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button8->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->Button9->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");
    ui->ButtonDot->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: grey;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:grey");

    ui->ButtonAdd->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: #FFA500;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:#FFA500");
    ui->ButtonMinus->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: #FFA500;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:#FFA500");
    ui->ButtonDiv->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: #FFA500;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:#FFA500");
    ui->ButtonMult->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: #FFA500;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:#FFA500");
    ui->ButtonEqual->setStyleSheet(" border-style: solid;border-width:1px;border-radius:20px;border-color: #FFA500;max-width:40px;max-height:40px;min-width:40px;min-height:40px;background-color:#FFA500");


    QList<QPushButton*> numberButtons = {
        ui->Button0, ui->Button1, ui->Button2, ui->Button3,
        ui->Button4,ui->Button5,ui->Button6,ui->Button7,
        ui->Button8,ui->Button9
    } ;

    for(QPushButton* button : numberButtons) {
        connect(button, &QPushButton::clicked,this, &Calculator::onNumberClicked);
    }

    connect(ui->ButtonAdd, &QPushButton::clicked,this, &Calculator::onOperatorClicked);
    connect(ui->ButtonMinus, &QPushButton::clicked,this, &Calculator::onOperatorClicked);
    connect(ui->ButtonMult, &QPushButton::clicked,this, &Calculator::onOperatorClicked);
    connect(ui->ButtonDiv, &QPushButton::clicked,this, &Calculator::onOperatorClicked);

    connect(ui->ButtonEqual, &QPushButton::clicked,this, &Calculator::onEqualClicked);
    connect(ui->ButtonDot, &QPushButton::clicked, this, &Calculator::onDotClicked);

}



Calculator::~Calculator()
{
    delete ui;
}

void Calculator::onNumberClicked(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    if(newnumber) {
        ui->txtDisplay->clear();
        newnumber = false;
    }

    if(button) {
        ui->txtDisplay->setText(ui->txtDisplay->text() + "" + button->text() + "");
    }
}

void Calculator::onOperatorClicked(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if(button) {
        ui->txtDisplay->setText(ui->txtDisplay->text() + " " + button->text() + " ");
    }
}

void Calculator::onEqualClicked(){
    QString expression = ui->txtDisplay->text();

    QJSEngine engine;
    QJSValue result = engine.evaluate(expression);

    if(result.isError()){
        ui->txtDisplay->setText("Error");
        newnumber = true;
    } else {
        ui->txtDisplay->setText(result.toString());
        newnumber = true;

    }

}

void Calculator::onDotClicked() {
    QString text = ui->txtDisplay->text();


    ui->txtDisplay->setText(text + ".");
}
