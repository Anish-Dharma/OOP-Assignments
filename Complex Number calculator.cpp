#include <iostream>
using namespace std;

class Complex {
	float real;
	float imag;

public:
	// Default Constructor
	Complex() {
		real = 0;
		imag = 0;
	}

	// Parameterized Constructor
	Complex(float r, float i) {
		real = r;
		imag = i;
	}

	// Overloading '+' operator using member function
	Complex operator+(const Complex &c) {
		return Complex(real + c.real, imag + c.imag);
	}

	// Overloading '*' operator using friend function
	friend Complex operator*(const Complex &c1, const Complex &c2);

	// Overloading '>>' and '<<' operators
	friend istream& operator>>(istream &in, Complex &c);
	friend ostream& operator<<(ostream &out, const Complex &c);
};

// Definition of friend function for multiplication
Complex operator*(const Complex &c1, const Complex &c2) {
	float r = (c1.real * c2.real) - (c1.imag * c2.imag);
	float i = (c1.real * c2.imag) + (c1.imag * c2.real);
	return Complex(r, i);
}

// Overload '>>' operator for input
istream& operator>>(istream &in, Complex &c) {
	cout << "Enter real part: ";
	in >> c.real;
	cout << "Enter imaginary part: ";
	in >> c.imag;
	return in;
}

// Overload '<<' operator for output
ostream& operator<<(ostream &out, const Complex &c) {
	out << c.real;
	if (c.imag >= 0)
		out << " + " << c.imag << "i";
	else
		out << " - " << -c.imag << "i";
	return out;
}

int main() {
	Complex c1, c2, sum, product;

	cout << "Enter first complex number:\n";
	cin >> c1;

	cout << "Enter second complex number:\n";
	cin >> c2;

	sum = c1 + c2;
	product = c1 * c2;

	cout << "\nSum = " << sum << endl;
	cout << "Product = " << product << endl;

	return 0;
}
