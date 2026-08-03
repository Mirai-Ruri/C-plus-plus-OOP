#include <iostream>
using namespace std;
class MyParentClass // first parent class
{ 
public:
    void myFunction()
    {
        cout << "Inherit from parent class." << endl;
    }
};

class MyAunt_Uncle_Class // second parent class
{
public:
    void myOtherFunction()
    {
        cout << "Inherit from relative class." << endl;
    }
};

class MyChildClass : public MyParentClass, public MyAunt_Uncle_Class
{
};
// " , " means there is another parent class
int main()
{
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}

// 1. What does this program do?

// Creates two parent classes.
// Creates one child class.
// The child inherits from both parents.
// Creates an object of the child class.
// Calls functions inherited from both parent classes.