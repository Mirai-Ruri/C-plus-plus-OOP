#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meowed\n";
    }
};
int main()
{
    Animal *pointer;
    Dog dObj;
    Cat cObj;
    pointer = &dObj;
    pointer->sound();
    pointer = &cObj;
    pointer->sound();

    return 0;
}