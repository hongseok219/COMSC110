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
    cout << "Description: Add myCity3to count how many times the high temperature occurs and how may times the low temperature occurs." << endl << endl;
	
	string cityName = "San Francisco";
	const int SIZE = 5;
	int temperature[SIZE];
	
	cout << "Enter the high for San Francisco on Sunday, Sep 6: ";
	cin >> temperature[0];
	cin.ignore(1000,10);
	cout << "Enter the high for San Francisco on Monday, Sep 7: ";
	cin >> temperature[1];
	cin.ignore(1000,10);
	cout << "Enter the high for San Francisco on Tuesday, Sep 8: ";
	cin >> temperature[2];
	cin.ignore(1000,10);
	cout << "Enter the high for San Francisco on Wednesday, Sep 9: ";
	cin >> temperature[3];
	cin.ignore(1000,10);
	cout << "Enter the high for San Francisco on Thursday, Sep 10: ";
	cin >> temperature[4];
	cin.ignore(1000,10);
	cout << endl;
	int max = temperature[0];
	int min = temperature[0];
	for (int i = 1; i < SIZE; i++)
	{	
		if (max < temperature[i]) max = temperature[i]; 
		if (min > temperature[i]) min = temperature[i]; 
	}
	int nMax = 0;
	int nMin = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (temperature[i] == max) nMax++;
		if (temperature[i] == min) nMin++;
	}

	cout << cityName << ", California forecast high temperatures:" << endl;
	cout << "Sunday, Sep 6, " << temperature[0] << " degrees" << endl;
	cout << "Monday, Sep 7, " << temperature[1] << " degrees" << endl;
	cout << "Tuesday, Sep 8, " << temperature[2] << " degrees" << endl;
	cout << "Wednesday, Sep 9, " << temperature[3] << " degrees" << endl;
	cout << "Thursday, Sep 10, " << temperature[4] << " degrees" << endl;
	cout << endl;

	cout << "The high for the week is " << max << " degrees, occurring ";
	if (nMax == 1)
		cout << "once";
	else
		cout << nMax << " times";
	cout << endl;
	cout << "The low for the week is " << min << " degrees, occurring ";
	if (nMin == 1)
		cout << "once";
	else
		cout << nMin << " times";
	cout << endl << endl;

}