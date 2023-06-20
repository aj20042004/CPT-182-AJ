// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef FRUIT_PRODUCE_H
#define FRUIT_PRODUCE_H

#include "Produce_Item.h"

class Fruit_Produce : public Produce_Item {
public:
    // Constructor with initial values of "name", "quantity", "expiration_date", and "has_seed"
    Fruit_Produce(const string& = "", unsigned int = 0, const string& = "", bool = false);

    // Getter
    bool get_has_seed() const;  // Returns whether the fruit has seed or not.

    // Setter
    void set_has_seed(bool);  // Updates whether the fruit has seed or not.

    // Class-member function
    void print(ostream&) const;  // Writes the fruit to an output stream.

private:
    // Data field
    bool has_seed;  // Stores {true} if the fruit has seed; {false} otherwise.
};

#endif