// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-08

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-11-08


#include "Recursion.h"

#include <iostream>

using namespace std;

int main() {
    vector<vector<unsigned int>> grid = {
        { 5, 3, 20, 4 },
        { 9, 1,  2, 2 },
        { 0, 5, 11, 6 },
        { 4, 2,  8, 3 }
    };
    cout << "Max Reward: " << max_reward(grid) << endl;
    system("pause");
    return 0;
}