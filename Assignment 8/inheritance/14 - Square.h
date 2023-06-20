// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    // Constructor with initial values of "x", "y", and "side_length"
    Square(double = 0, double = 0, double = 0);

    // Getter
    double get_side_length() const;  // Returns the side length of the square.

    // Setter
    void set_side_length(double);  // Updates the side length of the square.

    // Class-member functions
    double area() const;  // Calculates the area of the square.
    double perimeter() const;  // Calculates the perimeter of the square.

private:
    // Data field
    double side_length;  // Stores the side length of the square.
};

#endif