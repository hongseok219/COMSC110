// Lab 8
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
#include <iomanip>
using namespace std;

double calcAverage(int a, int b, int c)
{
  double result = 0.00;
  result = (a + b + c) / 3.00;
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  return result;
} // calcAverage

int main()
{
  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Calculate averaging 3 values" << endl << endl;

  int firstNumber;
  int secondNumber;
  int thirdNumber;

	cout << "Enter the first number: " ;
	cin >> firstNumber;
	cin.ignore(1000,10);

	cout << "Enter the second number: " ;
	cin >> secondNumber;
	cin.ignore(1000,10);

	cout << "Enter the third number: " ;
	cin >> thirdNumber;
	cin.ignore(1000,10);

  double x = calcAverage(firstNumber, secondNumber, thirdNumber);
  cout << "The average is " << x << endl;
} // main
