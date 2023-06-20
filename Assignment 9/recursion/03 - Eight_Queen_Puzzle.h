// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-15

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-15


#ifndef EIGHT_QUEEN_PUZZLE_H
#define EIGHT_QUEEN_PUZZLE_H

#include <iostream>
#include <vector>

using std::ostream;
using std::vector;

typedef vector<vector<char>> Chessboard;

/** A puzzle to place 8 queens on an 8-by-8 chessboard */
class Eight_Queen_Puzzle {
public:
    // Constructor
    Eight_Queen_Puzzle();  // Default constructor

    // Class-member function
    void print_solutions(ostream&);  // Wrapper function

private:
    // Data fields
    Chessboard board;  // An 8-by-8 chessboard
    static const char QUEEN;  // Character to represent a queen on the chessboard
    static const char BLANK;  // Character to represent a blank on the chessboard
    unsigned int num_of_solutions;  // Stores the number of solutions found.

    // Class-member functions
    bool queen_in_column(int) const;  // Tests whether there is already a queen in a given column.
    bool queen_in_diagonal(int, int) const;  // Tests whether there is already a queen in diagonal directions.
    void print_solution(ostream&);  // Writes a solution to an output stream.
    void print_solutions(int, ostream&);  // Writes all the solutions from a given row to an output stream.
};

#endif