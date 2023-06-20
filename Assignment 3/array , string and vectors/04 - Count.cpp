// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-19

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-06-19


#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Let the user enter a string in the console.
    string s;  // Stores the user input string.
    cout << "Please enter a string: ";
    getline(cin, s);

    // Count the number of digits in the user input string.
    unsigned int count = 0;
    for (string::iterator it = s.begin(); it != s.end(); it++) {
        if (isdigit(*it)) { count++; }
    }

    // Write the result in the console.
    cout << "Number of digits: " << count << endl;

    system("pause");
    return 0;
}