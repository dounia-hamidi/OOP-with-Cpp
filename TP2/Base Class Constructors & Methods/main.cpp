#include <iostream>
using namespace std;
class Shape {
public:
virtual void draw() {
cout << "Drawing a shape" << endl;
}
};
class Circle : public Shape {
public:
void draw() override {
cout << "Drawing a circle" << endl;
// Accessing base class method
Shape::draw(); // Calling the base class draw() method explicitly
}
};
class Square : public Shape {
public:
void draw() override {
cout << "Drawing a square" << endl;
// Accessing base class method
Shape::draw(); // Calling the base class draw() method explicitly
}
};
int main() {
Circle circle;
Square square;
// Calling methods on derived class objects
circle.draw(); // Calls Circle's draw() and Shape's draw()
square.draw(); // Calls Square's draw() and Shape's draw()
return 0;
}
