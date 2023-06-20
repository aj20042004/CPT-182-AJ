// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Book_Item.h"
#include "Fruit_Produce.h"
#include "Generic_Item.h"
#include "Produce_Item.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Open the input file.
    ifstream fin("inventory.txt");

    // Test whether the input file was successfully opened.
    if (!fin) {
        cout << "[Error] Nonexistent input file" << endl;
        system("pause");
        return -1;
    }

    // Open the output file.
    ofstream fout("items.txt");

    // Create a pointer of Generic_Item.
    Generic_Item* item = NULL;

    // Read in the items stored the input file one-by-one.
    string type;  // Type of the item
    string name;  // Name of the item
    unsigned int quantity;  // Quantity of the item
    string expiration_date;  // Expiration date of the produce or fruit
    string has_seed;  // {true} if the fruit has seeds; {false} otherwise
    string isbn;  // ISBN of the book

    while (fin >> type >> name >> quantity) {
        if (type == "Generic") { item = new Generic_Item(name, quantity); }
        if (type == "Produce") {
            fin >> expiration_date;
            item = new Produce_Item(name, quantity, expiration_date);
        }
        if (type == "Fruit") {
            fin >> expiration_date >> has_seed;
            item = new Fruit_Produce(name, quantity, expiration_date, has_seed == "true");
        }
        if (type == "Book") {
            fin >> isbn;
            item = new Book_Item(name, quantity, isbn);
        }

        if (item) {
            item->print(fout);
            fout << endl;
            delete item;
            item = NULL;
        }
    }

    // Close the input and output file.
    fin.close();
    fout.close();

    return 0;
}