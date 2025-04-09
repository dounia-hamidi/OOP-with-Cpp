#include <iostream>
using namespace std;
// Class definition
class Car {
public:
// Constructor to initialize the car object
Car(string make, string model, int year) {
this->make = make;
this->model = model;
this->year = year;
cout << "Car constructor called: " << make << " " << model << " (" <<
year << ")" << endl;
}
// Destructor to indicate when the car object is destroyed
~Car() {
cout << "Car destructor called for: " << make << " " << model << endl;
}
// Method to display car information (Encapsulation: public method accessing private data)
void displayInfo() {
cout << "Car Info: " << year << " " << make << " " << model << endl;
}
private:
// Private member variables: Encapsulation ensures these are hidden from outside access
string make;
string model;
int year;
};
int main() {
// Create an object of class Car
Car myCar("Toyota", "Corolla", 2020);
// Call the method to display car info
myCar.displayInfo();
// No need to manually call the destructor; it will be called automatically
return 0;
}
