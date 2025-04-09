#include <iostream>
using namespace std;
class Counter {
public:
static int count;
// Static member variable
Counter() {
count++; // Increment count for every object created
}
static void showCount() {
cout << "Object count: " << count << endl;
}
};
// Definition of the static member variable outside the class
int Counter::count = 0;
int main() {
Counter c1;
Counter c2;
Counter::showCount(); // Show count for all objects
return 0;
}
