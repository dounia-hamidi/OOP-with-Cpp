#include <iostream>
using namespace std;
class Car {
public:
string brand;
int year;
// Constructor
Car(string b, int y) {
brand = b;
year = y;
cout << "Car created: " << brand << endl;
}
// Destructor
~Car() {
cout << "Car destroyed: " << brand << endl;
}
// Method to display information
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create objects
Car myCar("Toyota", 2020);
myCar.displayInfo(); // Output: Car: Toyota (2020)
// When the object goes out of scope, the destructor is called automatically
return 0;
}