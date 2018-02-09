#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string name;
	double temperature;
	string city;

	cout << "Enter your age:  ";
	cin >> age;
	cin.ignore(1000, 10);
	
	cout << "Enter your name:  ";
	getline(cin, name);
	
	cout << "Enterthe temperature outside right now (degrees F):  ";
	cin >> temperature;
	cin.ignore(1000, 10);

	cout << "What city are you in right now?  :  ";
	getline(cin, city);
	cout << endl;

	cout << name << " is " << age << " years old." << endl;
	cout << "It's " << temperature << " F in " << city << "." << endl;

	return 0;
}
