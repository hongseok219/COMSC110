#include <string>
#include <iostream>
using namespace std;

int main ()
{
	int days = 0;

	days = days + (365 * 24);
	days = days + 6;
	days = days - 50;
	days = days - 112;

	cout << "DOB: Feb 19, 1992" << endl;
	cout << "Due: Sep 10, 2015" << endl;
	cout << "Age: " << days << " days" << endl;
}
