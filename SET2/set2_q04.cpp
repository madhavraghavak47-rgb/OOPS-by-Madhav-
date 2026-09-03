#include <iostream>
using namespace std;

class Book {
    public :
    Book(string s,string a){
        cout<<"the book name is: "<<s<<endl;
        cout<<"the book auther is :"<<a<<endl;
    }
};

int main(){ 
    string name ;
    string auther ;

    cout<<"Enter book name :"<<endl ;
    cin>>name ;

    cout<<"Enter the auther name :"<<endl;
    cin>>auther;
    
    Book k1(name,auther);
    
    return 0 ;
}
