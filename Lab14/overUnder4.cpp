// Lab 14
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

struct Number
{
    int guessedNumber;
    Number* next;
};

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify overUnder3 to track the number guessed by user" << endl << endl;
    
    srand(time(0));
    int number = 1+ rand() % 100;
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
    
    Number* start = 0;
    
    while (true)
    {
        Number* aNumber = new Number;
        cin >> aNumber->guessedNumber;
        cin.ignore(1000, 10);
        bool guessedSameNumber = false;
        for (Number* p = start; p; p = p->next)
        {
            if (aNumber->guessedNumber == p->guessedNumber)
                guessedSameNumber = true;
        }
        
        if (guessedSameNumber)
            cout << "You already guessed " << aNumber->guessedNumber << " -- guess again: ";
        else
        {
            aNumber->next = start;
            start = aNumber;
            if (number < aNumber->guessedNumber)
            {
                cout << "That's too high -- guess again: ";
            }
            else if (number > aNumber->guessedNumber)
            {
                cout << "That's too low -- guess again: ";
            }
        }
        if (number == aNumber->guessedNumber) break;
    }
    cout << "That's right -- it's " << number << endl;
    
    cout << endl;
}