#include <iostream>
using namespace std;
class Box {
private:
int length;
public:
Box(int l) : length(l) {}
// Declare friend function
friend void printLength(Box b);
};
// Define the friend function
void printLength(Box b) {
// Can access private member directly
cout << "Length of the box: " << b.length << endl;
}
int main() {
Box myBox(10);
printLength(myBox); // Calls the friend function
return 0;
}