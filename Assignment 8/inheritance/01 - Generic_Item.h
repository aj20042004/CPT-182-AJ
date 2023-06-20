// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef GENERIC_ITEM_H
#define GENERIC_ITEM_H

#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Generic_Item {
public:
    // Constructor with initial values of "name" and "quantity".
    Generic_Item(const string& = "", unsigned int = 0);

    // Getters
    string get_name() const;  // Returns the name of the item.
    unsigned int get_quantity() const;  // Returns the quantity of the item.

    // Setters
    void set_name(const string&);  // Updates the name of the item.
    void set_quantity(unsigned int);  // Updates the quantity of the item.

    // Class-member function
    virtual void print(ostream&) const;  // Writes the item to an output stream.

private:
    // Data fields
    string name;  // Stores the name of the item.
    unsigned int quantity;  // Stores the quantity of the item.
};

#endif