// Created by Dayu Wang (dwang@stchas.edu) on 2022-04-18

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-07-17


#include "Book_Item.h"

using std::endl;

// Constructor with initial values of "name", "quantity", and "isbn"
Book_Item::Book_Item(const string& name, unsigned int quantity, const string& isbn) :
    Generic_Item(name, quantity), isbn(isbn) {}

// Getter

/** Returns the ISBN of the book.
    @return: ISBN of the book
*/
string Book_Item::get_isbn() const { return isbn; }

// Setter

/** Updates the ISBN of the book.
    @param isbn: updated ISBN of the book
*/
void Book_Item::set_isbn(const string& isbn) { this->isbn = isbn; }

// Class-member function

/** Writes the book to an output stream.
    @param out: an output stream to write the book
*/
void Book_Item::print(ostream& out) const {
    Generic_Item::print(out);
    out << "ISBN: " << isbn << endl;
}