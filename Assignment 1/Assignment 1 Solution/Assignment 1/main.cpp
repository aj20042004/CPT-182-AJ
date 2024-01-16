
// Importing the modules
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	cout << "\nAssignment 1" << endl;
	cout << "--------------" << endl;

	// Creating variables
	string LastName;
	string SSN;
	double HourlyPayRate;
	unsigned int numberOfWorkingHours;

	// Getting user inputs
	cout << "Please enter your last name: ";
	getline(cin, LastName);

	cout << "Please enter the last 4 digits of your SSN: ";
	getline(cin, SSN);

	cout << "Please enter your hourly pay rate: ";
	cin >> HourlyPayRate;

	cout << "Please enter the number of hours you worked: ";
	cin >> numberOfWorkingHours;

	// Calculating all the respected values
	double GrossPay = HourlyPayRate * numberOfWorkingHours;
	double FederalTax = floor(GrossPay * 15) / 100;
	double StateTax = ceil(GrossPay * 5) / 100;
	double NetPay = GrossPay - FederalTax - StateTax;

	// Displaying all the details as per the instructions
	cout << endl;
	cout << "\nPayroll Summary for: " << LastName << endl;
	cout << "SSN (Last 4 Digits): " << SSN << endl;
	cout << "You worked " << numberOfWorkingHours << " hours at $" << fixed << setprecision(2) << HourlyPayRate << " per hour." << endl;
	cout << "\nGross Pay:\t\t$  " << fixed << setprecision(2) << GrossPay << endl;
	cout << "Federal Withholding:\t$  " << fixed << setprecision(2) << FederalTax << endl;
	cout << "State Withholding:\t$   " << fixed << setprecision(2) << StateTax << endl;
	cout << "---------------------------------" << endl;
	cout << "Net Pay:\t\t$  " << fixed << setprecision(2) << NetPay << endl;

	system("pause");
	return 0;
}
