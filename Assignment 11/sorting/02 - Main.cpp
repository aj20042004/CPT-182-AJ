// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-29

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-29


#include "Sorting.h"

#include <iostream>
#include <vector>

using namespace std;

template<class T>
ostream& operator << (ostream&, const vector<T>&);  // Stream insertion operator

int main() {
    vector<unsigned int> vec = { 3, 8, 6, 2, 4, 0, 9, 11, 2, 5, 1 };
    cout << "Original vector: " << vec << endl;

    // Use selection sort to sort the vector.
    vector<unsigned int> sorted_vec_1(vec);
    Sorting<unsigned int>::selection_sort(sorted_vec_1);
    cout << "Selection sort: " << sorted_vec_1 << endl;

    // Use bubble sort to sort the vector.
    vector<unsigned int> sorted_vec_2(vec);
    Sorting<unsigned int>::bubble_sort(sorted_vec_2);
    cout << "Bubble sort: " << sorted_vec_2 << endl;

    // Use insertion sort to sort the vector.
    vector<unsigned int> sorted_vec_3(vec);
    Sorting<unsigned int>::insertion_sort(sorted_vec_3);
    cout << "Insertion sort: " << sorted_vec_3 << endl;

    // Use merge sort to sort the vector.
    vector<unsigned int> sorted_vec_4(vec);
    Sorting<unsigned int>::merge_sort(sorted_vec_4);
    cout << "Merge sort: " << sorted_vec_4 << endl;

    system("pause");
    return 0;
}

// Overloads the stream insertion operator to output a vector.
template<class T>
ostream& operator << (ostream& out, const vector<T>& vec) {
    out << '[';
    for (size_t i = 0; i < vec.size(); i++) {
        out << vec.at(i);
        if (i != vec.size() - 1) { out << ", "; }
    }
    return out << ']';
}