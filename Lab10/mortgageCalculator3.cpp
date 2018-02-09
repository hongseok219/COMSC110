// Lab10
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: codeblocks

#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify mogageCalculator2 to output to a text file" << endl << endl;

	ofstream fout;
	fout.open("mortgage.txt", ios::app);
	if (!fout.good()) throw "I/O error";

	double amountBorrowed; 
	double interestRate;
	
	cout << "What's the amount borrowed?  ";
	cin >> amountBorrowed;
	cin.ignore(1000, 10);

	cout << "What's the annual interest rate?  ";
	cin >> interestRate;
	cin.ignore(1000, 10);
	cout << endl;

	fout << "What's the amount borrowed?  ";
	fout << amountBorrowed << endl;

	fout << "What's the annual interest rate?  ";
	fout << interestRate << endl;
	fout << endl;


	double r = interestRate / 100;
	double rr = r / 12;
	double N = 30;
	double n = N * 12; 
	double S = (amountBorrowed * pow(1 + rr, n) * rr)/(pow(1 + rr, n) - 1);

	cout << "Amount borrowed (user input) = $" << amountBorrowed << endl;
	cout << "Interest rate (user input) = " << interestRate << "%" << endl;
	cout << "Payback period (programmer input) = " << N << " Years" << endl;
	cout << "Monthly Payment (output) = $"; 
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << endl;

	fout << "Amount borrowed (user input) = $" << amountBorrowed << endl;
	fout << "Interest rate (user input) = " << interestRate << "%" << endl;
	fout << "Payback period (programmer input) = " << N << " Years" << endl;
	fout << "Monthly Payment (output) = $"; 
	fout.setf(ios::fixed|ios::showpoint);
	fout << setprecision(2);
	fout << S << endl;
	fout << endl;

	fout.close();

	cout << endl;
}
