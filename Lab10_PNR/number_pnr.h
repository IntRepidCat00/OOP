#ifndef NUMBER_PNR_H
#define NUMBER_PNR_H

#include <QTextEdit>
#include "fraction_pnr.h"

template<class T>
class Number_PNR
{
private:
    T Value;
public:
    Number_PNR() = default;
    Number_PNR(T initVal)
        : Value(initVal)
    {}
    void printOnScreen(QTextEdit * edit) {edit->setText(QString::number(Value))/*edit << Value*/;}
    Number_PNR operator+(Number_PNR num2) {return Number_PNR(this->Value + num2.Value);}
    Number_PNR operator-(Number_PNR num2) {return Number_PNR(this->Value - num2.Value);}
    Number_PNR operator*(Number_PNR num2) {return Number_PNR(this->Value * num2.Value);}
    Number_PNR operator/(Number_PNR num2) {return Number_PNR(this->Value / num2.Value);}
    void setValue(const T& newVal) {Value = newVal;}
    const T& getValue() {return Value;}
};

template<>
void Number_PNR<Fraction_PNR>::printOnScreen(QTextEdit * edit);


#endif // NUMBER_PNR_H
