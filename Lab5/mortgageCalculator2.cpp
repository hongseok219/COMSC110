#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double amountBorrowed; // Amount borrowed 
	double interestRate; // Annual percent interest rate
	
	cout << "What's the amount borrowed?  ";
	cin >> amountBorrowed;
	cin.ignore(1000, 10);
	cout << endl;

	cout << "What's the annual interest rate?  ";
	cin >> interestRate;
	cin.ignore(1000, 10);
	cout << endl;
	cout << endl;

	double r = interestRate / 100; // Annual interest rate
	double rr = r / 12; // monthly interest rate
	double N = 30; // year
	double n = N * 12; // month
	double S = (amountBorrowed * pow(1 + rr, n) * rr)/(pow(1 + rr, n) - 1);  // Monthly Payment

	cout << "Amount borrowed (user input) = $" << amountBorrowed << endl;
	cout << "Interest rate (user input) = " << interestRate << "%" << endl;
	cout << "Payback period (programmer input) = " << N << " Years" << endl;
	cout << "Monthly Payment (output) = $"; 
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << endl;

	return 0;
}
