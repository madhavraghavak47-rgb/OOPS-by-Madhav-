//fibonacci series
#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1)return 1 ;
    else return fib(n-1) + fib(n-2);
}

int main(){ int x ;
    cout<<"Enter nuber of digits " ;
    cin>>x ;
    cout<<"the series is ";
    for (int i =1 ; i<=x;i++){
        cout<<fib(i)<<" " ;
    }
    return 0;
}