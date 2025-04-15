#include <iostream>
using namespace std;
// Function to update value using pointer
void updateValue(int* ptr) {
*ptr = 100; // Dereference pointer to modify the original variable
}
int main() {
int a = 10;
updateValue(&a); // Pass the address of 'a' to the function
cout << "Updated value: " << a << endl; // Output: Updated value: 100
return 0;
}