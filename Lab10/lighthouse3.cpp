// Lab10
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: codeblocks

#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify lighthouse2 to input from a text file" << endl << endl;

    ifstream fin;
    fin.open("lighthouse3.txt");
    if (!fin.good()) throw "I/O error";

	double height;
	fin >> height;
	fin.ignore(1000, 10);
	fin.close();
	double D = pow(0.8 * height, 0.5);

	cout << "A " << height << " foot tall lighthouse can be seen from ";
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << D << " miles away" << endl;
	
	cout << endl;
}
