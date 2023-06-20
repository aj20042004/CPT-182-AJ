// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-11

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-20


#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <iostream>

using std::ostream;

/** A dynamic array of integers */
class Dynamic_Array {
public:
    // Constructors
    Dynamic_Array();  // Default constructor
    Dynamic_Array(const Dynamic_Array&);  // Copy constructor

    // Destructor
    ~Dynamic_Array();

    // Operators
    const Dynamic_Array& operator = (const Dynamic_Array&);  // Deep-copy assignment operator
    int& operator [] (size_t);  // Subscript operator (lvalue)
    const int& operator [] (size_t) const;  // Subscript operator (rvalue)
    friend ostream& operator << (ostream&, const Dynamic_Array&);  // Stream insertion operator

    // Class-member functions
    size_t size() const;  // Returns the size of the array.
    bool empty() const;  // Tests whether the array is empty.
    void push_back(int);  // Inserts an element to the rear end of the array.
    int find(int) const;  // Finds the index of the first occurrence of a target value in the array.

private:
    // Data fields
    static const size_t DEFAULT_CAPACITY;  // Default capacity when an empty array is created
    size_t capacity;  // Stores the maximum capacity of the array.
    size_t num_of_items;  // Stores the number of elements in the array.
    int* data;  // Stores the elements in the array.

    // Class-member function
    void resize();  // Doubles the capacity of the array.
};

#endif