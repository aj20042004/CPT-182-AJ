// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-26

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-09-16


#ifndef STRING_PROCESSOR_H
#define STRING_PROCESSOR_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::toupper;

/** Converts all lowercase letters in a string to uppercase letters.
    @param s: a string containing only English letters
*/
void to_uppercase(string& s) {
    for (string::iterator it = s.begin(); it != s.end(); it++) { *it = toupper(*it); }
}

/** Writes a string in the console.
    @param s: string to write in the console
*/
void print_string(const string& s) { cout << s << endl; }

#endif