
#pragma once

#include <iostream>

namespace cmsc270 {

class Complex{
    
private:
    //declare double a (real) , b (imaginary)
    double a, b;

public:
    // Constructors
    Complex();
    Complex(double _a, double _b);

    // Overloaded operators
    Complex operator+(const Complex &o) const;
    Complex operator+(double d) const;
    friend Complex operator+(double d, const Complex& rhs);
    Complex operator-(const Complex &o) const;
    Complex operator*(const Complex &o) const;

    Complex& operator+=(const Complex& rhs);
    Complex& operator+=(double d);
    Complex& operator-=(const Complex& rhs);
    Complex& operator*=(const Complex& rhs);

    // Output stream operator
    friend std::ostream& operator<<(std::ostream &os, const Complex &c);
};
}//namespace cmsc270
