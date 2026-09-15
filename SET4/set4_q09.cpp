#include <iostream>
using namespace std ;

class Interest{
    public:
    inline float calculate(float p , float r , float t ){
        return (p*r*t)/100;
    }
};

int main(){
    cout<<"Enter principle,rate of interest and time ";
    float p,r,t ;
    cin >> p >> r >> t;
    Interest I ;
    cout<<"the simple intrest is :"<<I.calculate(p,r,t)<<endl;
    return 0 ;
}

