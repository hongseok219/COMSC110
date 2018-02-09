// Lab7
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
   
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Modify war1 to replay in the event of a tie " << endl << endl;

    int computerNumber;
    int computerShape;
    int humanNumber;
    int humanShape;
    do
    {
        computerNumber = 2 + rand() % 13;
        computerShape = rand() % 4;
        humanNumber = 2+ rand() % 13;
        humanShape = rand() % 4;
        cout << "Computer's card is a ";
        if (computerNumber < 11)
            cout << computerNumber;
        if (computerNumber == 11)
            cout << "Jack";
        if (computerNumber == 12)
            cout << "Queen";
        if (computerNumber == 13)
            cout << "King";
        if (computerNumber == 14)
            cout << "Ace";
        cout << " of ";
        if (computerShape == 0)
            cout << "Spades";
        if (computerShape == 1)
            cout << "Diamonds";
        if (computerShape == 2)
            cout << "Hearts";
        if (computerShape == 3)
            cout << "Clubs";
        cout << endl;
        
        cout << "Human's card is a ";
        if (humanNumber < 11)
            cout << humanNumber;
        if (humanNumber == 11)
            cout << "Jack";
        if (humanNumber == 12)
            cout << "Queen";
        if (humanNumber == 13)
            cout << "King";
        if (humanNumber == 14)
            cout << "Ace";
        cout << " of ";
        if (humanShape == 0)
            cout << "Spades";
        if (humanShape == 1)
            cout << "Diamonds";
        if (humanShape == 2)
            cout << "Hearts";
        if (humanShape == 3)
            cout << "Clubs";
        cout << endl;
        
        if (computerNumber > humanNumber)
            cout << "Computer wins!";
        if (computerNumber < humanNumber)
            cout << "Human wins!";
        if (computerNumber == humanNumber)
            cout << "It's a tie.";
        cout << endl << endl;
    } while (computerNumber == humanNumber);
    
return 0;
}