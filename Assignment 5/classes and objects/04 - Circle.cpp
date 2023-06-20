// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#include "Circle.h"

#include <cmath>

using std::atan;

// Static variable
const double Circle::PI = 4 * atan(1);

// Constructor

// Constructor with initial value of "radius"
Circle::Circle(double radius) : radius(radius) {}

// Getter

/** Returns the radius of the circle.
    @return: radius of the circle
*/
double Circle::get_radius() const { return radius; }

// Setter

/** Updates the radius of the circle.
    @param new_radius: updated value of the radius of the circle
*/
void Circle::set_radius(double new_radius) { radius = new_radius; }

// Class-member functions

/** Calculates the area of the circle.
    @return: calculated area of the circle
*/
double Circle::area() const { return PI * radius * radius; }

/** Calculates the circumference of the circle.
    @return: calculated circumference of the circle
*/
double Circle::circumference() const { return 2 * PI * radius; }