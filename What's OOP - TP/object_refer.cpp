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
// Creating an object on the stack
Car myCar("Honda", 2022);
// Pointer to the object
Car* carPtr = &myCar; // Storing the address of myCar in carPtr
// Calling the method using the pointer
carPtr->displayInfo(); // Output: Car: Honda (2022)
return 0;
}