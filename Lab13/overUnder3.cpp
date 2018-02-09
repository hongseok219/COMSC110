// Lab 13
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: modify overUnder2 to find the number already guessed" << endl << endl;
    
    srand(time(0));
    int number = 1+ rand() % 100;
    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";

    const int MAX_NUMBERS = 100;
    int numbers[MAX_NUMBERS];

    int nNumber = 0;
    int userinput;
    
    while (true)
    {   
        cin >> userinput;
        cin.ignore(1000, 10);

        bool guessedSameNumber = false;
        for (int i = 0; i < nNumber; i++)
        {
            if (userinput == numbers[i])
                guessedSameNumber = true;
        }

        if (guessedSameNumber)
            cout << "You already guessed " << userinput << " -- guess again: ";
        else
        {
            if (number < userinput)
            {
                numbers[nNumber] = userinput;
                cout << "That's too high -- guess again: ";
                nNumber++;
            }
            else if (number > userinput)
            {
                numbers[nNumber] = userinput;
                cout << "That's too low -- guess again: ";
                nNumber++;
            }
        }
            if (number == userinput) break;
    }
    cout << "That's right -- it's " << number << endl;
    
    cout << endl;
}