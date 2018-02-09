// Lab 8
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std; 
  
void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n" << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
    cout << "Correct!" << endl; 
  else 
    cout << "Very good, but a better answer is " << theAnswer << endl; 

} // additionProblem 
  
int main() 
{
  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Making a answer of sum checking program" << endl << endl;

  srand(time(0));
  int i;
  for (i = 0; i < 5; i++)
  {
    int firstNumber = rand() % 10;
    int secondNumber = rand() % 10;
    additionProblem(firstNumber, secondNumber); 
   }
}