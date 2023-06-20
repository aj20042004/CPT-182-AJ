// Created by Dayu Wang (dwang@stchas.edu) on 2021-03-08

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-03

#include "Fraction.h"

#include <cmath>

using std::abs;

// Default Constructor
Fraction::Fraction(int numerator, unsigned int denominator) : numerator(numerator), denominator(denominator) {
    simplify();
}

// Class-member functions

/** Finds the GCD of two positive integers.
    @param x: first positive integer
    @param y: second positive integer
    @returns:GCD of {x} and {y}
*/
unsigned int Fraction::GCD(unsigned int x, unsigned int y) {
    if (x < y) { return GCD(y, x); }
    if (x % y == 0) { return y; }
    else { return GCD(y, x % y); }
}

/** Reduces the fraction to irreducible form. */
void Fraction::simplify() {
    if (!numerator) {
        denominator = 1;
        return;
    }
    unsigned int gcd = GCD((unsigned int)abs(numerator), denominator);
    numerator /= gcd;
    denominator /= gcd;
}

/** Overloads operator '+' for "Fraction + Fraction".
    @param other: second operand
    @returns: addition result
*/
Fraction Fraction::operator + (const Fraction& other) const {
    Fraction result;
    result.denominator = denominator * other.denominator;
    result.numerator = numerator * other.denominator + denominator * other.numerator;
    result.simplify();
    return result;
}

/** Overloads operator '+' for "Fraction + int".
    @param other: second operand
    @returns:addition result
*/
Fraction Fraction::operator + (int other) const { return *this + Fraction(other, 1); }

/** Overloads operator '+' for "int + Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: addition result
*/
Fraction operator + (int first_operand, const Fraction& second_operand) { return second_operand + first_operand; }

/** Overloads the unary '+' operator.
    @returns: current fraction
*/
Fraction Fraction::operator + () const { return *this; }

/** Overloads the unary '-' operator.
    @returns: opposite fraction
*/
Fraction Fraction::operator - () const { return Fraction(-numerator, denominator); }

/** Overloads "Fraction - Fraction".
    @param other: second operand
    @returns: subtraction result
*/
Fraction Fraction::operator - (const Fraction& other) const { return *this + (-other); }

/** Overloads "Fraction - int".
    @param other: second operand
    @returns: subtraction result
*/
Fraction Fraction::operator - (int other) const { return *this + (-other); }

/** Overloads "int - Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: subtraction result
*/
Fraction operator - (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) - second_operand; }

/** Overloads "Fraction * Fraction".
    @param other: second operand
    @returns: multiplication result
*/
Fraction Fraction::operator * (const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.simplify();
    return result;
}

/** Overloads "Fraction * int".
    @param other: second operand
    @returns: multiplication result
*/
Fraction Fraction::operator * (int other) const { return *this * Fraction(other, 1); }

/** Overloads "int * Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: multiplication result
*/
Fraction operator * (int first_operand, const Fraction& second_operand) { return second_operand * first_operand; }

/** Gets the reciprocal of the fraction.
    @returns: reciprocal of the fraction
*/
Fraction Fraction::reciprocal() const {
    int sign = numerator > 0 ? 1 : -1;
    unsigned int new_denominator = (unsigned int)abs(numerator);
    int new_numerator = (int)denominator * sign;
    return Fraction(new_numerator, new_denominator);
}

/** Overloads "Fraction / Fraction".
    @param other: second operand
    @returns: division result
*/
Fraction Fraction::operator / (const Fraction& other) const { return *this * other.reciprocal(); }

/** Overloads "Fraction / int".
    @param other: second operand
    @returns: division result
*/
Fraction Fraction::operator / (int other) const { return *this / Fraction(other, 1); }

/** Overloads "int / Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: division result
*/
Fraction operator / (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) / second_operand; }

/** Overloads "Fraction += Fraction".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator += (const Fraction& other) { return *this = *this + other; }

/** Overloads "Fraction += int".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator += (int other) { return *this = *this + other; }

/** Overloads "Fraction -= Fraction".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator -= (const Fraction& other) { return *this = *this - other; }

/** Overloads "Fraction -= int".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator -= (int other) { return *this = *this - other; }

/** Overloads "Fraction *= Fraction".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator *= (const Fraction& other) { return *this = *this * other; }

/** Overloads "Fraction *= int".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator *= (int other) { return *this = *this * other; }

/** Overloads "Fraction /= Fraction".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator /= (const Fraction& other) { return *this = *this / other; }

/** Overloads "Fraction /= int".
    @param other: second operand
    @returns: fraction after the compound assignment
*/
Fraction Fraction::operator /= (int other) { return *this = *this / other; }

