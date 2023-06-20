// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Square.h"

// Constructor with initial values of "x", "y", and "side_length"
Square::Square(double x, double y, double side_length) : side_length(side_length) {
    set_x(x);
    set_y(y);
}

// Getter

/** Returns the side length of the square.
    @return: side length of the square
*/
double Square::get_side_length() const { return side_length; }

// Setter

/** Updates the side length of the square.
    @param side_length: updated side length of the square
*/
void Square::set_side_length(double side_length) { this->side_length = side_length; }

// Class-member functions

/** Calculates the area of the square.
    @return: calculated area of the square
*/
double Square::area() const { return side_length * side_length; }

/** Calculates the perimeter of the square.
    @return: calculated perimeter of the square
*/
double Square::perimeter() const { return 4 * side_length; }