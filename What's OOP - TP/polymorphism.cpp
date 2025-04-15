#include <iostream>
using namespace std;
class Car {
public:
virtual void displayInfo() {
cout << "This is a Car." << endl;
}
};
class SportsCar : public Car {
public:
void displayInfo() override {
cout << "This is a Sports Car." << endl;
}
};
int main() {
// Creating a pointer to a base class
Car* carPtr;
// Pointing to a base class object
Car myCar;
carPtr = &myCar;
carPtr->displayInfo(); // Output: This is a Car.
// Pointing to a derived class object
SportsCar mySportsCar;
carPtr = &mySportsCar;
carPtr->displayInfo(); // Output: This is a Sports Car.
return 0;
}