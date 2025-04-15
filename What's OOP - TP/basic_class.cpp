#include <iostream>
using namespace std;
class Car {
public:
// Attributes (Data Members)
string brand;
int year;
// Method (Member Function)
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create an object of the Car class
Car myCar;
myCar.brand = "Toyota";
myCar.year = 2020;
// Calling the method
myCar.displayInfo(); // Output: Car: Toyota (2020)
return 0;
}
