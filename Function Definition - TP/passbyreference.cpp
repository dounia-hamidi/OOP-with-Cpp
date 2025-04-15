#include <iostream>
using namespace std;
// Function to swap two numbers using reference
void swapNumbers(int& a, int& b) {
int temp = a;
a = b;
b = temp;
}
int main() {
int x = 10, y = 20;
swapNumbers(x, y);
cout << "x: " << x << ", y: " << y << endl; // Output: x: 20, y: 10
return 0;
}