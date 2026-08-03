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

class CS : public Student
{
public:
    void Homework()
    {
        cout << "C++, Coding" << endl;
    }
};

class Geo : public Student
{
public:
    void Homework()
    {
        cout << "Oil Drilling" << endl;
    }
};

class Med : public Student
{
public:
    void Homework()
    {
        cout << "Sa Kyat" << endl;
    }
};

int main()
{
    Student myStudent;
    CS stdCS;
    Geo stdGeo;
    Med stdMed;
    myStudent.Homework();
    stdCS.Homework();
    stdGeo.Homework();
    stdMed.Homework();
    return 0;
}