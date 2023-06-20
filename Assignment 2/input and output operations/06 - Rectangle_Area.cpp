// Created by Dayu Wang (dwang@stchas.edu) on 2020-02-20

// Last updated by Dayu Wang (dwang@stchas.edu) on 2020-02-20


#include <fstream>
#include <iostream>

using namespace std;

int main() {
    // Open the input file.
    ifstream fin("rectangles.txt");

    // Check whether the input file was successfully opened.
    if (!fin) {
        cout << "[Error] Nonexistent input file" << endl;
        system("pause");
        return -1;
    }

    // Open the output file
    ofstream fout("areas.txt");

    // Parse each rectangle in the input file.
    unsigned int width, height;
    while (fin >> width >> height) {
        // Calculate the area.
        unsigned int area = width * height;

        // Write the calculated area to the output file.
        fout << area << endl;
    }

    // Close the input and output files.
    fin.close();
    fout.close();

    return 0;
}