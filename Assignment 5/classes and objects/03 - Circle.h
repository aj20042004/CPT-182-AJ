// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
    friend class Rectangle;  // Sets the Rectangle class as a friend of the Circle class.

    // Constructor
    Circle(double = 0.0);  // Constructor with initial value of "radius"

    // Getter
    double get_radius() const;  // Returns the radius of the circle.

    // Setter
    void set_radius(double);  // Updates the radius of the circle.

    // Class-member functions
    double area() const;  // Calculates the area of the circle.
    double circumference() const;  // Calculates the circumference of the circle.

private:
    // Data fields
    static const double PI;  // Stores with value of "pi".
    double radius;  // Stores the radius of the circle.
};

#endif