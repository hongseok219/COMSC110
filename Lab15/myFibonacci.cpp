// Lab 15
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int f;
    if (n == 0)
    {
        f = 0;
    }
    else if (n == 1)
    {
        f = 1;
    }
    else
    {
        f = fibonacci(n-2) + fibonacci(n - 1);
    }
    return f;
}

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a program to calculate fibonacci" << endl << endl;
    
    int index;
    cout << "Enter an index [0 or greater]: ";
    cin >> index;
    cin.ignore(1000, 10);
    
    cout << "The Fibonacci number at index " << index << " is " << fibonacci(index) << "." << endl;
    cout << endl;
}