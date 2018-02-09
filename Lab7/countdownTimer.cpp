// Lab7
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: CodeBlocks

#include <iomanip> 
#include <iostream> 

using namespace std;
 
#ifdef _WIN32
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 
  
int main() 
{ 

  cout << "Programmer: Hongseok Jang" << endl;
  cout << "Description: Make reverse-counting loop" << endl << endl;

  for (int i = 10; i > -1; i--) 
    {   
      cout << '\r';
      cout << setw(2) << i;
      cout.flush();

      #ifdef _WIN32 
      Sleep(1000);
      #else
      sleep(1); 
      #endif 
  }
cout << " blast off!" << endl;

return 0;
}
