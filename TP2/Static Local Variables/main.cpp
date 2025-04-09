#include <iostream>
using namespace std;
void countCalls() {
static int callCount = 0; // Static local variable
callCount++;
cout << "Function called " << callCount << " times." << endl;
}
int main() {
countCalls();
countCalls();
countCalls();
return 0;
}
