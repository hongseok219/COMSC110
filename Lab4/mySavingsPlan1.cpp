#include <iomanip>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int years = 20;
	int D = 120;
	double P = 5;
	double p = P / 100;
	double pp = p / 12;
	double T = years * 12;
	double S = D * ((pow(1 + pp, T) - 1) / pp);

	cout << "In " << years << " years at ";
	cout << P << "%, $" << D << " deposited per month will grow to $";

	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;

	return 0;
}
