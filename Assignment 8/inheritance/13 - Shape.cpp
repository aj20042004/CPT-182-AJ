// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Shape.h"

// Getters

/** Returns the x-coordinate value of the center of the shape.
    @return: x-coordinate value of the center of the shape
*/
double Shape::get_x() const { return x; }

/** Returns the y-coordinate value of the center of the shape.
    @return: y-coordinate value of the center of the shape
*/
double Shape::get_y() const { return y; }

// Setters

/** Updates the x-coordinate value of the center of the shape.
    @param x: updated value of the x-coordinate value of the center of the shape
*/
void Shape::set_x(double x) { this->x = x; }

/** Updates the y-coordinate value of the center of the shape.
    @param y: updated value of the y-coordinate value of the center of the shape
*/
void Shape::set_y(double y) { this->y = y; }