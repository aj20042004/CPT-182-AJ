// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Date {
public:
    // Static variable
    static string format;  // Either "US", "Euro", or "Asian"

    // Constructor
    Date(unsigned int = 0, unsigned int = 0, unsigned int = 0);  // Constructor with initial values of "year", "month" and "day_of_month"

    // Getters
    unsigned int get_year() const;  // Returns the year of the date.
    unsigned int get_month() const;  // Returns the month of the date.
    unsigned int get_day_of_month() const;  // Returns the day-of-month of the date.

    // Setters
    void set_year(unsigned int);  // Updates the year of the date.
    void set_month(unsigned int);  // Updates the month of the date.
    void set_day_of_month(unsigned int);  // Updates the day-of-month of the date.

    // Class-member function
    void print_date(ostream&) const;  // Prints the date to an output stream.

private:
    // Data fields
    unsigned int year;  // Stores the year of the date.
    unsigned int month;  // Stores the month of the date.
    unsigned int day_of_month;  // Stores the day-of-month of the date.
};

#endif