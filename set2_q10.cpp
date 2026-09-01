#include <iostream>
using namespace std ;

class Student{
    string name ;
    int Roll_no ;
    int marks[5];
    int sum = 0 ;
    public :
    Student(string s, int n){
        name = s ;
        Roll_no= n ;
    };
    void Input_marks(){
        for(int i=0;i<5;i++){
            cout<<"enter marks of subject["<<i+1<<"] :";
            cin>>marks[i];
            cout<<endl ;
        } 
        
    }
    void Total_Marks(){
        for(int i=0;i<5;i++){
            sum+=marks[i];
        }
    cout<<"the total marks of "<<name<<"="<<sum<<endl;    
    }
    void Percentage(){
        cout<<"the percentage of "<<name<<"is"<< sum/5<<"%"<<endl;
    }
    void Grade(){ 
        int grade = sum/5;
        if(grade>90){
            cout<<"A grade"<<endl;
        }
        else if(grade<90&&grade>75){
            cout<<"B grade "<<endl;
        }
        else if(grade<75&&grade>60){
            cout<<"B grade "<<endl;
        }
        else if(grade<60&&grade>=40){
            cout<<"D grade "<<endl;
            
        }
        else cout<<"Failed";
        
    }
};

int main(){ 
    Student s1("Madhav verma",25);
    s1.Input_marks();
    s1.Total_Marks();
    s1.Percentage();
    s1.Grade();
    return 0 ;
    
}
