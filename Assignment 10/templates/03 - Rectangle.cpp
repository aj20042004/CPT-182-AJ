// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-17

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-17


#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : width(0), height(0) {}

// Constructs a rectangle with initial width and height.
Rectangle::Rectangle(unsigned int width, unsigned int height) : width(width), height(height) {}

/** Returns the width of the rectangle.
    @return: width of the rectangle
*/
unsigned int Rectangle::get_width() const { return width; }

/** Returns the height of the rectangle.
    @return: height of the rectangle
*/
unsigned int Rectangle::get_height() const { return height; }

/** Updates the width of the rectangle.
    @param width: updated width of the rectangle
*/
void Rectangle::set_width(unsigned int width) { this->width = width; }

/** Updates the height of the rectangle.
    @param height: updated height of the rectangle
*/
void Rectangle::set_height(unsigned int height) { this->height = height; }

/** Calculates the area of the rectangle.
    @return: calculated area of the rectangle
*/
unsigned int Rectangle::area() const { return get_width() * get_height(); }

/** Calculates the perimeter of the rectangle.
    @return: calculated perimeter of the rectangle
*/
unsigned int Rectangle::perimeter() const { return 2 * (get_width() + get_height()); }

// Tests whether this rectangle has smaller area than another rectangle.
bool Rectangle::operator < (const Rectangle& other) const { return area() < other.area(); }

// Stream insertion operator
ostream& operator << (ostream& out, const Rectangle& rect) {
    return out << "{ width=" << rect.get_width() << ", height=" << rect.get_height() << " }";
}