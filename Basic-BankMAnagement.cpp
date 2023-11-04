#include <iostream>
using namespace std;
class BankAccount{
 private:
    string accountnumber;
    string accountholdername;
    double Balance;
 public:
    BankAccount(string accountnumber,string accountholdername,double Balance){
        setbalance(Balance);
        setaccountholder(accountholdername);
        setaccountno(accountnumber);
    }
    void setaccountno(string accountnumber){
        this->accountnumber=accountnumber;
    }
    void setaccountholder(string accountholdername){
        this->accountholdername=accountholdername;
    }
    void setbalance(double Balance){
        this->Balance=Balance;
    }
    string getaccnumber(){
        return accountnumber;
    }
    string getaccountholder(){
        return accountholdername;
    }
    double getbalance(){
        return Balance;
    }
    void withdraw(double amount){
        if(amount>0&&amount<=getbalance()){
            Balance-=amount;
        }
    }
    void deposite(double amount){
        Balance+=amount;
    }
};
class Saving:public BankAccount{
private:
double interestrate;
public:
Saving(double interestrate,string accountnumber,string accountholdername,double Balance):BankAccount(accountnumber,accountholdername,Balance){
    setinterest(interestrate);
}
void setinterest(double interestrate){
    this->interestrate=interestrate;
}
double getinterest(){
    return interestrate;
}
        void display(){
            cout<<"Account Number: "<<getaccnumber()<<endl;
            cout<<"Account Holder Name: "<<getaccountholder()<<endl;
            cout<<"Balance: "<<getbalance()<<endl;
            cout<<"Interest Rate: "<<getinterest()<<endl;
        }
};
class overdraftlimit:public BankAccount{
    private:
double overdraft;
public:
overdraftlimit(double overdraft,string accountnumber,string accountholdername,double Balance):BankAccount(accountnumber,accountholdername,Balance){
    setoverdraft(overdraft);
}
void setoverdraft(double overdraft){
    this->overdraft=overdraft;
}
double getoverdraft(){
    return overdraft;
}
 void display(){
            cout<<"Account Number: "<<getaccnumber()<<endl;
            cout<<"Account Holder Name: "<<getaccountholder()<<endl;
            cout<<"Balance: "<<getbalance()<<endl;
            cout<<"Over Draft Limit: "<<getoverdraft()<<endl;
        }

};
class FixedDepositeAccount: public BankAccount{
    private:
    int term;
    public:
    FixedDepositeAccount(int term,string accountnumber,string accountholdername,double Balance):BankAccount(accountnumber,accountholdername,Balance){
    setterm(term);
    }
    void setterm(int term){
        this->term=term;
    }
    int getterm(){
        return term;
    }
     void display(){
            cout<<"Account Number: "<<getaccnumber()<<endl;
            cout<<"Account Holder Name: "<<getaccountholder()<<endl;
            cout<<"Balance: "<<getbalance()<<endl;
            cout<<"Term: "<<getterm()<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Saving svg(3.0,"HBL9307","M.Kaif",10000);
    overdraftlimit o(10,"ABL9301","M.Adil",9000);
    FixedDepositeAccount fxd(13,"NAT9326","AMsaal",8000);
    svg.deposite(1500);
    svg.display();
    return 0;
}
