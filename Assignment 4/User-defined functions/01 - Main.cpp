// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-26

// Last updated by Dayu Wang (dwang@stchas.edu) on 2023-02-15


#include "Data_Processor.h"
#include "Date.h"
#include "String_Printer.h"
#include "String_Processor.h"

#include <cmath>
#include <iostream>

using namespace std;

#define PI 4 * atan(1)

// Functions used in the main() function
double rectangle_area(double, double);  // Calculates the area of a rectangle.
void print_double(double);  // Writes a floating-point value in the console.
double cylinder_volume(double, double);  // Calculates the volume of a cylinder.

int main() {
    unsigned int year = 2023, month = 2, date = 15;

    print_date(year, month, date, "US");
    print_date(year, month, date, "Euro");
    print_date(year, month, date);

    system("pause");
    return 0;
}

/** Calculates the volume of a cuboid.
    @param length: length of the cuboid
    @param width: width of the cuboid
    @param height: height of the cuboid
    @return: calculated volume of the cuboid
*/
double cuboid_volume(double length, double width, double height) { return length * width * height; }

/** Calculates the volume of a cylinder.
    @param radius: radius of the end circle of the cylinder
    @param length: length of the cylinder
    @return: calculated volume of the cylinder
*/
double cylinder_volume(double radius, double length) { return PI * pow(radius, 2) * length; }

/** Writes message "Welcome" in the console. */
void welcome_message() { std::cout << "Welcome" << std::endl; }

/** Calculates the area of a rectangle.
    @param width: width of the rectangle
    @param height: height of the rectangle
    @return: calculated area of the rectangle.
*/
double rectangle_area(double width, double height) { return width * height; }

/** Writes a floating-point value in the console.
    @param value: value to write in the console
*/
void print_double(double value) { cout << value << endl; }