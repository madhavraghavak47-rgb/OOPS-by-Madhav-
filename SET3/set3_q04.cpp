#include <iostream>
#include<string>
using namespace std ;

class BankAccount{
    public:
    string account_number ;
    double amount ;
    
    BankAccount(string s , double a){
        account_number = s;
        amount = a ;

    };

    void Transfer(BankAccount &reciever , double Amount , BankAccount &sender ){
        if(sender.amount<Amount ){
            cout<<"unsufficient balance"<<endl;            
        }
        else{
            cout<<"amount recieved";
            sender.amount -= Amount ;
            reciever.amount+= Amount ;

        }    
    }
    void Status(BankAccount reciever  , BankAccount sender  ){
        cout<<"receiver's bank balance is :"<<reciever.amount <<"Inr"<<endl;
        cout<<"sender's bank balance is :"<<sender.amount<<"Inr"<<endl ;
    }

};

int main(){
    BankAccount b1("0011234",100000),b2("0011232",25000) ;
    b1.Transfer(b2,10000,b1);
    b1.Status(b2,b1);
return 0 ;    
}

