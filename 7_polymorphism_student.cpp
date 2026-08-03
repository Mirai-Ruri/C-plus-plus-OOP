#include <iostream>
using namespace std;
class Student
{
public:
    void Homework()
    {
        cout << "Computer Homework" << endl;
    }
};

class FirstYear : public Student
{
public:
    void Homework()
    {
        cout << "C++, Coding" << endl;
    }
};

class Master : public Student
{
public:
    void Homework()
    {
        cout << "Four Languages, Projects" << endl;
    }
};

int main()
{
    Student myStudent;
    FirstYear stdFirst;
    Master stdMaster;
    myStudent.Homework();
    stdFirst.Homework();
    stdMaster.Homework();
    return 0;
}