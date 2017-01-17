#include <string>
using namespace std;

class Student 
{
    //Initial Variables
    string  name;
    int     id;

public:
    //Functions
    Student();
    
    void setData(int);
    void setData(string);
    
    int getId();
    string getName();
};
