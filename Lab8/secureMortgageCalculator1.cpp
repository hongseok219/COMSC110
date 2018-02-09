// Lab 8
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void getPassword()
{
while (true)
  {
    string password;
    cout << "Enter your password: ";
    getline(cin, password);

    if (password == "helloworld") break;
    cout << "INVALID" << endl;
  }
}
int main()
{
  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Add mortgageCalculatorcin to a function to prompt the user for a password" << endl << endl;

	getPassword();
	double amountBorrowed; // Amount borrowed
	double interestRate; // Annual percent interest rate

	cout << "What's the amount borrowed?  ";
	cin >> amountBorrowed;
	cin.ignore(1000, 10);

	cout << "What's the annual interest rate?  ";
	cin >> interestRate;
	cin.ignore(1000, 10);
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

}
