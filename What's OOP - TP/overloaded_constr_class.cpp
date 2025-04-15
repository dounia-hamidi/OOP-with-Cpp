#include <iostream>
using namespace std;
class Car {
public:
string brand;
int year;
// Default constructor
Car() {
brand = "Unknown";
year = 0;
cout << "Default Car created" << endl;
}
// Overloaded constructor
Car(string b, int y) {
brand = b;
year = y;
cout << "Car created: " << brand << endl;
}
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create objects using different constructors
Car defaultCar; // Calls default constructor
defaultCar.displayInfo(); // Output: Car: Unknown (0)
Car myCar("Toyota", 2022); // Calls overloaded constructor
myCar.displayInfo(); // Output: Car: Toyota (2022)
return 0;
}