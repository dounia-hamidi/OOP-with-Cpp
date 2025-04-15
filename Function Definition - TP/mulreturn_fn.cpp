#include <iostream>
using namespace std;
// Function to check if a number is positive, negative, or zero
string checkNumber(int num) {
if (num > 0) {
return "Positive";
} else if (num < 0) {
return "Negative";
} else {
return "Zero";
}
}
int main() {
cout << checkNumber(5) << endl; // Output: Positive
cout << checkNumber(-3) << endl; // Output: Negative
cout << checkNumber(0) << endl; // Output: Zero
return 0;
}