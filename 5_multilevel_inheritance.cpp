#include <iostream>
using namespace std;
class MyClass // parent
{
public:
    void myFunction()
    {
        cout << "Some content in parent class.";
    }
};

class MyChild : public MyClass // child inherits parent
{
};

class MyGrandChild : public MyChild // grandchild inherits child
{
};

class MyGreatGrandChild : public MyGrandChild // great-grandchild inherits grandchild
{
};

int main()
{

    MyGreatGrandChild myObj;
    myObj.myFunction();
    return 0;
}

// 1. What does this program do?

// Creates a parent class (MyClass).
// Creates a child class (MyChild) that inherits from the parent.
// Creates a grandchild class (MyGrandChild) that inherits from the child.
// Creates a great-grandchild class (MyGreatGrandChild) that inherits from the grandchild.
// Creates an object of MyGrandChild.
// Calls a function that was originally defined in the parent class.