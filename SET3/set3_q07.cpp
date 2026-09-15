#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l = 0, int w = 0) : length(l), width(w) {}

    int getLength()  {
        return length;
    }

    int getWidth()  {
        return width;
    }

    int area()  {
        return length * width;
    }

    bool hasEqualArea( Rectangle& other)  {
        return area() == other.area();
    }
};

Rectangle sumRectangles( Rectangle r1,  Rectangle r2) {
    return Rectangle(r1.getLength() + r2.getLength(), r1.getWidth() + r2.getWidth());
}

int main() {
    Rectangle r1(5, 4);
    Rectangle r2(10, 2);

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;

    if (r1.hasEqualArea(r2))
        cout << "Both rectangles have equal area." << endl;
    else
        cout << "Both rectangles do not have equal area." << endl;

    Rectangle r3 = sumRectangles(r1, r2);
    cout << "Sum rectangle dimensions: " << r3.getLength() << " x " << r3.getWidth() << endl;

    return 0;
}


