 #include <iostream>
using namespace std;

class Distance {
	int feet, inches;

public:
	Distance(int f , int i ) {
        feet = f ;
        inches = i ;
    }

	Distance operator+(const Distance& other) const {
		int totalInches = inches + other.inches;
		return Distance(feet + other.feet + totalInches / 12,
		                totalInches % 12);
	}

	void display()  {
		cout << feet << " ft " << inches << " in" << endl;
	}
};

int main() {
	Distance d1(5, 8), d2(3, 9);
	Distance total = d1 + d2;
	total.display();
	return 0;
}