/** Overloads "++Fraction".
    @returns: reference to the fraction after increment
*/
Fraction& Fraction::operator ++ () {
    *this += 1;
    return *this;
}

/** Overloads "Fraction++".
    @returns: a copy of the fraction before increment
*/
Fraction Fraction::operator ++ (int) {
    Fraction result = *this;
    ++*this;
    return result;
}

/** Overloads "--Fraction".
    @returns: reference to the fraction after decrement
*/
Fraction& Fraction::operator -- () {
    *this -= 1;
    return *this;
}

/** Overloads "Fraction--".
    @returns: a copy of the fraction before decrement
*/
Fraction Fraction::operator -- (int) {
    Fraction result = *this;
    --*this;
    return result;
}

/** Overloads "Fraction < Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is less than {other}; {false} otherwise
*/
bool Fraction::operator < (const Fraction& other) const { return numerator * other.denominator < denominator* other.numerator; }

/** Overloads "Fraction < int"
    @param: other: second operand
    @returns: {true} if current fraction is less than {other}; {false} otherwise
*/
bool Fraction::operator < (int other) const { return *this < Fraction(other, 1); }

/** Overloads "int < Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is less than {second_operand}; {false} otherwise
*/
bool operator < (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) < second_operand; }

/** Overloads "Fraction <= Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is less than or equal to {other}; {false} otherwise
*/
bool Fraction::operator <= (const Fraction& other) const { return numerator * other.denominator <= denominator * other.numerator; }

/** Overloads "Fraction <= int"
    @param: other: second operand
    @returns: {true} if current fraction is less than or equal to {other}; {false} otherwise
*/
bool Fraction::operator <= (int other) const { return *this <= Fraction(other, 1); }

/** Overloads "int <= Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is less than or equal to {second_operand}; {false} otherwise
*/
bool operator <= (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) <= second_operand; }

/** Overloads "Fraction > Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is greater than {other}; {false} otherwise
*/
bool Fraction::operator > (const Fraction& other) const { return numerator * other.denominator > denominator * other.numerator; }

/** Overloads "Fraction > int"
    @param: other: second operand
    @returns: {true} if current fraction is greater than {other}; {false} otherwise
*/
bool Fraction::operator > (int other) const { return *this > Fraction(other, 1); }

/** Overloads "int > Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is greater than {second_operand}; {false} otherwise
*/
bool operator > (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) > second_operand; }

/** Overloads "Fraction >= Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is greater than or equal to {other}; {false} otherwise
*/
bool Fraction::operator >= (const Fraction& other) const { return numerator * other.denominator >= denominator * other.numerator; }

/** Overloads "Fraction >= int"
    @param: other: second operand
    @returns: {true} if current fraction is greater than or equal to {other}; {false} otherwise
*/
bool Fraction::operator >= (int other) const { return *this >= Fraction(other, 1); }

/** Overloads "int >= Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is greater than or equal to {second_operand}; {false} otherwise
*/
bool operator >= (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) >= second_operand; }

/** Overloads "Fraction == Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is equal to {other}; {false} otherwise
*/
bool Fraction::operator == (const Fraction& other) const { return numerator * other.denominator == denominator * other.numerator; }

/** Overloads "Fraction == int"
    @param: other: second operand
    @returns: {true} if current fraction is equal to {other}; {false} otherwise
*/
bool Fraction::operator == (int other) const { return *this == Fraction(other, 1); }

/** Overloads "int == Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is equal to {second_operand}; {false} otherwise
*/
bool operator == (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) == second_operand; }

/** Overloads "Fraction != Fraction"
    @param: other: second operand
    @returns: {true} if current fraction is unequal to {other}; {false} otherwise
*/
bool Fraction::operator != (const Fraction& other) const { return numerator * other.denominator != denominator * other.numerator; }

/** Overloads "Fraction != int"
    @param: other: second operand
    @returns: {true} if current fraction is unequal to {other}; {false} otherwise
*/
bool Fraction::operator != (int other) const { return *this != Fraction(other, 1); }

/** Overloads "int != Fraction".
    @param first_operand: left operand
    @param second_operand: right operand
    @returns: {true} if {first_operand} is unequal to {second_operand}; {false} otherwise
*/
bool operator != (int first_operand, const Fraction& second_operand) { return Fraction(first_operand, 1) != second_operand; }

/** Overloads "istream >> Fraction".
    @param in: an input stream
    @param f: a Fraction object
    @returns: input stream after loading the fraction
*/
std::istream& operator >> (std::istream& in, Fraction& f) { return in >> f.numerator >> f.denominator; }

/** Overloads "ostream << Fraction".
    @param out: an output stream
    @param f: a Fraction object
    @returns: output stream after printing the fraction
*/
std::ostream& operator << (std::ostream& out, const Fraction& f) { return out << f.numerator << " / " << f.denominator; }