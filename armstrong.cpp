#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number = 12343;
    int duplicate = number ;
    int remainder;
    int power = 0;
    int sum =0;
    
    while(duplicate!=0){
        duplicate= duplicate/10;
        power++;
    }
    cout<<power;
    duplicate = number ;
    while(duplicate!=0){
        remainder = duplicate%10;
        sum+=round(pow(remainder,power));
        duplicate = duplicate/10;
    }

    cout<<sum;
    if(sum==number)cout<<"it is an armstrong number";
    else cout<<"it is not an armstrong number";

return 0 ;
}