#include <iostream>
using namespace std ;
class Result {
    int marks[5];
    
    public :
    void Input(){
        for (int i = 0 ; i< 5 ; i++){
            cout<<"Enter the marks of student "<<i<<":"<<endl;
            cin>>marks[i];
        }
    }

    void Highest_mark(){
        int max = marks[0];
        for(int i = 1; i< 5;i++){
            if(marks[i]>max){
                max = marks[i];
            }
        }
        cout<<"the highest marks is :"<<max;    
    }
};    

int main(){
    Result r1 ;
    r1.Input() ;
    r1.Highest_mark();
return 0 ;    
}
