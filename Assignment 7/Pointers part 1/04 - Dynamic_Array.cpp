// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-11

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-20


#include "Dynamic_Array.h"

// Default capacity
const size_t Dynamic_Array::DEFAULT_CAPACITY = 10;

// Default constructor
Dynamic_Array::Dynamic_Array() : capacity(DEFAULT_CAPACITY), num_of_items(0) { data = new int[capacity]; }

// Copy constructor
Dynamic_Array::Dynamic_Array(const Dynamic_Array& other) {
    data = NULL;
    *this = other;
}

// Destructor
Dynamic_Array::~Dynamic_Array() {
    if (data) { delete[] data; }
}

// Deep-copy assignment operator
const Dynamic_Array& Dynamic_Array::operator = (const Dynamic_Array& rhs) {
    // Step 1: avoid self-assignment.
    if (this != &rhs) {
        // Step 2: delete current dynamic memory.
        if (data) {
            delete[] data;
            data = NULL;  // Do not forget to set a pointer to safe value after deleting it.
        }
        // Step 3: copy static data fields.
        capacity = rhs.capacity;
        num_of_items = rhs.num_of_items;
        // Step 4: copy dynamic data fields.
        if (num_of_items <= capacity) {
            data = new int[capacity];
            for (size_t i = 0; i < num_of_items; i++) { data[i] = rhs.data[i]; }
        }
    }
    // Step 5: return.
    return *this;
}

// Subscript operator (lvalue)
int& Dynamic_Array::operator [] (size_t index) { return data[index]; }

// Subscript operator (rvalue)
const int& Dynamic_Array::operator [] (size_t index) const { return data[index]; }

// Stream insertion operator
ostream& operator << (ostream& out, const Dynamic_Array& arr) {
    out << "[ ";
    for (size_t i = 0; i < arr.size(); i++) {
        out << arr[i];
        if (i != arr.size() - 1) { out << ", "; }
    }
    out << " ]";
    return out;
}

/** Returns the size of the array.
    @return: size of the array
*/
size_t Dynamic_Array::size() const { return num_of_items; }

/** Tests whether the array is empty.
    @return: {true} if the array is empty; {false} otherwise
*/
bool Dynamic_Array::empty() const { return !size(); }

/** Doubles the capacity of the array. */
void Dynamic_Array::resize() {
    capacity *= 2;
    int* new_data = new int[capacity];
    for (size_t i = 0; i < size(); i++) { new_data[i] = data[i]; }
    delete[] data;
    data = new_data;
}

/** Inserts a new element to the rear end of the array.
    @param value: new element to append to the array
*/
void Dynamic_Array::push_back(int value) {
    if (size() == capacity) { resize(); }
    data[num_of_items++] = value;
}

/** Finds the index of the first occurrence of a target value in the array.
    @param target: target value to search in the array
    @return: index of the first occurrence of the target value; or {-1} if target is not found in the array.
*/
int Dynamic_Array::find(int target) const {
    // Linear search
    for (size_t i = 0; i < size(); i++) {
        if (target == data[i]) { return i; }
    }
    return -1;
}