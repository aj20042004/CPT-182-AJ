// Created by Dayu Wang (dwang@stchas.edu) on 2022-07-02

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-02


#include "Date.h"

using std::endl;

// Static variable
string Date::format = "US";

// Constructor

// Constructor with initial values of "year", "month", and "day_of_month"
Date::Date(unsigned int year, unsigned int month, unsigned int day_of_month) :
    year(year), month(month), day_of_month(day_of_month) {}

// Getters

/** Returns the year of the date.
    @return: year of the date
*/
unsigned int Date::get_year() const { return year; }

/** Returns the month of the date.
    @return: month of the date
*/
unsigned int Date::get_month() const { return month; }

/** Returns the day-of-month of the date.
    @return: day-of-month of the date
*/
unsigned int Date::get_day_of_month() const { return day_of_month; }

// Setters

/** Updates the value of the year of the date.
    @param new_year: updated value of the year of the date
*/
void Date::set_year(unsigned int new_year) { year = new_year; }

/** Updates the value of the month of the date.
    @param new_month: updated value of the month of the date
*/
void Date::set_month(unsigned int new_month) { month = new_month; }

/** Updates the value of the day-of-month of the date.
    @param new_day_of_month: updated value of the day-of-month of the date
*/
void Date::set_day_of_month(unsigned int new_day_of_month) { day_of_month = new_day_of_month; }

// Class-member function

/** Prints the date to an output stream.
    @param out: output stream to show the date
*/
void Date::print_date(ostream& out) const {
    if (format == "US") { out << month << '/' << day_of_month << '/' << year << endl; }
    if (format == "Euro") { out << day_of_month << '/' << month << '/' << year << endl; }
    if (format == "Asian") { out << year << '-' << month << '-' << day_of_month << endl; }
}