// Mid Term Project
// Programmer: Hongseok Jang
// Editor(s) used: Sublime Text 2
// Compiler(s) used: Xcode

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // initialize the computer's random number generator
    srand(time(0));
    
    cout << "Programmer: Hongseok Jang" << endl;
    cout << "Description: Make rock-paper-scissors game" << endl << endl;

    // declare variables
    char computerRPS;
    char humanRPS;
    string result;
    
    // start loop
    while (true)
    {
        // determine computer's choice (code block #1)
        switch (rand() % 3)
        {
            case 0:
                computerRPS = 'R';
                break;
            case 1:
                computerRPS = 'P';
                break;
            case 2:
                computerRPS = 'S';
                break;
        }
        //validation loop
        while(true)
        {
            cout << "Choose: [Rock,Paper,Scissors,Quit]: ";
            // prompt for, and read, the human's choice (code block #2)
            cin >> humanRPS;
            cin.ignore(1000,10);
            if (humanRPS == 'r' || humanRPS == 'R')
            {
                humanRPS = 'R';
                break;
            }
            if (humanRPS == 's' || humanRPS == 'S')
            {
                humanRPS = 'S';
                break;
            } 
            if (humanRPS == 'p' || humanRPS == 'P')
            {
                humanRPS = 'P';
                break;
            } 
            if (humanRPS == 'q' || humanRPS == 'Q')
            {
                humanRPS = 'Q';
                break;
            }
        }
        // if human wants to quit, break out of loop (code block #3)
        if (humanRPS == 'q' || humanRPS == 'Q') break;
        
        // determine the winner (code block #4)
        else
        {
            if (computerRPS == 'R')
            {
                switch (humanRPS)
                {
                    case 'r':
                    case 'R':
                        result = "tie";
                        break;
                    case 'p':
                    case 'P':
                        result = "Human wins";
                        break;
                    case 's':
                    case 'S':
                        result = "Computer wins";
                        break;
                }
            }
            if (computerRPS == 'P')
            {
                switch (humanRPS)
                {
                    case 'p':
                    case 'P':
                        result = "tie";
                        break;
                    case 's':
                    case 'S':
                        result = "Human wins";
                        break;
                    case 'r':
                    case 'R':
                        result = "Computer wins";
                        break;
                }
            }
            if (computerRPS == 'S')
            {
                switch (humanRPS)
                {
                    case 's':
                    case 'S':
                        result = "tie";
                        break;
                    case 'r':
                    case 'R':
                        result = "Human wins";
                        break;
                    case 'p':
                    case 'P':
                        result = "Computer wins";
                        break;
                }
            }
            // print results (code block #5)
            cout << "Computer:" << computerRPS;
            cout << ", Human:" << humanRPS << ", ";
            cout << result << endl;
        }
        cout << endl;
    }
    // end loop
cout << endl;
}
// end program
