// Created by Dayu Wang (dwang@stchas.edu) on 2021-03-08

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-03


#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using std::istream;
using std::ostream;

/** A fraction with an integer numerator and a positive integer denominator */
class Fraction {
public:
    // Default constructor
    Fraction(int = 0, unsigned int = 1);

    // Operators
    Fraction operator + (const Fraction&) const;  // Overloads "Fraction + Fraction".
    Fraction operator + (int) const;  // Overloads "Fraction + int".
    Fraction operator + () const;  // Overloads unary '+' operator.
    Fraction operator - () const;  // Overloads unary '-' operator.
    Fraction operator - (const Fraction&) const;  // Overloads "Fraction - Fraction".
    Fraction operator - (int) const;  // Overloads "Fraction - int".
    Fraction operator * (const Fraction&) const;  // Overloads "Fraction * Fraction".
    Fraction operator * (int) const;  // Overloads "Fraction * int".
    Fraction operator / (const Fraction&) const;  // Overloads "Fraction / Fraction".
    Fraction operator / (int) const;  // Overloads "Fraction / int".
    Fraction operator += (const Fraction&);  // Overloads "Fraction += Fraction".
    Fraction operator += (int);  // Overloads "Fraction += int".
    Fraction operator -= (const Fraction&);  // Overloads "Fraction -= Fraction".
    Fraction operator -= (int);  // Overloads "Fraction -= int".
    Fraction operator *= (const Fraction&);  // Overloads "Fraction *= Fraction".
    Fraction operator *= (int);  // Overloads "Fraction *= int".
    Fraction operator /= (const Fraction&);  // Overloads "Fraction /= Fraction".
    Fraction operator /= (int);  // Overloads "Fraction /= int".
    Fraction& operator ++ ();  // Prefix increment
    Fraction operator ++ (int);  // Postfix increment
    Fraction& operator -- ();  // Prefix decrement
    Fraction operator -- (int);  // Postfix decrement
    bool operator < (const Fraction&) const;  // Overloads "Fraction < Fraction".
    bool operator < (int) const;  // Overloads "Fraction < int".
    bool operator <= (const Fraction&) const;  // Overloads "Fraction <= Fraction".
    bool operator <= (int) const;  // Overload "Fraction <= int".
    bool operator > (const Fraction&) const;  // Overloads "Fraction > Fraction".
    bool operator > (int) const;  // Overloads "Fraction > int".
    bool operator >= (const Fraction&) const;  // Overloads "Fraction >= Fraction".
    bool operator >= (int) const;  // Overloads "Fraction >= int".
    bool operator == (const Fraction&) const;  // Overloads "Fraction == Fraction".
    bool operator == (int) const;  // Overloads "Fraction == int".
    bool operator != (const Fraction&) const;  // Overloads "Fraction != Fraction".
    bool operator != (int) const;  // Overloads "Fraction != int".
    friend istream& operator >> (istream&, Fraction&);  // Overloads "istream >> Fraction".
    friend ostream& operator << (ostream&, const Fraction&);  // Overloads "ostream << Fraction".

private:
    // Data fields
    int numerator;  // Numerator of the fraction
    unsigned int denominator;  // Denominator (positive) of the fraction

    // Class-member functions
    static unsigned int GCD(unsigned int, unsigned int);  // Finds the GCD of two positive integers.
    void simplify();  // Simplifies the fraction to lowest terms.
    Fraction reciprocal() const;  // Returns the reciprocal of the fraction.
};

// Non-class-member functions
Fraction operator + (int, const Fraction&);  // Overloads "int + Fraction".
Fraction operator - (int, const Fraction&);  // Overloads "int - Fraction".
Fraction operator * (int, const Fraction&);  // Overloads "int * Fraction".
Fraction operator / (int, const Fraction&);  // Overloads "int / Fraction".
bool operator < (int, const Fraction&);  // Overloads "int < Fraction".
bool operator <= (int, const Fraction&);  // Overloads "int <= Fraction".
bool operator > (int, const Fraction&);  // Overloads "int > Fraction".
bool operator >= (int, const Fraction&);  // Overloads "int >= Fraction".
bool operator == (int, const Fraction&);  // Overloads "int == Fraction".
bool operator != (int, const Fraction&);  // Overloads "int != Fraction".

#endif