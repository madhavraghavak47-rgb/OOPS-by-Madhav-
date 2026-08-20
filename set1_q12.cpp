//maximum and second maximum element in an array
#include <iostream>
using namespace std;
int main(){
    int n ;
    int max,second_max;
    cout<<"enter number of elements: ";
    cin>>n;
    int arry[n];
    for(i=0;i<n;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>arry[i];
    }
    if(arry[0]>arry[1]){
        max=arry[0];
        second_max = arry[1];
    }
    for(int i=2;i<n;i++){
        if(arry[i]>max){
            second_max=max;
            max=arry[i];
        }
        else if(arry[i]>second_max && arry[i]!=max){
            second_max=arry[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
    cout<<"The second maximum element is: "<<second_max<<endl;
    return 0;
}