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
    cout << "Description: Add myCity2 to search the maximum and minimum value" << endl << endl;
	
	string cityName = "San Francisco";
	const int SIZE = 5;
	int temperature[SIZE];
	temperature[0] = 79;
	temperature[1] = 82;
	temperature[2] = 82;
	temperature[3] = 81;
	temperature[4] = 79;

	int max = temperature[0];
	int min = temperature[0];
	for (int i = 1; i < SIZE; i++)
	{	
		if (max < temperature[i]) max = temperature[i]; 
		if (min > temperature[i]) min = temperature[i]; 
	}
	string source = "www.weather.com";

	cout << cityName << ", California forecast high temperatures:" << endl;
	cout << "Sunday, Sep 6, " << temperature[0] << " degrees" << endl;
	cout << "Monday, Sep 7, " << temperature[1] << " degrees" << endl;
	cout << "Tuesday, Sep 8, " << temperature[2] << " degrees" << endl;
	cout << "Wednesday, Sep 9, " << temperature[3] << " degrees" << endl;
	cout << "Thursday, Sep 10, " << temperature[4] << " degrees" << endl;
	cout << endl;
	cout << "The high for the week is " << max << " degrees" << endl;
	cout << "The low for the week is " << min << " degrees" << endl << endl;

	cout << "source: " << source << endl;
}