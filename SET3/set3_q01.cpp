#include <iostream>
using namespace std ;

class Number{
    public :
    int number ;

    void Input(){
        cout<<"Enter the number :";
        cin>>number ;
    }
};
Number add(Number n1,Number n2){
    Number n3;
    n3.number = 0 ;
    n3.number  = n1.number + n2.number ;
return n3 ;
}

int main(){
    Number n3 ;
    Number n1, n2 ;
    n1.Input();
    n2.Input();
    n3 = add(n1,n2);
    cout<<"the sum of the two numbers are :"<<n3.number<<endl ;

return 0 ;     
}
