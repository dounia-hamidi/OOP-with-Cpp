#include <iostream>
using namespace std;
class Car {
public:
string brand;
int year;
// Method declaration (inside class)
void displayInfo(); 
};
// Method definition (outside the class)
void Car::displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
int main() {
// Create an object of the Car class
Car myCar;
myCar.brand = "Ford";
myCar.year = 2018;
// Calling the method
myCar.displayInfo(); // Output: Car: Ford (2018)
return 0;
}