#include <iostream>
using namespace std;

class Area{
    public:
    
    void Calculate(int side){
        cout<<side*side<<endl;
    }

    void Calculate(int length,int breadth){
        cout<<length*breadth<<endl ;
    }
    void Calculate(double radius){
        cout<<3.14*radius*radius<<endl ;
    }

};
int main(){
    Area obj ;
    obj.Calculate(5);
    obj.Calculate(4,6);
    obj.Calculate(3.5);
    return 0 ;
}