#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex(double r , double i ){
		real=r;
		imaginary=i;
	}

	Complex operator+( Complex& other)  {
		return Complex(real + other.real, imaginary + other.imaginary);
	}

	void display()  {
		cout << real << " + " << imaginary << "i" << endl;
	}
};

int main() {
	Complex first(3, 4);
	Complex second(2, 5);
	Complex sum = first + second;

	sum.display();
	return 0;
}
