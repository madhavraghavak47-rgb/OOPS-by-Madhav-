#include <iostream>
using namespace std; 

class rectangle {
    private :
    int length ;
    int breadth ;
    int Area ;
    public :
    void input(){ 
        cout<<"enter the length "<<endl ;
        cin>>length;
        cout<<"enter the breadth"<<endl ;
        cin>>breadth ;
    }
    void Calculate_Area(){
        Area= length*breadth;
        
    }
    void Display_Area(){ 
        cout<<"the area of rectangle :"<<Area<<endl ;
    }
};

int main(){
    rectangle r1 ;
    r1.input() ;
    r1.Calculate_Area() ;
    r1.Display_Area();
    return 0 ;
}
