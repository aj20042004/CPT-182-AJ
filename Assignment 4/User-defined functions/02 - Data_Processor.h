// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-26

// Last updated by Dayu Wang (dwang@stchas.edu) on 2023-02-15


#ifndef DATA_PROCESSOR_H
#define DATA_PROCESSOR_H

#include <algorithm>
#include <vector>

using std::max;
using std::vector;

/** Finds the maximum value among 4 integers.
    @param x1: first integer to compare
    @param x2: second integer to compare
    @param x3: third integer to compare
    @param x4: fourth integer to compare
    @return: maximum value among the 4 integers
*/
int max_value(int x1, int x2, int x3, int x4) { return max(max(x1, x2), max(x3, x4)); }

/** Finds the maximum value in a vector.
    @param vec: a non-empty vector
    @return: maximum value in the vector
*/
int max_value(const vector<int>& vec) {
    int max_value = INT_MIN;
    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++) {
        if (*it > max_value) { max_value = *it; }
    }
    return max_value;
}

/** Swaps two integers.
    @param x1: first integer to swap
    @param x2: second integer to swap
*/
void swap_integers(int& x1, int& x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

/** Swaps two elements in an array.
    @param arr: a non-empty array
    @param size: size of the array
    @param i: index of the first element to swap
    @param j: index of the second element to swap
*/
void swap_integers(int arr[], unsigned int size, unsigned int i, unsigned int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

/** Reverses a vector.
    @param vec: a vector
*/
void reverse_vector(vector<int>& vec) {
    size_t i = 0, j = vec.size() - 1;
    while (i < j) { swap_integers(vec[i++], vec[j--]); }
}

#endif