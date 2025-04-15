#include <iostream>
using namespace std;
class Car {
private:
// Private attributes (not directly accessible from outside)
string brand;
int year;
public:
// Public setter function to set private attributes
void setCarDetails(string b, int y) {
brand = b;
year = y;
}
// Public getter function to access private attributes
void displayInfo() {
cout << "Car: " << brand << " (" << year << ")" << endl;
}
};
int main() {
Car myCar;
// Use setter to set values
myCar.setCarDetails("Honda", 2021);
// Use getter to display values
myCar.displayInfo(); // Output: Car: Honda (2021)
return 0;
}