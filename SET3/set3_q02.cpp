#include <iostream>
using namespace std ;

class Student{
    public :
    string Roll_No ;
    int Total_Marks ;

    void Input(){
        cout<<"Enter the student's Roll No :" ;
        cin>>Roll_No ;
        cout<<endl<<"Enter the total marks of the student :";
        cin>>Total_Marks ;       
    }

};

void Compare(Student s1 , Student s2 ){
    if(s1.Total_Marks>s2.Total_Marks ){
        cout<<"Student 1 has more over all marks ";
    }
    else if(s1.Total_Marks<s1.Total_Marks ){
        cout<<"Student 2 has more over all marks ";
    }
    else cout<<"both has eqaual over all marks ";
}

int main(){
    Student s1,s2 ;
    s1.Input();
    s2.Input();
    Compare(s1,s2);
    return 0 ; 
}

