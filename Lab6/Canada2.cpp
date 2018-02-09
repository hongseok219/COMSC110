#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	while (true)
	{
		double celsius;
		cout << "What's the temperature in Celsius?  ";
		cin >> celsius;
		cin.ignore(1000, 10);
		if (celsius <= -999) break;
		double fahrenheit = 9 * celsius / 5 + 32;
		cout << celsius << ". " << " Celsius equals ";
		cout.setf(ios::fixed|ios::showpoint);
		cout << setprecision(1) << fahrenheit << " Fahrenheit" << endl;
	}
	return 0;
}
