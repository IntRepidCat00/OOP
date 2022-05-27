#ifndef FRACTION_PNR_H
#define FRACTION_PNR_H

#include <QTextEdit>

class Fraction_PNR
{
public:
    Fraction_PNR() = default;
    Fraction_PNR(int num, int denom)
        : Numerator{num}, Denominator{denom}
    {}

    Fraction_PNR operator+(const Fraction_PNR& fr2);
    Fraction_PNR operator-(const Fraction_PNR& fr2);
    Fraction_PNR operator*(const Fraction_PNR& fr2);
    Fraction_PNR operator/(const Fraction_PNR& fr2);
    friend void operator<<(QTextEdit* Edit, const Fraction_PNR& fr)
    {
        Edit->setText(QString::number(fr.Numerator) + '/' + QString::number(fr.Denominator));
    }

    void setNumerator(int newNumerator);

    void setDenominator(int newDenominator);

    int getDenominator() const;

    int getNumerator() const;

private:
    int Numerator;
    int Denominator;


};

#endif // FRACTION_PNR_H
