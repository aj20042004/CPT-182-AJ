// Created by Dayu Wang (dwang@stchas.edu) on 2022-05-09

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-29


#ifndef SORTING_H
#define SORTING_H

#include <algorithm>
#include <vector>

using std::swap;
using std::vector;

template<class T>
class Sorting {
public:
    // Static class-member functions
    void static selection_sort(vector<T>&);  // Selection sort
    void static bubble_sort(vector<T>&);  // Bubble sort
    void static insertion_sort(vector<T>&);  // Insertion sort
    void static merge_sort(vector<T>&);  // Merge sort
private:
    // Static class-member function

    // Merges two sorted vectors into a single sorted vector.
    void static merge(const vector<T>&, const vector<T>&, vector<T>&);
};

// Selection sort
template<class T>
void Sorting<T>::selection_sort(vector<T>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        size_t min = i;  // Stores the index of the min value in the rest of the vector.

        // Find the min value in the rest of the vector.
        for (size_t j = i + 1; j < vec.size(); j++) {
            if (vec.at(j) < vec.at(min)) { min = j; }
        }

        // Swap vec[min] with vec[i] if they are not the same.
        if (min != i) { swap(vec.at(i), vec.at(min)); }
    }
}

// Bubble sort
template<class T>
void Sorting<T>::bubble_sort(vector<T>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        bool swapped = false;  // Indicates whether a swap occurs in this iteration.
        for (size_t j = 1; j < vec.size() - i; j++) {
            if (vec.at(j) < vec.at(j - 1)) {
                swap(vec.at(j - 1), vec.at(j));
                swapped = true;
            }
        }

        // If no swap occurred in this iteration, then the vector is already sorted.
        if (!swapped) { return; }
    }
}

// Insertion sort
template<class T>
void Sorting<T>::insertion_sort(vector<T>& vec) {
    for (size_t mark = 1; mark < vec.size(); mark++) {
        T key = vec.at(mark);
        int j;
        for (j = (int)mark - 1; j >= 0 && vec.at(j) > key; j--) { vec.at(j + 1) = vec.at(j); }
        vec.at(j + 1) = key;
    }
}

/** Merges two sorted vectors into a single sorted vector.
    @param vec_1: first sorted vector to merge
    @param vec_2: second sorted vector to merge
    @param out: single output sorted vector
*/
template<class T>
void Sorting<T>::merge(const vector<T>& vec_1, const vector<T>& vec_2, vector<T>& out) {
    size_t i = 0, j = 0, k = 0;
    while (i < vec_1.size() && j < vec_2.size()) {
        if (vec_1.at(i) <= vec_2.at(j)) { out.at(k++) = vec_1.at(i++); }
        else { out.at(k++) = vec_2.at(j++); }
    }
    while (i < vec_1.size()) { out.at(k++) = vec_1.at(i++); }
    while (j < vec_2.size()) { out.at(k++) = vec_2.at(j++); }
}

// Merge sort
template<class T>
void Sorting<T>::merge_sort(vector<T>& vec) {
    // Base case
    if (vec.size() < 2) { return; }

    // Copy the left half of the vector into another vector.
    vector<T> left_half(vec.begin(), vec.begin() + vec.size() / 2);

    // Copy the right half of the vector into another vector.
    vector<T> right_half(vec.begin() + vec.size() / 2, vec.end());

    // Sort "left_half" and "right_half" recursively.
    merge_sort(left_half);
    merge_sort(right_half);

    // Merge the sorted left half and right half.
    merge(left_half, right_half, vec);
}

#endif