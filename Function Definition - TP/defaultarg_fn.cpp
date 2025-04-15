#include <iostream>
using namespace std;
// Function with a default argument
int multiply(int a, int b = 5) {
return a * b;
}
int main() {
cout << multiply(4) << endl; // Output: 20 (b = 5 by default)
cout << multiply(4, 3) << endl; // Output: 12
return 0;
}