#include <iostream>
using namespace std;
// Function that takes a large object by reference but doesn't modify it
void printString(const string& str) {
cout << str << endl;
}
int main() {
string text = "Hello, World!";
printString(text); // Output: Hello, World!
return 0;
}