#include <iomanip>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int years;
	int D;
	double P;

	cout << "The number of years until retirement? (whole number):  ";
	cin >> years;
	cin.ignore(1000, 10);
	
	cout << "The expected annual interest rate percentage? (floating point value):  ";
	cin >> P;
	cin.ignore(1000, 10);

	cout << "Amount to be deposited in bank savings per month? (whole number):  ";
	cin >> D;
	cin.ignore(1000, 10);

	double p = P / 100;
	double pp = p / 12;
	double T = years * 12;
	double S = D * ((pow(1 + pp, T) - 1) / pp);

	cout << "In " << years << " years at ";
	cout << P << "%, $" << D;
	cout << " deposited per month will grow to $";


	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;

	return 0;
}
