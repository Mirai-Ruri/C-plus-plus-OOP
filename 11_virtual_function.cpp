#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void sound()
  {
    cout << "Animal sound\n";
  }
  // virtual tells C++ :
  // "If a child class provides its own version of this function, use that version when called through a base-class pointer or reference."
};

class Dog : public Animal
{
public:
  void sound() override
  {
    cout << "Dog barks\n";
  }
  // override tells the compiler:
  // "This function is intended to override a virtual function from the parent."
};

int main()
{
  Animal *a;
  Dog d;
  a = &d;
  a->sound(); // Outputs: Dog barks
  return 0;
}

// What does this program do?

// Creates a parent class Animal.
// Creates a child class Dog.
// The child overrides the parent's sound() function.
// Uses a parent class pointer to point to a Dog object.
// Calls the overridden function at runtime.

// Virtual Function
// A function declared with virtual in the base class that can be overridden by derived classes.

// Function Overriding
// The child class defines a function with the same name and signature as the parent.

// Runtime Polymorphism
// The decision about which function to execute is made while the program is running, based on the actual object.

// Pointer
// Stores the memory address of another variable or object.

// -> Operator
// Used to access members through a pointer.
