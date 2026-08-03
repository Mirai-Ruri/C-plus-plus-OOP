#include <iostream>
using namespace std;
class Animal // create the parent class
// contains one function
{
public:
    void Sound()
    {
        cout << "Animal Sound" << endl; //default sound
    }
};

class Cat : public Animal // cat inherits from animal
{
public:
    void Sound()
    {
        cout << "Meow Meow" << endl;
        // the child class creates another function with the same name
    }
};

class Dog : public Animal
{
// public:
//     void Sound()
//     {
//         cout << "Wok Wok" << endl;
//     }
};

int main()
{
    Animal myAnimal;
    Cat myCat;
    Dog myDog;
    myAnimal.Sound();
    myCat.Sound();
    myDog.Sound();
    return 0;
}

// What does this program do?

// This program creates:

// One parent class (Animal)
// Two child classes (Cat and Dog)
// Each child has its own version of the Sound() function.

// When each object calls Sound(), it prints a different message.



// What is Function Overriding?

// Function overriding happens when

// Parent and child have the same function name
// Same parameters
// Child provides its own implementation