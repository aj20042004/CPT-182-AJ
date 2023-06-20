// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Circle.h"

class Rectangle {
public:
    // Constructor
    Rectangle(unsigned int = 0, unsigned int = 0);  // Constructor with initial values of "width" and "height"

    // Getters
    unsigned int get_width() const;  // Returns the width of the rectangle.
    unsigned int get_height() const;  // Returns the height of the rectangle.

    // Setters
    void set_width(unsigned int);  // Updates the width of the rectangle.
    void set_height(unsigned int);  // Updates the height of the rectangle.

    // Class-member functions
    unsigned int area() const;  // Calculates the area of the rectangle.
    unsigned int perimeter() const;  // Calculates the perimeter of the rectangle.
    bool is_square() const;  // Tests whether the rectangle is a square.
    bool is_smaller_than(const Rectangle&) const;  // Tests whether this rectangle has smaller area than another rectangle.
    bool can_be_placed_inside(const Circle&) const;  // Tests whether the rectangle can be placed inside a circle.
    friend void transpose(Rectangle&);  // Transposes a rectangle.

private:
    // Data fields
    unsigned int width;  // Stores the width of the rectangle.
    unsigned int height;  // Stores the height of the rectangle.
};

#endif