#include <iostream>
using namespace std ;

class BankAccount{
    static int Number ;
    public:
    string AccountNumber ;
    int Balance ;
    BankAccount(string a, int n ):AccountNumber(a),Balance(n){
        Number++;
    }
    void display(){
        cout<<"Accounts created are :"<<Number<<endl;
    }

};
int BankAccount::Number = 0 ;

int main(){
    BankAccount a1("112233",12000);
    BankAccount a2("112322",130000);
    a1.display();
    return 0 ;
}