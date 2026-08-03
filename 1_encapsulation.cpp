#include <iostream>
using namespace std;
class StudentClass // creating a class
{
public:
    // public means everything below it can be accessed from outside the class
    // without public, main() cannot use studentAge, studentName, Study()
    int studentAge;     // variable
    string studentName; // variable

public: // optional 
        // public:
        // int age;
        // string name;
    // void Study(); 
    void Study() // function
    {
        cout << "Study Function is Working" << endl;
    }
}; // end the class, notice the semicolon

int main()
{
    StudentClass stdObj; // create an object named stdObj
    stdObj.studentAge = 18;
    stdObj.studentName = "Wut Yee";
    cout << "Age " << stdObj.studentAge << endl;
    cout << "Name " << stdObj.studentName << endl;
    stdObj.Study();
    return 0; 
}

// 1. What does this program do?

// Creates a class called StudentClass.
// Stores a student's age and name.
// Creates one student object.
// Assigns values to the object's variables.
// Prints the student's information.
// Calls a function named Study().