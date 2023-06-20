// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-08

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-08


#ifndef RECURSION_H
#define RECURSION_H

#include <algorithm>
#include <vector>

using std::max;
using std::vector;

/** Calculates {x} ^ {y}.
    @param x: base
    @param y: exponent
    @return: value of {x} ^ {y}
*/
unsigned int power(unsigned int x, unsigned int y) {
    // Base case
    if (!y) { return 1; }
    // Recurrence relation
    else { return x * power(x, y - 1); }
}

/** Searches for a target value in a segment of a vector.
    @param vec: a vector to search the target value in it
    @param i: index of the beginning of the segment
    @param j: index of the end of the segment
    @param target: target value to search
    @return: index of the target value in the vector, or {-1} if target is not found
*/
int search(const vector<int>& vec, int i, int j, int target) {
    // Base case
    if (i > j) { return -1; }

    // Get the middle index.
    int mid = (i + j) / 2;

    // Compare the target value with the middle value.
    if (target < vec.at(mid)) { return search(vec, i, j - 1, target); }  // Recursively search the left half.
    else if (target > vec.at(mid)) { return search(vec, i + 1, j, target); }  // Recursively search the right half.
    else { return mid; }  // Target value found
}

// Wrapper function
int search(const vector<int>& vec, int target) { return search(vec, 0, vec.size() - 1, target); }

/** Calculates the n-th Fibonacci number.
    @param n: zero-based index in the Fibonacci sequence.
    @return: n-th Fibonacci number
*/
unsigned int fib(unsigned int n) {
    // Base case
    if (n < 2) { return n; }
    // Recurrence relation
    else { return fib(n - 2) + fib(n - 1); }
}

/** Calculates the max reward in the grid.
    @param grid: a grid containing non-negative integer rewards
    @param i: row index of the stop cell
    @param j: column index of the stop cell
    @return: max reward from the topleft cell to the stop cell
*/
unsigned int max_reward(const vector<vector<unsigned int>>& grid, size_t i, size_t j) {
    if (!i && !j) { return grid.at(i).at(j); }  // Base case
    if (!i) { return max_reward(grid, i, j - 1) + grid.at(i).at(j); }
    if (!j) { return max_reward(grid, i - 1, j) + grid.at(i).at(j); }
    return max(max_reward(grid, i - 1, j), max_reward(grid, i, j - 1)) + grid.at(i).at(j);
}

// Wrapper function
unsigned int max_reward(const vector<vector<unsigned int>>& grid) {
    return max_reward(grid, grid.size() - 1, grid.size() - 1);
}

#endif