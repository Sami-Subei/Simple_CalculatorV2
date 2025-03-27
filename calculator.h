#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void onNumberClicked();
    void onOperatorClicked();
    void onEqualClicked();
    void onDotClicked();

private:
    Ui::Calculator *ui;

    bool newnumber = false;


};
#endif // CALCULATOR_H
