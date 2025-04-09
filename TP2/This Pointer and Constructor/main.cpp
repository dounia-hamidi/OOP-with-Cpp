#include <iostream>
using namespace std;
class Person {
private:
string name;
int age;
public:
// Constructor that takes two parameters
Person(string name, int age) {
// Using 'this' to initialize members
this->name = name;
this->age = age;
}
// Method to display the values
void displayPerson() {
cout << "Name: " << this->name << ", Age: " << this->age << endl;
}
};
int main() {
Person person1("Alice", 30); // Create a Person object with name "Alice" and age 30
person1.displayPerson(); // Output: Name: Alice, Age: 30
return 0;
}
