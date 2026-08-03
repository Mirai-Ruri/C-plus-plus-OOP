// Single Inheritance
#include <iostream>
using namespace std; 

class myParentClass // base class
{
public: 
    string coname = "Shwe Company";
    void myFunction()
    {
        cout << "This is function inside Parent Class." << endl;
    }
};

class Myself : public myParentClass // derived class
// " : " means inherits from
// "Myself inherits from myParentClass."
{
public:
    string another = "Inherited";
};
int main()
{
    Myself aung;
    // Since Myself inherits from myParentClass, aung contains myFunction(), coname, another
    aung.myFunction();
    cout << aung.coname + " " + aung.another;
    return 0;
}

// 1. What does this program do?

// Creates a parent (base) class called myParentClass.
// Creates a child (derived) class called Myself.
// The child class inherits the parent's variables and functions.
// Creates an object of the child class.
// Uses both the inherited members and its own member.