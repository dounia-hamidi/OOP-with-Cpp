#include <iostream>
using namespace std;
class Car {
public:
string brand;
int year;
// Constructor to initialize the attributes
Car(string b, int y) {
brand = b;
year = y;
}
// Method to display information
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create objects with different constructor parameters
Car myCar("Toyota", 2020);
Car yourCar("Ford", 2018);
myCar.displayInfo(); // Output: Car: Toyota (2020)
yourCar.displayInfo(); // Output: Car: Ford (2018)
return 0;
}