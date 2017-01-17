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
    void genMenu();

    //Declare Arrays
    Student studentList[NUMSTUDENTS];

    while(choice != 0 || choice != 1) {
        cout << "Starting Program...";
        cout << "WELCOME TO STUDENT PROGRAM 100.1";
        cout << "PLEASE CHOOSE FROM THE FOLLOWING OPTIONS";
        genMenu();
        cin >> choice;

    
    }

    return 0;
}

void genMenu()
{
    cout << "~~~~~~~~MENU~~~~~~~~~"
    cout << "0: SEARCH FOR STUDENT"
    cout << "1: QUIT THIS PROGRAM "
}
