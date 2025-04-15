#include <iostream>
using namespace std;
class Complex {
private:
float real;
float imag;
public:
// Constructor
Complex(float r = 0, float i = 0) : real(r), imag(i) {}
// Operator + overloading
Complex operator+(const Complex& other) {
return Complex(real + other.real, imag + other.imag);
}
// Friend function to overload << operator
friend ostream& operator<<(ostream& os, const Complex& c);
};
// Overload << operator (as a friend function)
ostream& operator<<(ostream& os, const Complex& c) {
if (c.imag < 0)
os << c.real << " - " << -c.imag << "i";
else
os << c.real << " + " << c.imag << "i";
return os;
}
int main() {
Complex c1(3, 4);
Complex c2(1, -2);
Complex c3 = c1 + c2;
cout << "c1 = " << c1 << endl;
cout << "c2 = " << c2 << endl;
cout << "c1 + c2 = " << c3 << endl;
return 0;
}