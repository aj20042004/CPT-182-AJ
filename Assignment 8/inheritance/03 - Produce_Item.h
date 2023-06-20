// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef PRODUCE_ITEM_H
#define PRODUCE_ITEM_H

#include "Generic_Item.h"

class Produce_Item : public Generic_Item {
public:
    // Constructor with initial values of "name", "quantity", and "expiration_date"
    Produce_Item(const string& = "", unsigned int = 0, const string& = "");

    // Getter
    string get_expiration_date() const;  // Returns the expiration date of the produce.

    // Setter
    void set_expiration_date(const string&);  // Updates the expiration date of the produce.

    // Class-member function
    virtual void print(ostream&) const;  // Writes the produce to an output stream.

private:
    // Data field
    string expiration_date;  // Stores the expiration date of the produce
};

#endif