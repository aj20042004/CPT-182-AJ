// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-17

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-17


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using std::ostream;

class Rectangle {
public:
    // Constructors
    Rectangle();  // Default constructor
    Rectangle(unsigned int, unsigned int);  // Constructs a rectangle with initial width and height.

    // Getters
    unsigned int get_width() const;  // Returns the width of the rectangle.
    unsigned int get_height() const;  // Returns the height of the rectangle.

    // Setters
    void set_width(unsigned int);  // Updates the width of the rectangle.
    void set_height(unsigned int);  // Updates the height of the rectangle.

    // Class-member functions
    unsigned int area() const;  // Calculates the area of the rectangle.
    unsigned int perimeter() const;  // Calculates the perimeter of the rectangle.

    // Operators
    friend ostream& operator << (ostream&, const Rectangle&);  // Stream insertion operator
    bool operator < (const Rectangle&) const;  // Tests whether this rectangle has smaller area than another rectangle.

private:
    // Data fields
    unsigned int width;  // Stores the width of the rectangle.
    unsigned int height;  // Stores the height of the rectangle.
};

#endif