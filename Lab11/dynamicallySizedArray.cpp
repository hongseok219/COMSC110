// Lab11
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Codeblocks

#include <iostream> 
using namespace std; 
  
int main() 
{ 
  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: modify dynamicArray to use the keyboard input, etc." << endl << endl;

  int size;
  cout << "How many scores? "; 
  cin >> size; 
  cin.ignore(1000, 10);
  int* score = new int[size]; 
  
  int i; 
  for (i = 0; i < size; i++) 
  { 
    cout << "Enter a number: ";
    cin >> score[i];
    cin.ignore(1000, 10); 
  }
  for (i = 0; i < size; i++) 
  {
    for (int j = i + 1; j < size; j++) 
    { 
      if (score[i] > score[j]) 
      { 
        int temp = score[i]; 
        score[i] = score[j];   
        score[j] = temp; 
      }
    }
  }
  cout << "Sorted: "; 
  for (i = 0; i < size; i++) 
    cout << score[i] << ' '; 
  cout << endl;

  int max = score[0];
  int min = score[0];
  for (i = 1; i < size; i++)
  { 
    if (max < score[i]) max = score[i]; 
    if (min > score[i]) min = score[i]; 
  }

  int scoreTotal = 0; 
  for (i = 0; i < size; i++) 
  { 
    scoreTotal += score[i]; 
  }
  double average = scoreTotal / 4.0;

  cout << "Minimum: " << min << endl;
  cout << "Maximum: " << max << endl; 
  cout << "Average: " << average << endl;
  
  bool gradeA = false;
  for (i = 0; i < size; i++)
  {
    if (score[i] > 90)
    {
    gradeA = true;
    break;
    }
  }
  if (gradeA)
    cout << "At least one 'A' grade entered" << endl;
  else
    cout << "No 'A' grade entered" << endl;
  cout << endl; 
}