#include <iostream>
using namespace std;
// Function returning a pointer
int* getPointer(int& value) {
return &value; // Return address of 'value'
}
int main() {
int num = 42;
int* ptr = getPointer(num); // Get pointer to 'num'
cout << "Pointer points to value: " << *ptr << endl; // Output: Pointer points to value: 42
return 0;
}