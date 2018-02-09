// Lab11
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify myCity1 to use 1 array variable" << endl << endl;
	
	string cityName = "San Francisco";
	const int SIZE = 5;
	int temperature[SIZE];
	temperature[0] = 79;
	temperature[1] = 82;
	temperature[2] = 82;
	temperature[3] = 81;
	temperature[4] = 79;

	string source = "www.weather.com";

	cout << cityName << ", California forecast high temperatures:" << endl;
	cout << "Sunday, Sep 6, " << temperature[0] << " degrees" << endl;
	cout << "Monday, Sep 7, " << temperature[1] << " degrees" << endl;
	cout << "Tuesday, Sep 8, " << temperature[2] << " degrees" << endl;
	cout << "Wednesday, Sep 9, " << temperature[3] << " degrees" << endl;
	cout << "Thursday, Sep 10, " << temperature[4] << " degrees" << endl;
	cout << "source: " << source << endl;
}