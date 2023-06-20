// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Generic_Item.h"

using std::endl;

// Constructor with initial values of "name" and "quantity".
Generic_Item::Generic_Item(const string& name, unsigned int quantity) : name(name), quantity(quantity) {}

// Getters

/** Returns the name of the item.
    @return: name of the item
*/
string Generic_Item::get_name() const { return name; }

/** Returns the quantity of the item.
    @return: quantity of the item
*/
unsigned int Generic_Item::get_quantity() const { return quantity; }

// Setters

/** Updates the name of the item.
    @param name: updated name of the item
*/
void Generic_Item::set_name(const string& name) { this->name = name; }

/** Updates the quantity of the item.
    @param quantity: updated quantity of the item
*/
void Generic_Item::set_quantity(unsigned int quantity) { this->quantity = quantity; }

// Class-member function

/** Writes the item to an output stream.
    @param out: an output stream to write the item
*/
void Generic_Item::print(ostream& out) const {
    out << "Name: " << name << endl;
    out << "Quantity: " << quantity << endl;
}