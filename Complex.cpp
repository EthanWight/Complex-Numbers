
#include <iostream>

#include "Complex.h"

namespace cmsc270 {

// Default constructor
Complex::Complex() : a(0), b(0) {}

// Parameterized constructor
Complex::Complex(double _a, double _b) : a(_a), b(_b) {}

// Addition: Complex + Complex
Complex Complex::operator+(const Complex &o) const {
    return Complex(a + o.a, b + o.b);
}

// Addition: Complex + double
Complex Complex::operator+(double d) const {
    return Complex(a + d, b);
}

// Addition: double + Complex
Complex operator+(double d, const Complex& rhs) {
    return Complex(d + rhs.a, rhs.b);
}

// Subtraction: Complex - Complex
Complex Complex::operator-(const Complex &o) const {
    return Complex(a - o.a, b - o.b);
}

// Multiplication: Complex * Complex
Complex Complex::operator*(const Complex &o) const {
    return Complex(a * o.a - b * o.b, a * o.b + b * o.a);
}

// Addition assignment: Complex += Complex
Complex& Complex::operator+=(const Complex& rhs) {
    a += rhs.a;
    b += rhs.b;
    return *this;
}

// Addition assignment: Complex += double
Complex& Complex::operator+=(double d) {
    a += d;
    return *this;
}

// Subtraction assignment: Complex -= Complex
Complex& Complex::operator-=(const Complex& rhs) {
    a -= rhs.a;
    b -= rhs.b;
    return *this;
}

// Multiplication assignment: Complex *= Complex
Complex& Complex::operator*=(const Complex& rhs) {
    double realPart = a * rhs.a - b * rhs.b;
    double imagPart = a * rhs.b + b * rhs.a;
    a = realPart;
    b = imagPart;
    return *this;
}

// Output stream operator for printing
std::ostream& operator<<(std::ostream &os, const Complex &c) {
    // Handle the zero case
    if (c.a == 0 && c.b == 0) {
        os << "0";
        return os;
    }

    // Print real part if it's not zero
    if (c.a != 0) {
        os << c.a;
    }

    // Handle imaginary part
    if (c.b != 0) {
        if (c.a != 0) {
            os << (c.b > 0 ? " + " : " - ");
        } else if (c.b < 0) {
            os << "-";
        }

        // Only print absolute value of imaginary part if it's not 1
        if (c.b != 1 && c.b != -1) {
            os << (c.b > 0 ? c.b : -c.b);
        }

        os << "i"; // Always print 'i' at the end for imaginary part
    }

    return os;
}

}
