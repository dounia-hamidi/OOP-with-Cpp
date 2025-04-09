#include <iostream>
using namespace std;
class Animal {
public:
Animal(string name) {
this->name = name;
cout << "Animal constructor called for " << name << endl;
}
~Animal() {
cout << "Animal destructor called for " << name << endl;
}
protected:
string name;
};
class Dog : public Animal {
public:
Dog(string name) : Animal(name) { // Calls the base class constructor
cout << "Dog constructor called for " << name << endl;
}
~Dog() { // Calls the base class destructor automatically
cout << "Dog destructor called for " << name << endl;
}
};
int main() {
Dog myDog("Buddy");
return 0;
}
