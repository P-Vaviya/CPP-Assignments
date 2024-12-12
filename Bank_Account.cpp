# include <iostream>
using namespace std;

class Bank{
    private:
    int balance = 22223;

    public:
    void Display(){
        cout<<"Your Balance is "<<balance<<endl;
    }

    void Debit(int d){
        cout<<"Your Balance is "<<balance<<endl;
        if (balance<d){
            cout<<"Insufficient Balance"<<endl;
        }
        else {cout<<"Your account has been deposited rupees "<<d<<endl;}
        cout<<"Your Updated Balance is : "<<balance-d<<endl;
    }

    void Credit(int c){
        cout<<"Your account has been credited with rupees "<<c<<endl;
        cout<<"Your Updated Balance is : "<<balance+c<<endl;
    }
};

int main(){
    int i = 0, opt, money;
    Bank P;

    while (i == 0){
    cout<<"Select anyone of the option "<<endl;
    cout<<"1. Check balance "<<endl;
    cout<<"2. Credit Balance in your account  "<<endl;
    cout<<"3. Debit Balance in your account "<<endl;
    cout<<"4 Logout of your account"<<endl;
    cin>>opt;

    if (opt == 1){
        P.Display();
    }
    if (opt == 2){
        cout<<"Enter amount to be credited : "<<endl;
        cin>>money;
        P.Credit(money);
    }
    if (opt == 3){
        cout<<"Enter amount to be debited : "<<endl;
        cin>>money;
        P.Debit(money);
    }
    if (opt == 4){
        i = 1;
    }
    
    }
}