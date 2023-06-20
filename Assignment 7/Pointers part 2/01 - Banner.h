// Created by Dayu Wang (dwang@stchas.edu) on 2020-04-13

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-10-20


#ifndef BANNER_H
#define BANNER_H

#include <string>

using std::string;

class Banner {
public:
    // Constructors
    Banner();  // Default constructor
    Banner(const Banner&);  // Copy constructor

    // Destructor
    ~Banner();

    // Operators
    const Banner& operator = (const Banner&);  // Deep-copy assignment operator
    bool operator < (const Banner&) const;  // Less-than operator

    // Class-member function
    unsigned int area() const;  // Calculates the area of the banner.

private:
    // Data fields
    unsigned int width;  // Width of the banner
    unsigned int height;  // Height of the banner
    string* message;  // Message to show on the banner
};

#endif