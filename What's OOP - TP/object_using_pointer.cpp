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
}
// Method
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Creating an object dynamically using a pointer
Car* carPtr = new Car("Toyota", 2020);
// Calling the method using the pointer
carPtr->displayInfo(); // Output: Car: Toyota (2020)
// Freeing dynamically allocated memory
delete carPtr;
return 0;
}