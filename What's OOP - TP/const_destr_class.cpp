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
// Method
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
Car myCar("Toyota", 2020);
myCar.displayInfo(); // Output: Car: Toyota (2020)
return 0;
}