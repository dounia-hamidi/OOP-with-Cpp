#include <iostream>
using namespace std;
class Animal {
public:
void speak() {
cout << "Animal speaks." << endl;
}
};
class Dog : public Animal {
public:
void speak() {
cout << "Dog barks." << endl;
// Calling the base class version of speak using base class name
Animal::speak();
}
};
int main() {
Dog myDog;
myDog.speak();
return 0;
}
