#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int startingrange, endingrange, Magicnumber, Guessnumber;
    
    cout << "Number Guessing Game CODE SOFT" << endl;
    
    cout << "Enter the starting Range of the number: ";
    cin >> startingrange;
    
    cout << "Enter the Ending Range of the number: ";
    cin >> endingrange;
    
    Magicnumber = rand() % (endingrange - startingrange + 1) + startingrange;
    cout<<Magicnumber;
    cout << "A magic number has been generated between " << startingrange << " and " << endingrange << "." << endl;

    do {
        cout << "Guess the number: ";
        cin >> Guessnumber;

        if (Guessnumber == Magicnumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
        } else {
            cout << "Wrong guess. Try again." << endl;
        }
    } while (Guessnumber != Magicnumber);

return 0;
}
