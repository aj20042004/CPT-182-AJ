
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main() {

	ifstream fin("input file 2.txt");
	ofstream fout("output file 2.txt");
	double lengthOne, lengthTwo, lengthThree, halfPerimeter, AreaOfTriangle;

	if (!fin) {
		cout << "Oops! Error Occurred .. Cannot Open the file" << endl;
		return -1;
	}

	while (fin >> lengthOne >> lengthTwo >> lengthThree) {

		if ((lengthOne + lengthTwo > lengthThree) && (lengthOne + lengthThree > lengthTwo) && (lengthTwo + lengthThree > lengthOne)) {

			halfPerimeter = (lengthOne + lengthTwo + lengthThree) / 2;
			AreaOfTriangle = sqrt(halfPerimeter * (halfPerimeter - lengthOne) * (halfPerimeter - lengthTwo) * (halfPerimeter - lengthThree));

			fout << fixed << setprecision(2) << AreaOfTriangle << endl;
		}

		else {
			fout << "Invalid triangle" << endl;
		}
	}

	fin.close();
	fout.close();
	system("pause");
	return 0;
}