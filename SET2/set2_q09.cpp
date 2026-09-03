#include <iostream>
using namespace std ;

class BankAccount{
    string account_number ;
    int balance ;
    public:
    BankAccount(){
        cout<<"ENter bank account  number :"<<endl;
        cin>>account_number;
        cout<<"Enter your current balance ";
        cin>>balance ;
    };
    
    void Deposite(int d ){
        cout<<"Deposited:"<<d<<"INR"<<endl ;
        cout<<"Available balance = "<<d+balance<<endl;
        balance+= d ;
    }
    void Withdraw(int w ){ 
        if(w>balance){cout<<"Not sufficient Balance "<<endl;
        }
        else{ 
            cout<<"you withdrew :"<<w<<"INR"<<endl;
            cout<<"Available balance = "<<balance-w<<"INR"<<endl ;
        }
    }    
    void display_balance(){
        cout<<"Your available balance is "<<balance<<"INR"<<endl ;
    }    
    
};

int main(){ 
    int deposite ;
    int withdraw ;
    BankAccount b1 ;
    cout<<"Enter the amount you want to deposite :";
    cin>>deposite;
    cout<<endl;

    cout<<"Enter the amount you want to withdraw :";
    cin>>withdraw;
    cout<<endl ;
    b1.Deposite(deposite);
    b1.Withdraw(withdraw);
    b1.display_balance();
    return 0 ;
}
