#include <iostream>
using namespace std;
class Shape {
public:
virtual void draw() {
cout << "Drawing a shape" << endl;
}
virtual ~Shape() {} // Virtual destructor for cleanup
};
class Circle : public Shape {
public:
void draw() override {
cout << "Drawing a circle" << endl;
}
};
// Overridden method
class Rectangle : public Shape {
public:
void draw() override {
cout << "Drawing a rectangle" << endl;
}
};
// Overridden method
int main() {
Shape* shapePtr;
Circle myCircle;
Rectangle myRectangle;
// Base class pointer (shapePtr) points to derived class objects
shapePtr = &myCircle;
shapePtr->draw(); // Will call Circle's draw() due to overriding
shapePtr = &myRectangle;
shapePtr->draw(); // Will call Rectangle's draw() due to overriding
return 0;
}
