#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double height;
	
	cout << "What's the lighthouse height in feet?  ";
	cin >> height;
	cin.ignore(1000, 10);
	
	double D = pow(0.8 * height, 0.5);

	cout << "A " << height << " foot tall lighthouse can be seen from ";
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << D << " miles away" << endl;
	
	return 0;
}
