// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#include "Rectangle.h"

#include <algorithm>
#include <cmath>

using std::sqrt;
using std::swap;

// Constructors

// Constructor with initial values of "width" and "height"
Rectangle::Rectangle(unsigned int width, unsigned int height) : width(width), height(height) {}

// Getters

/** Returns the width of the rectangle.
    @return: width of the rectangle
*/
unsigned int Rectangle::get_width() const { return width; }

/** Returns the height of the rectangle.
    @return: height of the rectangle
*/
unsigned int Rectangle::get_height() const { return height; }

// Setters

/** Updates the width of the rectangle.
    @param new_width: updated value of the width of the rectangle
*/
void Rectangle::set_width(unsigned int new_width) { width = new_width; }

/** Updates the height of the rectangle.
    @param new_height: updated value of the height of the rectangle
*/
void Rectangle::set_height(unsigned int new_height) { height = new_height; }

// Class-member functions

/** Calculates the area of the rectangle.
    @return: calculated area of the rectangle
*/
unsigned int Rectangle::area() const { return width * height; }

/** Calculates the perimeter of the rectangle.
    @return: calculated perimeter of the rectangle
*/
unsigned int Rectangle::perimeter() const { return 2 * (width + height); }

/** Tests whether the rectangle is a square.
    @return: {true} if the rectangle is a square; {false} otherwise
*/
bool Rectangle::is_square() const { return width == height; }

/** Tests whether this rectangle has smaller area than another rectangle.
    @param other: the other rectangle to compare with this rectangle
    @return: {true} if this rectangle has smaller area than the other rectangle; {false} otherwise
*/
bool Rectangle::is_smaller_than(const Rectangle& other) const { return area() < other.area(); }

/** Tests whether this rectangle can be placed inside a circle.
    @param cir: a circle to compare
    @return: {true} if this rectangle can be placed inside the circle; {false} otherwise
*/
bool Rectangle::can_be_placed_inside(const Circle& cir) const { return sqrt(width * width + height * height) <= 2 * cir.radius; }

/** Transposes a rectangle.
    @param rect: rectangle to transpose
*/
void transpose(Rectangle& rect) { swap(rect.width, rect.height); }