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
// Method to display info
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
// Create an object using the default constructor
Car myCar;
myCar.displayInfo(); // Output: Car: Unknown (0)
return 0;
}