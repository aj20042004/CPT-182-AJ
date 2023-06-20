// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-15

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-15


#include "Eight_Queen_Puzzle.h"

using std::endl;

// Character to represent a queen on the chessboard
const char Eight_Queen_Puzzle::QUEEN = 'Q';

// Character to represent a blank on the chessboard
const char Eight_Queen_Puzzle::BLANK = '.';

// Default Constructor
Eight_Queen_Puzzle::Eight_Queen_Puzzle() : num_of_solutions(0) {
    // Initialize an 8-by-8 chessboard filled with blanks.
    board = Chessboard(8, vector<char>(8, BLANK));
}

/** Tests whether there is already a queen in a given column.
    @param col: index of the column to test
    @return: {true} if there is already a queen in the column; {false} otherwise
*/
bool Eight_Queen_Puzzle::queen_in_column(int col) const {
    for (size_t row = 0; row < 8; row++) {
        if (board.at(row).at(col) == QUEEN) { return true; }
    }
    return false;
}

/** Tests whether there is already a queen in diagonal directions.
    @param row: row index of the cell to test
    @param col: column index of the cell to test
    @return: {true} if there is already a queen in diagonal directions; {false} otherwise
*/
bool Eight_Queen_Puzzle::queen_in_diagonal(int row, int col) const {
    // Test the topleft direction.
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board.at(i).at(j) == QUEEN) { return true; }
    }
    // Test the topright direction.
    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) {
        if (board.at(i).at(j) == QUEEN) { return true; }
    }
    // Test the bottomright direction.
    for (int i = row, j = col; i < 8 && j < 8; i++, j++) {
        if (board.at(i).at(j) == QUEEN) { return true; }
    }
    // Test the bottomleft direction.
    for (int i = row, j = col; i < 8 && j >= 0; i++, j--) {
        if (board.at(i).at(j) == QUEEN) { return true; }
    }
    return false;  // No queen in either diagonal direction
}

/** Writes a solution to an output stream.
    @param out: output stream to write the found solution
*/
void Eight_Queen_Puzzle::print_solution(ostream& out) {
    // Write the solution number.
    out << "Solution: " << ++num_of_solutions << endl << endl;
    // Write the chessboard.
    for (size_t row = 0; row < 8; row++) {
        for (size_t col = 0; col < 8; col++) {
            out << board.at(row).at(col);
        }
        out << endl;
    }
    out << endl;
}

/** Writes all the solutions from a given row to an output stream.
    @param row: index of the row to start placing queens
    @param out: output stream to write the solutions
*/
void Eight_Queen_Puzzle::print_solutions(int row, ostream& out) {
    // Base case
    if (row == 8) {
        // A solution is found.
        print_solution(out);
    }
    else {
        // Try to place a queen in this row.
        for (int col = 0; col < 8; col++) {
            if (queen_in_column(col)) { continue; }  // There is already a queen in the column.
            if (queen_in_diagonal(row, col)) { continue; }  // There is already a queen in diagonal directions.
            // If the two if branches above were not taken, we can place the queen in this cell.
            board.at(row).at(col) = QUEEN;
            // [Recursion] Go to the next row and apply the same logic to place queens.
            print_solutions(row + 1, out);
            // All solutions when a queen is placed in this cell are found.
            // Then, remove the queen from this cell and try to place it in other cells to find more solutions.
            board.at(row).at(col) = BLANK;
        }
    }
}

// Wrapper function
void Eight_Queen_Puzzle::print_solutions(ostream& out) { print_solutions(0, out); }