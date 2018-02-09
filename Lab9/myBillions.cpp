// Lab9
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <iostream>

using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make a caculator program about piggy bank" << endl << endl;
    
    int week1 = 0;
    int i = 5;
    for (int total1 = 0; total1 < 100000; total1 += i)
    {
        week1++;
        i *= 2;
    }
    int week2 = 0;
    int j = 5;
    for (int total2 = 0; total2 < 100000000; total2 += j)
    {
        week2++;
        j *= 2;
    }
    int week3 = 0;
    double k = 5;
    for (double total3 = 0; total3 < 100000000000; total3 += k)
    {
        week3++;
        k *= 2;
    }
    cout << "In " <<  week1 << " weeks, I will be a thousandaire!" << endl;
    cout << "In " << week2 << " weeks, I will be a millionaire!" << endl;
    cout << "In " << week3 << " weeks, I will be a billionaire!" << endl;
    
    cout << endl;
}