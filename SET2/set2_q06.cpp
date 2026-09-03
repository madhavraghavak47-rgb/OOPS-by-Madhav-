#include <iostream>
#include<string>
using namespace std ;

class Str{
    string str ;
    
    public :
    Str(string s){
        str = s ;
    };
    void Length(){
        int i = 0 ;
        while(str[i]!='\0'){
            i++;
        }
    cout<<"the length of the string is "<<i<<endl;    
    }
};

int main(){ string str ;
    cout<<"enter the string :"<<endl ;
    cin>>str;
    Str s1(str);
    s1.Length();
    return 0 ;
}

