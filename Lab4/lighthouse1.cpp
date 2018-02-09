#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double H = 100;
	double D = pow(0.8 * H, 0.5);

	cout << "A " << H << " foot tall lighthouse can be seen from ";
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << D << " miles away" << endl;
	
	return 0;
}
