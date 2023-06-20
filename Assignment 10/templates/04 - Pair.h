// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-17

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-17


#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using std::ostream;

template<class Type_1, class Type_2>
class Pair {
public:
    // Constructor
    Pair(const Type_1&, const Type_2&);

    // Destructor
    virtual ~Pair();  // To avoid warning messages

    // Getters
    Type_1 get_first() const;  // Returns the first value in the pair.
    Type_2 get_second() const;  // Returns the second value in the pair.

    // Setters
    void set_first(const Type_1&);  // Updates the first value in the pair.
    void set_second(const Type_2&);  // Updates the second value in the pair.

    // Operator
    bool operator < (const Pair<Type_1, Type_2>&) const;  // Tests whether this pair object is less than another pair object.

private:
    // Data fields
    Type_1 first;  // Stores the first value in the pair.
    Type_2 second;  // Stores the second value in the pair.
};

// Constructor
template<class Type_1, class Type_2>
Pair<Type_1, Type_2>::Pair(const Type_1& first, const Type_2& second) : first(first), second(second) {}

// Destructor
template<class Type_1, class Type_2>
Pair<Type_1, Type_2>::~Pair() {}

/** Returns the first value in the pair.
    @return: first value in the pair
*/
template<class Type_1, class Type_2>
Type_1 Pair<Type_1, Type_2>::get_first() const { return first; }

/** Returns the second value in the pair.
    @return: second value in the pair
*/
template<class Type_1, class Type_2>
Type_2 Pair<Type_1, Type_2>::get_second() const { return second; }

/** Updates the first value in the pair.
    @param first: updated first value in the pair
*/
template<class Type_1, class Type_2>
void Pair<Type_1, Type_2>::set_first(const Type_1& first) { this->first = first; }

/** Updates the second value in the pair.
    @param second: updated second value in the pair
*/
template<class Type_1, class Type_2>
void Pair<Type_1, Type_2>::set_second(const Type_2& second) { this->second = second; }

// Tests whether this pair object is less than another pair object.
template<class Type_1, class Type_2>
bool Pair<Type_1, Type_2>::operator < (const Pair<Type_1, Type_2>& other) const {
    if (get_first() < other.get_first()) { return true; }
    if (other.get_first() < get_first()) { return false; }
    return get_second() < other.get_second();
}

// Stream insertion operator
template<class Type_1, class Type_2>
ostream& operator << (ostream& out, const Pair<Type_1, Type_2>& p) {
    return out << '(' << p.get_first() << ", " << p.get_second() << ')';
}

#endif