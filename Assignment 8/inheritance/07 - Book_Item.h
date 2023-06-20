// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "Generic_Item.h"

class Book_Item : public Generic_Item {
public:
    // Constructor with initial values of "name", "quantity", and "isbn"
    Book_Item(const string& = "", unsigned int = 0, const string& = "");

    // Getter
    string get_isbn() const;  // Returns the ISBN of the book.

    // Setter
    void set_isbn(const string&);  // Updates the ISBN of the book.

    // Class-member function
    void print(ostream&) const;  // Writes the book to an output stream.

private:
    // Data field
    string isbn;  // Stores the ISBN of the book.
};

#endif