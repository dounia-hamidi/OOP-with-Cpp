#include <iostream>
using namespace std;
struct Car {
// Attributes (public by default)
string brand;
int year;
};
int main() {
// Create a struct object
Car myCar;
myCar.brand = "Honda";
myCar.year = 2019;
cout << "Car: " << myCar.brand << " (" << myCar.year << ")" << endl;
return 0;
}