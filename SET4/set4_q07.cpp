#include <iostream>
using namespace std ;

class Integer{
    private:
    int first;
    int second;

    public:
    Integer(int a, int b) : first(a), second(b) {}
    friend void displayLargest( Integer& numbers);
};

void displayLargest( Integer& numbers) {
    cout << "Largest number: ";
    if(numbers.first>numbers.second)cout<<numbers.first<<endl ;
    else if(numbers.first<numbers.second)cout<<numbers.second<<endl ;
    else cout<<"both are equal";
}

int main() {
    Integer numbers(25, 12);
    displayLargest(numbers);
    return 0;
}