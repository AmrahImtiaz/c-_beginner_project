#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rockpaperscissor() {
    cout << "+------------------------+" << endl;
    cout << "| Rock-Paper-Scissors    |" << endl;
    cout << "+------------------------+" << endl;
    cout << "| r. Rock                |" << endl;
    cout << "| p. Paper               |" << endl;
    cout << "| s. Scissors            |" << endl;
    cout << "+------------------------+" << endl;

    srand(time(0));

    char computerchoice;
    int randNum = rand() % 3 + 1;
    switch (randNum) {
        case 1: computerchoice = 'r'; break;
        case 2: computerchoice = 'p'; break;
        case 3: computerchoice = 's'; break;
        default: computerchoice = 'r'; // default to rock if unexpected value
    }

    char userchoice;
    cout << "Enter Your Choice (r for Rock, p for Paper, s for Scissors): " << endl;
    cin >> userchoice;

    while (userchoice != 'r' && userchoice != 'p' && userchoice != 's') {
        cout << "Invalid Choice, Please Enter Again: " << endl;
        cin >> userchoice;
    }
     cout<<"-------------------\n"<<endl;
    cout << "Computer's Choice is " << computerchoice << endl;

    if (userchoice == computerchoice) {
             cout<<"-------------------\n"<<endl;
        cout << "This is a TIE!" << endl;
    } else if ((userchoice == 'r' && computerchoice == 's') || 
               (userchoice == 'p' && computerchoice == 'r') || 
               (userchoice == 's' && computerchoice == 'p')) {
                      cout<<"-------------------\n"<<endl;
        cout << "User Wins! (^-^) Yahoo!" << endl;
    } else {
        cout<<"-------------------\n"<<endl;
        cout << "Computer Wins ;)" << endl;
    }
}

int main() {
    rockpaperscissor();
    return 0;
}
