#include <iomanip>
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main()
{
  // input values
  int years = 10;
  int D = 100;

  // output (calculated) values
  double p = 0.075 / 12; // 7.5% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

 while (true)
  {
    string password = "P@ssw0rd!";
    string userinput;

    cout << "Enter your password: ";
    getline(cin, userinput);

    if (password == userinput) break;
  }
    cout << endl;
    cout << "In " << years << " years, $";
    cout << D << " deposited per month will grow to $";

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << S << "." << endl;
        
  
return 0;
}