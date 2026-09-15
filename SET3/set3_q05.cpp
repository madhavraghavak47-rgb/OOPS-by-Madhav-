#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex add(const Complex& other) const {
        return Complex(this->real + other.real, this->imag + other.imag);
    }

    Complex multiply(const Complex* other) const {
        double newReal = (this->real * other->real) - (this->imag * other->imag);
        double newImag = (this->real * other->imag) + (this->imag * other->real);
        return Complex(newReal, newImag);
    }

    void display() const {
       cout << real << (imag >= 0 ? " + " : " - ") <<abs(imag) << "i\n";
    }

    friend Complex subtract(Complex a, Complex b);
};

Complex subtract(Complex a, Complex b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}

int main(){
    Complex c1(4.0, 5.0);
    Complex c2(2.0, -1.0);

    std:cout << "Number 1: "; c1.display();
   cout << "Number 2: "; c2.display();
   cout << "-------------------\n";

    Complex sum = c1.add(c2);
   cout << "Addition: "; sum.display();

    Complex diff = subtract(c1, c2);
   cout << "Subtraction: "; diff.display();

    Complex prod = c1.multiply(&c2);
   cout << "Multiplication: "; prod.display();

    return 0;
}