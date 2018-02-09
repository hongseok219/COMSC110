// Lab11
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Codeblocks

#include <iostream> 
using namespace std; 
  
int main() 
{ 
	cout << "Programmer: Hongseok Jang" << endl;
	cout << "Description: modify avgFile2 to input the keyboard" << endl << endl;

	int score[4]; 
	int i; 
	for (i = 0; i < 4; i++) 
	{
		cout << "Enter a number: ";
		cin >> score[i]; 
		cin.ignore(1000, 10); 
	}

	int scoreTotal = 0; 
	for (i = 0; i < 4; i++) 
	{ 
		scoreTotal += score[i]; 
	}
	double average = scoreTotal / 4.0; 
	cout << "The average of 4 numbers is " << average << endl; 


	int nGreater = 0; 
	for (i = 0; i < 4; i++) 
	{ 
		if (score[i] > average) nGreater++; 
	} 
	cout << nGreater << " scores are greater than the average." << endl; 

	cout << endl;
}