#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int age1 = 19;
	int age2 = 21;
	int age3 = 30;

	double averageAge = (age1 + age2 + age3) / 3.0; //Average age

	cout << "The average of three ages is ";

	// formatting output
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << averageAge << "." << endl;

	return 0;
}
