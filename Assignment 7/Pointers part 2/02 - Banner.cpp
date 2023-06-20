// Created by Dayu Wang (dwang@stchas.edu) on 2020-04-13

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-20


#include "Banner.h"

// Default constructor
Banner::Banner() : width(0), height(0), message(NULL) {}

// Deep-copy assignment operator
const Banner& Banner::operator = (const Banner& rhs) {
    // Step 1: avoid self-assignment.
    if (this != &rhs) {
        // Step 2: delete all the current dynamic memory.
        if (message) {
            delete message;
            message = NULL;  // Do not forget to set a pointer to safe value after deleting it.
        }
        // Step 3: copy static data fields.
        width = rhs.width;
        height = rhs.height;
        // Step 4: copy dynamic data fields.
        if (rhs.message) { message = new string(*rhs.message); }
    }
    // Step 5: return.
    return *this;
}

// Copy constructor
Banner::Banner(const Banner& other) {
    // Step 1: set all pointers to NULL.
    message = NULL;
    // Step 2: set *this to other.
    *this = other;
}

// Destructor
Banner::~Banner() {
    if (message) { delete message; }
}

/** Calculates the area of the banner.
    @return: calculated area of the banner
*/
unsigned int Banner::area() const { return width * height; }

// Less-than operator
bool Banner::operator < (const Banner& other) const { return area() < other.area(); }