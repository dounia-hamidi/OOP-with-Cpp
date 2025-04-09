#include <iostream>
using namespace std;
class Animal {
public:
Animal(string name) {
cout << "Animal constructor called for " << name << endl;
}
void eat() {
cout << "Animal is eating." << endl;
}
};
class Dog : public Animal {
public:
// Calling the base class constructor explicitly
Dog(string name) : Animal(name) {
cout << "Dog constructor called for " << name << endl;
}
};
int main() {
Dog myDog("Buddy");
myDog.eat(); // Call method from base class
return 0;
}
