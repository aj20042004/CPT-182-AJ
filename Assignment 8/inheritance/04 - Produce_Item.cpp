// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Produce_Item.h"

using std::endl;

// Constructor with initial values of "name", "quantity", and "expiration_date"
Produce_Item::Produce_Item(const string& name, unsigned int quantity, const string& expiration_date) :
    Generic_Item(name, quantity), expiration_date(expiration_date) {}

// Getter

/** Returns the expiration date of the produce.
    @return: expiration date of the produce
*/
string Produce_Item::get_expiration_date() const { return expiration_date; }

// Setter

/** Updates the expiration date of the produce.
    @param expiration_date: updated expiration date of the produce
*/
void Produce_Item::set_expiration_date(const string& expiration_date) { this->expiration_date = expiration_date; }

// Class-member function

/** Writes the produce to an output stream.
    @param out: an output stream to write the produce
*/
void Produce_Item::print(ostream& out) const {
    Generic_Item::print(out);
    out << "Expiration Date: " << expiration_date << endl;
}