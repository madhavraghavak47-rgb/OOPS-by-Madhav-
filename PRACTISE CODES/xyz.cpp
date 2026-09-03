#include <iostream>
#include <string>
using namespace std;
int main(){
    string *ptr = new string[50] ;
    ptr[1]="z";
    cout<<ptr[1] ;
delete ptr ;

return 0 ;
}