// Lab7
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify changeDue3 avoid zero or negative" << endl << endl;

    int cashPayment;
    int amountTendered;
    
    while(true)
    {
        cout << "Cash payment amount [enter 0 to exit]:  ";
	    cin >> cashPayment;
	    cin.ignore(1000, 10);
	    
	    if (cashPayment <= 0) break;
	    
	    cout << "Tendered amount [enter 0 to exit]:  ";
	    cin >> amountTendered;
	    cin.ignore(1000, 10);
	    
	    if (amountTendered <= 0) break;

	    int changeDueo = amountTendered - cashPayment;
	    int changeDue;
	    int hundredThousands = changeDueo / 100000;
	    changeDue = changeDueo % 100000;
	    
	    int tenThousands = changeDue / 10000;
	    changeDue = changeDue % 10000;
	    
	    int fiveThousands = changeDue / 5000;
	    changeDue = changeDue % 5000;
	    
	    int thousands = changeDue / 1000;
	    changeDue = changeDue % 1000;
	    
	    int fiveHundreds = changeDue / 500;
	    changeDue = changeDue % 500;
	    
	    int hundreds = changeDue / 100;
	    changeDue = changeDue % 100;
	    
	    int fiftys = changeDue / 50;
	    changeDue = changeDue % 50;
	    
	    int twentys = changeDue / 20;
	    changeDue = changeDue % 20;
	    
	    int tens = changeDue / 10;
	    changeDue = changeDue % 10;
	    
	    int fives = changeDue / 5;
	    changeDue = changeDue % 5;
	    
	    int twos = changeDue / 2;
	    changeDue = changeDue % 2;
	    
	    int ones = changeDue;
	    
	    cout << "Change due: " << changeDueo << endl;
	    cout << endl;
	    
	    cout << "Change paid out in:" << endl;
	    if (hundredThousands != 0)
	        cout << " this many hundred thousand dollar bills: " << hundredThousands << endl;
	    if (tenThousands != 0)
	        cout << " this many ten thousand dollar bills: " << tenThousands << endl;
	    if (fiveThousands != 0)
	        cout << " this many five thousand dollar bills: " << fiveThousands << endl;
	    if (thousands != 0)
	        cout << " this many thousand dollar bills: " << thousands << endl;
	    if (fiveHundreds != 0)
	        cout << " this many five hundred dollar bills: " << fiveHundreds << endl;
	    if (hundreds != 0)
	        cout << " this many hundred dollar bills: " << hundreds << endl;
	    if (fiftys != 0)
	        cout << " this many fifty dollar bills: " << fiftys << endl;
	    if (twentys != 0)
	        cout << " this many twenty dollar bills: " << twentys << endl;
	    if (tens != 0)
	        cout << " this many ten dollar bills: " << tens << endl;
	    if (fives != 0)
	        cout << " this many five dollar bills: " << fives << endl;
	    if (twos != 0)
	        cout << " this many two dollar bills: " << twos << endl;
	    if (ones != 0)
	        cout << " this many one dollar bills: " << ones << endl;
    	cout << endl;
    }
cout << endl;
}
