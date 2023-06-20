// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-19

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-06-19


#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Open the input file.
    ifstream fin("input.txt");

    // Test whether the input file was succesfully opened.
    if (!fin) {
        cout << "[Error] Nonexistent input file" << endl;
        system("pause");
        return -1;
    }

    // Open the output file.
    ofstream fout("output.txt");

    // Create a vector to store the values in the input file.
    vector<int> vec;

    int current;  // Stores the current value read from the input file.

    // Read the values in the input file one-by-one and store them in the vector.
    while (fin >> current) {
        vec.push_back(current);  // Appends the current value to the vector.
    }

    // Write the values in the vector to the output file in reverse order.
    for (int i = vec.size() - 1; i >= 0; i--) { fout << vec.at(i) << endl; }

    // Close the input and output file.
    fin.close();
    fout.close();

    return 0;
}