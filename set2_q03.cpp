#include <iostream>
using namespace std ;

class Number {
    private :
    int num ;
    int i = 0;
    public :
    void input(){
        cout<<"Enter the number"<<endl ;
        cin>>num;
    }
    void Is_Even(){
        if(num%2==0){ i=1;
        }
    }
    void Display_Result(){
        if(i==1)
            cout<<"It is an even number"<<endl;
        else 
            cout<<"It is not an even number"<<endl;
    }
};
int main(){ 
    Number n1 ;
    n1.input();
    n1.Is_Even();
    n1.Display_Result();
    return 0 ;
}
