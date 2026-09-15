#include <iostream>
using namespace std ;

class Student{
    static int count ;
    public:
    Student(){
        count++;
        cout<<"student added"<<endl;
    }
    void display(){
        cout<<"No of students="<<count<<endl;
    }
};

int Student::count = 0;

int main(){
    Student s1;
    Student s2;
    Student s3;
    s3.display();
    return 0 ; 
}