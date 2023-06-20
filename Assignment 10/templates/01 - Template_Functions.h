// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-17

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-17


#ifndef TEMPLATE_FUNCTIONS_H
#define TEMPLATE_FUNCTIONS_H

/** Swaps the values of two variables of the same type.
    @param x: first value to swap
    @param y: second value to swap
*/
template<class T>
void _swap(T& x, T& y) {
    T& temp = x;
    x = y;
    y = temp;
}

/** Returns the minimum among three variables of the same type.
    @param x: first value to compare
    @param y: second value to compare
    @param z: third value to compare
    @return: minimum in the three variables
*/
template<class T>
T min_of_three(const T& x, const T& y, const T& z) {
    if (x < y) {
        if (x < z) { return x; }
        else { return z; }
    } else {
        if (y < z) { return y; }
        else { return z; }
    }
}

#endif