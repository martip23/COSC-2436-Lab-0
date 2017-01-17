#include <iostream>

using namespace std;
#include "student.h"
//Description: Implementation for student class

//Student Constructor, set to default values
Student::Student() 
{
    cout << "Student created with default values/n";
    cout << "Please set default values";
    this->name  = "John Doe";
    this->id    = 0000;
}

//Overloaded setData function
void Student::setData(int id)
{
    this->id    = id;
}
void Student::setData(string name)
{
    this->name  = name;
}

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

