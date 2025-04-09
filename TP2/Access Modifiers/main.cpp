#include <iostream>
using namespace std;
class Animal {
public:
string name; // Public: can be accessed from anywhere
protected:
int age; // Protected: can be accessed by derived classes
private:
double weight; // Private: can only be accessed by methods in Animal class
public:
Animal(string n, int a, double w) : name(n), age(a), weight(w) {}
void display() {
cout << "Name: " << name << ", Age: " << age << ", Weight: " << weight <<
endl;
}
};
class Dog : public Animal {
public:
Dog(string n, int a, double w) : Animal(n, a, w) {}
void displayDogInfo() {
// Direct access to `name` because it's public
cout << "Dog Name: " << name << ", Age: " << age << endl; // `age` is protected
// cout << "Weight: " << weight << endl; // This would give an error as weight is private
}
};
int main() {
Dog myDog("Buddy", 3, 25.5);
myDog.displayDogInfo(); // Can access public and protected members
myDog.display(); // Can access public member method
return 0;
}
