#include <iostream>
#include <string>
using namespace std;


class student{ 
  string name ;
  int RollNo ;
  public :
  void Set_Data(){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"ënter roll number"<<endl;
    cin>>RollNo ; 
}  
void Display_Data(){
     cout<<"Name of the student :"<<name<<endl;
     cout<<"Roll no of student :"<<RollNo<<endl;
}

};


int main() {
     student s1 ;
    s1.Set_Data();
    s1.Display_Data();
    
    return 0;
}
