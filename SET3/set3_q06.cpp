#include <iostream>
using namespace std ;
#include <string>

class Salary{
    public :
    string EmployeeName;
    float salary ;
};

void Enter(Salary s[], int size){
    for(int i =0 ; i<size; i++){
    cout<<"enter name of the employee["<<i+1<<"]"<<endl;
    cin>>s[i].EmployeeName;
    cout<<"Enter the salary of this employee"<<endl;
    cin>>s[i].salary ;
}
}
void Highest_salary(Salary s[],int size ){
    float highest = s[0].salary;
    for(int i = 1 ; i<size; i++){
        if(s[i].salary>highest){
            highest = s[i].salary ;
        }    
    }
    cout<<"The highest salary is"<<highest<<endl;
}
Salary* Incriment(Salary s[] ,int size){
    Salary* arr = new Salary[size] ;
    for(int i = 0 ; i<size;i++){
         arr[i].EmployeeName = s[i].EmployeeName;
        arr[i].salary = s[i].salary+ (s[i].salary/10);
        cout<<"the new salary of employee "<<s[i].EmployeeName<<" is"<<arr[i].salary<<" INR"<<endl;
  
    }
    return arr ;
}
    

int main(){
    Salary s[5];
    Enter(s,5);
    Highest_salary(s,5);
    Salary* s3 = Incriment(s,5);
    return  0 ;
}















