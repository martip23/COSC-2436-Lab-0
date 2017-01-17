#include <iostream>
#include "student.h"
using namespace std;

int main(int argc, char**argv)
{
    //Declare needed variables & constants
    int NUMSTUDENTS     = 3;
    int choice          = -1;
    const int SEARCH    = 0;
    const int QUIT      = 1;
    
    //Prototypes
    int menu();

    //Declare Arrays
    Student studentList[NUMSTUDENTS];

    //WELCOME MESSAGE
    cout << "Starting Program..." << endl;
    cout << "WELCOME TO STUDENT PROGRAM 100.1" << endl;

    while(choice != QUIT) {
        cout << "PLEASE CHOOSE FROM THE FOLLOWING OPTIONS" << endl;
        choice = menu();
        if (choice == SEARCH) {
            cout << "FUNCTION TO GO HERE" << endl;
        }
    }

    cout << "\n\nTHANK YOU FOR USING PROGRAM" << endl;

    return 0;
}

int menu()
{
    int choice;
    cout << "\n\n";
    cout << "~~~~~~~~MENU~~~~~~~~~" << endl;
    cout << "0: SEARCH FOR STUDENT" << endl;
    cout << "1: QUIT THIS PROGRAM ";
    cin >> choice;
    return choice;
}
