#include <iostream>
using namespace std;
class Animal {
public:
// Virtual function allows polymorphic behavior
virtual void speak() {
cout << "Animal speaks" << endl;
}
virtual ~Animal() {}
// Virtual destructor for proper cleanup
};
class Dog : public Animal {
public:
void speak() override {
cout << "Woof! Woof!" << endl;
}
};
class Cat : public Animal {
public:
void speak() override {
cout << "Meow!" << endl;
}
};
int main() {
Animal* animalPtr;
Dog myDog;
Cat myCat;
// Base class pointer (animalPtr) points to derived class objects
animalPtr = &myDog;
animalPtr->speak(); // Will call Dog's speak() due to polymorphism
animalPtr = &myCat;
animalPtr->speak();
// Will call Cat's speak() due to polymorphism
return 0;
}
