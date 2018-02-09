// Lab7
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream> 
using namespace std; 
  
int main() 
{ 

  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Divide grades by switch" << endl << endl;

  char grade;
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> grade; 
  cin.ignore(1000, 10); 
  
  switch (grade)
  {
 	case 'A':
 	case 'B':
 	case 'C':
    	cout << "You pass" << endl;
    	break;
  	case 'D':
  	case 'E':
    	cout << "You do NOT pass" << endl;
    	break; 
    default:
    	cout << "Invalid entry" << endl;
   }

return 0;
} 