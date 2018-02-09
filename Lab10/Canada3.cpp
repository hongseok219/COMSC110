// Lab10
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: codeblocks

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify Canada2 to input from a text file" << endl << endl;

    ifstream fin;
    fin.open("temp.txt");
    if (!fin.good()) throw "I/O error";

	while (true)
	{
		if (!fin.good()) break;
		double celsius;
		fin >> celsius;
		fin.ignore(1000, 10);
		if (celsius <= -999) break;
		double fahrenheit = 9 * celsius / 5 + 32;
		cout.unsetf(ios::fixed|ios::showpoint);
		cout << setprecision(100);
		cout << celsius << ". " << " Celsius equals ";
		cout.setf(ios::fixed|ios::showpoint);
		cout << setprecision(1) << fahrenheit << " Fahrenheit" << endl;
	}
	fin.close();
	cout << endl;
}
