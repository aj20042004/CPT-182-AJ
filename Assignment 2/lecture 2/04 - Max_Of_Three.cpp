// Created by Dayu Wang (dwang@stchas.edu) on 2020-02-20

// Last updated by Dayu Wang (dwang@stchas.edu) on 2020-02-20


#include <iostream>

using namespace std;

int main() {
    // Let the use enter three integers.
    int x1, x2, x3;
    cout << "Please enter three integers (separated by spaces):" << endl;
    cin >> x1 >> x2 >> x3;

    // Find the max of the three integers.
    int max_val;
    if (x1 >= x2 && x1 >= x3) { max_val = x1; }
    else if (x2 >= x1 && x2 >= x3) { max_val = x2; }
    else { max_val = x3; }

    // Show the result to the user.
    cout << "Max: " << max_val << endl;

    system("pause");
    return 0;
}