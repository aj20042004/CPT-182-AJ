// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Fruit_Produce.h"

using std::endl;

// Constructor with initial values of "name", "quantity", "expiration_date", and "has_seed"
Fruit_Produce::Fruit_Produce(const string& name, unsigned int quantity, const string& expiration_date, bool has_seed) :
    Produce_Item(name, quantity, expiration_date), has_seed(has_seed) {}

// Getter

/** Returns whether the fruit has seed or not.
    @return: {true} if the fruit has seed; {false} otherwise
*/
bool Fruit_Produce::get_has_seed() const { return has_seed; }

// Setter

/** Updates whether the fruit has seed or not.
    @param has_seed: {true} if the fruit has seed; {false} otherwise
*/
void Fruit_Produce::set_has_seed(bool has_seed) { this->has_seed = has_seed; }

// Class-member function

/** Writes the fruit to an output stream.
    @param out: an output stream to write the fruit
*/
void Fruit_Produce::print(ostream& out) const {
    Produce_Item::print(out);
    out << "Has Seed: " << (has_seed ? "true" : "false") << endl;
}