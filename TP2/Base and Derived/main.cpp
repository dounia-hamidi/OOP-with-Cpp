#include <iostream>
using namespace std;
// Base class
class Animal {
public:
// Base class constructor
Animal(string name) : name(name) {
cout << "Animal constructor called for " << name << endl;
}
// Base class method
void eat() {
cout << name << " is eating." << endl;
}
// Destructor
~Animal() {
cout << "Animal destructor called for " << name << endl;
}
protected:
string name;
};
// Protected member, can be accessed by derived classes
// Derived class
class Dog : public Animal {
public:
// Constructor for the derived class
Dog(string name) : Animal(name) {
cout << "Dog constructor called for " << name << endl;
}
// Derived class method (overriding base class functionality)
void bark() {
cout << name << " is barking!" << endl;
}
// Destructor for the derived class
~Dog(){
cout << "Dog destructor called for " << name << endl;
}
};
int main() {
// Creating an object of the derived class
Dog myDog("Buddy");
// Accessing methods from both base and derived classes
myDog.eat();
// Inherited from Animal
myDog.bark(); // Defined in Dog
return 0;
}
