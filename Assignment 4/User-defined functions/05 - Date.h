// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-26

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-09-16


#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/** Write a date in the console.
    @param year: year of the date
    @param month: month of the date
    @param day_of_month: day-of-month of the date
    @param format: "US" or "Euro"
*/
void print_date(unsigned int year, unsigned int month, unsigned int day_of_month, const string& format = "US") {
    if (format == "US") { cout << month << '/' << day_of_month << '/' << year << endl; }
    else if (format == "Euro") { cout << day_of_month << '/' << month << '/' << year << endl; }
    else { cout << "Invalid format" << endl; }
}

#endif