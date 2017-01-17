#include <iostream>
#include <cstring>
#include <cstdlib>
#include "student.h"
using namespace std;

//Declare Constants
const int NUMSTUDENTS     = 3;

//Declare Arrays
Student studentList[NUMSTUDENTS];

int main(int argc, char**argv)
{
    //Declare variables
    int choice          = -1;
    const int SEARCH    = 0;
    const int QUIT      = 1;
    int     searchId;
    string  searchName;
    bool searchNum;
    bool validInput;
    
    //Prototypes
    int menu();
    int search(string name);
    string search(int id);

    //WELCOME MESSAGE
    cout << "Starting Program..." << endl;
    cout << "WELCOME TO STUDENT PROGRAM 100.1" << endl;

    while(choice != QUIT) {
        cout << "\n\nPLEASE CHOOSE FROM THE FOLLOWING OPTIONS" << endl;
        choice = menu();

        if (choice == SEARCH) {
            searchNum = false;
            validInput = true;
            
            cout << "\nEnter search term: " << endl;
            cin >> searchName;
            for (int i = 0; i < strlen(searchName.c_str()); i++)
            {
                if (isalpha(searchName[i]));
                else if (isdigit(searchName[i]))
                {
                    searchNum = true;
                }
                else validInput = false;
            }
            if (validInput = true)
            {
                if (searchNum = true)
                {
                    searchNum = atoi(searchName.c_str());
                    cout << searchNum;
                    search(searchNum);
                }
                else search(searchName); 
            }
            else cout << "INVALID CHARACTERS ENTERED" << endl;
        }
    }

    cout << "\n\nTHANK YOU FOR USING PROGRAM" << endl;

    return 0;
}

int menu()
{
    int choice;
    cout << "\n";
    cout << "~~~~~~~~MENU~~~~~~~~~" << endl;
    cout << "0: SEARCH FOR STUDENT" << endl;
    cout << "1: QUIT THIS PROGRAM " << endl;
    cout << "CHOICE: ";
    cin >> choice;
    return choice;
}

int search(string name)
{
    for(int i=0; i<NUMSTUDENTS; i++)
    {
        if (studentList[i].getName() == name)
        {
            cout << "ID# " << studentList[i].getId() << endl;
        }
        else cout << "NAME NOT FOUND" << endl;
    }
}

void search(int id)
{
    for(int i=0; i<NUMSTUDENTS; i++)
    {
        if (studentList[i].getId() == id)
        {
            cout << studentList[i].getName() << endl;
        }
        else cout << "NAME NOT FOUND" << endl;
    }
}
