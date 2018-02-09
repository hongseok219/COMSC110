#include <string>
#include <iostream>
using namespace std;

int main()
{
	string cityName = "San Francisco";
	int sep6degree = 79;
	int sep7degree = 82;
	int sep8degree = 82;
	int sep9degree = 81;
	int sep10degree = 79;
	string source = "www.weather.com";

	cout << cityName << ", California forecast high temperatures:" << endl;
	cout << "Sunday, Sep 6, " << sep6degree << " degrees" << endl;
	cout << "Monday, Sep 7, " << sep7degree << " degrees" << endl;
	cout << "Tuesday, Sep 8, " << sep8degree << " degrees" << endl;
	cout << "Wednesday, Sep 9, " << sep9degree << " degrees" << endl;
	cout << "Thursday, Sep 10, " << sep10degree << " degrees" << endl;
	cout << "source: " << source << endl;
}
