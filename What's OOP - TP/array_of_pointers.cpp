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
// Creating an array of pointers to Car objects
Car* carArray[3];
// Dynamically allocating objects
carArray[0] = new Car("Toyota", 2020);
carArray[1] = new Car("Honda", 2021);
carArray[2] = new Car("Ford", 2022);
// Accessing and calling methods on each object using pointers
for (int i = 0; i < 3; i++) {
carArray[i]->displayInfo(); // Output: Car: Toyota (2020), Car: Honda (2021), Car: Ford (2022)
}
// Freeing dynamically allocated memory
for (int i = 0; i < 3; i++) {
delete carArray[i]; // Deleting each object
}
return 0;
}
