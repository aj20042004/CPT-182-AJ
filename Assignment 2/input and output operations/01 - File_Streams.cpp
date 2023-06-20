// Created by Dayu Wang (dwang@stchas.edu) on 2020-02-20

// Last updated by Dayu Wang (dwang@stchas.edu) on 2020-02-20


#include <fstream>  // Include <fstream> to use file streams.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Open the input file.
    ifstream fin("input_0.txt");

    // Check whether the input file was successfully opened (a must step).
    if (!fin) {
        cout << "[Error] Nonexistent input file" << endl;
        system("pause");
        return -1;  // Return {-1} to indicate "error exit".
    }

    /* Input file was successfully opened, so we can read the file now. */

    string row_1;  // Stores the content of the first row.
    double val_3, val_4;  // Store the rest two values.

    getline(fin, row_1);  // Reads in the next line (including any whitespaces) into the string variable.
    fin >> val_3 >> val_4;  // Reads in the next two values (whitespaces automatically ignored).

    // Open the output file.
    ofstream fout("output_0.txt");

    // Write values to the output file.
    fout << row_1 << endl << val_3 << endl << val_4 << endl;

    // Close the input and output files (a must step).
    fin.close();
    fout.close();

    return 0;
}