#include <iostream>
using namespace std ;

class Salary {
    public:
    Salary(string name ,int a){ 
        int HBA = a/5;
        int DA = a/10;
        cout<<"Gross Salary of "<<name<<"is"<<a+HBA+DA<<"INR"<<endl;
    }
};

int main(){ 
    string name ;
    int s ;
    cout<<"Enter your name :"<<endl ;
    cin>>name ;
    cout<<"Enter your basic salary"<<endl;
    cin>>s;
    Salary s1(name,s);
return 0 ;
}
