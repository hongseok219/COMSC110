// Lab 15
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <deque>

using namespace std;

struct Number
{
    int guessedNumber;
};

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify overUnder4 to use a collection to store the guessed numbers" << endl << endl;
    
    srand(time(0));
    int answer = 1+ rand() % 100;
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
    
    deque<Number> number;
    
    while (true)
    {
        Number aNumber;
        cin >> aNumber.guessedNumber;
        cin.ignore(1000, 10);
        bool guessedSameNumber = false;
        for (int i = 0; i < number.size(); i++)
        {
            if (aNumber.guessedNumber == number[i].guessedNumber)
                guessedSameNumber = true;
        }
        
        if (guessedSameNumber)
            cout << "You already guessed " << aNumber.guessedNumber << " -- guess again: ";
        else
        {
            number.push_back(aNumber);
            if (answer < aNumber.guessedNumber)
            {
                cout << "That's too high -- guess again: ";
            }
            else if (answer > aNumber.guessedNumber)
            {
                cout << "That's too low -- guess again: ";
            }
        }
        if (answer == aNumber.guessedNumber) break;
    }
    cout << "That's right -- it's " << answer << endl;
    
    cout << endl;
}