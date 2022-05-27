#include "fraction_pnr.h"

void Fraction_PNR::setNumerator(int newNumerator)
{
    Numerator = newNumerator;
}

void Fraction_PNR::setDenominator(int newDenominator)
{
    Denominator = newDenominator;
}

int Fraction_PNR::getDenominator() const
{
    return Denominator;
}

int Fraction_PNR::getNumerator() const
{
    return Numerator;
}

Fraction_PNR Fraction_PNR::operator+(const Fraction_PNR& fr2)
{
    int n, d;
    if(this->Denominator != fr2.Denominator)
    {
        n = this->Numerator * fr2.getDenominator() + this->Denominator * fr2.getNumerator();
        d = this->Denominator * fr2.Denominator;
    } else
    {
        n = this->Numerator + fr2.getNumerator();
        d = this->Denominator;
    }
    Fraction_PNR fr3(n, d);
    return Fraction_PNR(n, d);
}

Fraction_PNR Fraction_PNR::operator-(const Fraction_PNR& fr2)
{
    int n, d;
    if(this->Denominator != fr2.Denominator)
    {
        n = this->Numerator * fr2.getDenominator() - this->Denominator * fr2.getNumerator();
        d = this->Denominator * fr2.Denominator;
    } else
    {
        n = this->Numerator - fr2.getNumerator();
        d = this->Denominator;
    }
    return Fraction_PNR(n, d);
}

Fraction_PNR Fraction_PNR::operator*(const Fraction_PNR& fr2)
{
    int n = this->Numerator * fr2.Numerator;
    int d = this->Denominator * fr2.Denominator;
    return Fraction_PNR(n, d);
}

Fraction_PNR Fraction_PNR::operator/(const Fraction_PNR& fr2)
{
    int n = this->Numerator * fr2.Denominator;
    int d = this->Denominator * fr2.Numerator;
    return Fraction_PNR(n, d);
}


