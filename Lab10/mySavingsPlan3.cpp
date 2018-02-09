// Lab10
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: codeblocks

#include <iomanip>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify mySavingsPlan2 to input from a text file" << endl << endl;

	ifstream fin;
	fin.open("savings.txt");
	if (!fin.good()) throw "I/o error";

	int years;
	int D;
	double P;

	fin >> years;
	fin.ignore(1000, 10);
	
	fin >> P;
	fin.ignore(1000, 10);

	fin >> D;
	fin.ignore(1000, 10);

	fin.close();

	double p = P / 100;
	double pp = p / 12;
	double T = years * 12;
	double S = D * ((pow(1 + pp, T) - 1) / pp);

	cout << "In " << years << " years at ";
	cout << P << "%, $" << D;
	cout << " deposited per month will grow to $";


	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;

	cout << endl;
}
