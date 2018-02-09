#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double p = 270000; // Amount borrowed 
	double R = 5.125; // Annual percent interest rate
	double r = R / 100; // Annual interest rate
	double rr = r / 12; // monthly interest rate
	double N = 30; // year
	double n = N * 12; // month
	double S = (p * pow(1 + rr, n) * rr)/(pow(1 + rr, n) - 1);  // Monthly Payment

	cout << "Amount borrowed (programmer input) = $" << p << endl;
	cout << "Interest rate (programmer input) = " << R << "%" << endl;
	cout << "Payback period (programmer input) = " << N << " Years" << endl;
	cout << "Monthly Payment (calculated output) = $"; 
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << endl;

	return 0;
}
