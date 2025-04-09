#include <iostream>
using namespace std;
class Box {
private:
int length;
public:
// Constructor with an argument that shadows the member variable 'length'
Box(int length) {
// Using 'this' to differentiate between the argument 'length' and the member variable 'length'
this->length = length;
}
// Method to display the length of the box
void displayLength() {
cout << "Length of the box: " << this->length << endl;
}
};
int main() {
Box box1(10); // Create a Box object with length 10
box1.displayLength(); // Output: Length of the box: 10
return 0;
}
