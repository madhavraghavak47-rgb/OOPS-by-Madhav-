#include <iostream>
using namespace std ;

class Integers{
    private:
    int integer ;
    public:
    
    Integers(int i ):integer(i){}

    friend void add(Integers i1 , Integers i2 );
};

void add(Integers i1,Integers i2){
    cout<<"sum of the two are"<<i1.integer+ i2.integer<<endl ;
}

int main(){
    Integers i1(12);
    Integers i2(13);
    
    add(i1,i2);
    return 0 ;
}