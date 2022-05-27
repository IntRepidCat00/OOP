#include "number_pnr.h"


template<>
void Number_PNR<Fraction_PNR>::printOnScreen(QTextEdit * edit)
{
    edit->setText(QString::number(Value.getNumerator()) + '/' + QString::number(Value.getDenominator()));
}

template class Number_PNR<Fraction_PNR>;

