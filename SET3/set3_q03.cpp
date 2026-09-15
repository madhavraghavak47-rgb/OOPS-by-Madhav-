#include <iostream>
using namespace std ;

class Height{
    public:
    int inches,feets ;

    Height(int x,int y){
        feets = x;
        inches = y;
    };

};

void Add(Height h1,Height h2){
    cout<<"the total height is : "<<h1.feets+h2.feets+(h1.inches+h2.inches)/12<<" Feets"<< (h1.inches +h2.inches )%12<<" Inches "<<endl ;
}

int main(){
    Height h1(6,10);
    Height h2(5,13);

   Add(h1,h2);

return 0 ;
}