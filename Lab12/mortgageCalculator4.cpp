// Lab12
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Mortgage
{
	int N;
	double amountBorrowed;
	double interestRate;
	double S;
};

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
	cout << "Description: modify mogageCalculator3 to collect all the data about a single item into one variable" << endl << endl;

	Mortgage mortgage = {30};
	
	ofstream fout;
	fout.open("mortgage.txt", ios::app);
	if (!fout.good()) throw "I/O error";

	cout << "What's the amount borrowed?  ";
	cin >> mortgage.amountBorrowed;
	cin.ignore(1000, 10);

	cout << "What's the annual interest rate?  ";
	cin >> mortgage.interestRate;
	cin.ignore(1000, 10);
	cout << endl;

	fout << "What's the amount borrowed?  ";
	fout << mortgage.amountBorrowed << endl;

	fout << "What's the annual interest rate?  ";
	fout << mortgage.interestRate << endl;
	fout << endl;
	
	double n = mortgage.N * 12;
	double r;
	double rr;
	
	r = mortgage.interestRate / 100;
	rr = r / 12;
	mortgage.S = (mortgage.amountBorrowed * pow(1 + rr, n) * rr)/(pow(1 + rr, n) - 1);

	cout << "Amount borrowed (user input) = $" << mortgage.amountBorrowed << endl;
	cout << "Interest rate (user input) = " << mortgage.interestRate << "%" << endl;
	cout << "Payback period (programmer input) = " << mortgage.N << " Years" << endl;
	cout << "Monthly Payment (output) = $"; 
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << mortgage.S << endl;

	fout << "Amount borrowed (user input) = $" << mortgage.amountBorrowed << endl;
	fout << "Interest rate (user input) = " << mortgage.interestRate << "%" << endl;
	fout << "Payback period (programmer input) = " << mortgage.N << " Years" << endl;
	fout << "Monthly Payment (output) = $"; 
	fout.setf(ios::fixed|ios::showpoint);
	fout << setprecision(2);
	fout << mortgage.S << endl;
	fout << endl;

	fout.close();

	cout << endl;
}
