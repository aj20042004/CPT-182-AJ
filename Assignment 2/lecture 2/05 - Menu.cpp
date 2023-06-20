// Created by Dayu Wang (dwang@stchas.edu) on 2020-02-20

// Last updated by Dayu Wang (dwang@stchas.edu) on 2020-02-20


#include <iostream>

using namespace std;

int main() {
    // Show the menu to the user.
    cout << "Today's Menu:" << endl;
    cout << "1) Appetizer" << endl;
    cout << "2) Entree" << endl;
    cout << "3) Dessert" << endl;

    // Let the user make a selection.
    cout << endl << "Please make a selection (1 - 3): ";
    int choice;
    cin >> choice;

    // Show the dish based on the user selection.
    switch (choice) {
    case 1:
        cout << "Appetizer: Chilled cucumber soup" << endl;
        break;
    case 2:
        cout << "Entree: Grilled halibut with asparagus" << endl;
        break;
    case 3:
        cout << "Dessert: Carrot cake" << endl;
        break;
    default:
        cout << "Invalid selection" << endl;
    }

    system("pause");
    return 0;
}