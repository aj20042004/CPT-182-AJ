// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    // Getters
    double get_x() const;  // Returns the x-coordinate value of the center of the shape.
    double get_y() const;  // Returns the y-coordinate value of the center of the shape.

    // Setters
    void set_x(double);  // Updates the x-coordinate value of the center of the shape.
    void set_y(double);  // Updates the y-coordiante value of the center of the shape.

    // Class-member functions
    virtual double area() const = 0;  // Calculates the area of the shape.
    virtual double perimeter() const = 0;  // Calculates the perimeter of the shape.

private:
    // Data fields
    double x;  // Stores the x-coordinate of the center of the shape.
    double y;  // Stores the y-coordinate of the center of the shape.
};

#endif