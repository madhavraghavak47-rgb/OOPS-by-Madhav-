#include <iostream>
using namespace std ; 

class Arry {
    private :
    int arr[10];
    public:
    Arry(){
        for(int i=0;i<10;i++){
            cout<<"Enter element "<<i<< ":";
            cin>>arr[i];
            cout<<endl;
        }
    };
    void Sum(){ 
        int x= 0 ;
        for(int i = 0 ; i<10; i++){
            x+=arr[i];
        }
        cout<<"The sum of this arry is "<<x<<endl;
    }
};

int main(){ 
    Arry a1;
    a1.Sum();
    return 0;
}
