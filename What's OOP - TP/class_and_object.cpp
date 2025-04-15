#include <iostream>
using namespace std;
class Car {
public:
// Attributes
string brand;
int year;
// Methods
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create objects (instances of the Car class)
Car myCar;
myCar.brand = "Toyota";
myCar.year = 2020;
// Call method on object
myCar.displayInfo(); // Output: Car: Toyota (2020)
return 0;
}