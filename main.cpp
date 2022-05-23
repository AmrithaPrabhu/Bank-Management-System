#include <iostream>
#include <string>
#include <vector>
using namespace std;
class bank{
    private:
        int type;
        string name;
        string dob;
        
        double balance;
    public:
      
       void menu();
       void openAccount();
       void deposit();
       void withdraw();
       void display();
};
void bank::menu(){
cout<<"\t\t\t*********************************************"<<endl;
cout<<"\t\t\t*      Welcome to Terminal Bank           *"<<endl;
cout<<"\t\tPlease allow us to help you by choosing one of the following"<<endl;
cout<<"\t\t\t1.Open Account                                "<<endl;
cout<<"\t\t\t2.Deposit                                     "<<endl;
cout<<"\t\t\t3.Withdraw                                    "<<endl;
cout<<"\t\t\t4.Display                                     "<<endl;
cout<<"\t\t\t5.Exit                                        "<<endl;
cout<<"\t\t\t**********************************************"<<endl;

int choice;
cout<<"\t\t\tEnter your choice: ";
cin>>choice;
  switch(choice){
    case 1:
        openAccount();
        break;
    case 2:
        deposit();
        break;
    case 3:
        withdraw();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
        break;
    default:
        cout<<"Invalid Choice"<<endl;
        break;
  }
}
void bank::deposit(){
    cout<<"\t\t\t                          "<<endl;
    cout<<"\t\t\t                          "<<endl;
    if(name==""){
        cout<<"\t\t\tPlease open an account first"<<endl;
    }
    else{
        cout<<"\t\t\tEnter the amount to be deposited: ";
        double amount;
        cin>>amount;
        balance+=amount;
        cout<<"\t\t\tAmount deposited successfully"<<endl;
    }

    
    int c;
    cout<<"\t\t\tDo you want to continue? (1/0) : ";
    cin>>c;
    if(c==1){
        menu();
    }
    else{
        exit(0);
    }
}
void bank::openAccount(){
    cout<<"\t\t\t                          "<<endl;
    cout<<"\t\t\t                          "<<endl;
    cout<<"\t\t\tEnter your name"<<endl;
    cin>>name;
    
    cout<<"\t\t\tEnter your dob"<<endl;
    cin>>dob;
    
    cout<<"\t\t\tSavings account (Click 1) or Current account (Click 2)?"<<endl;
    cin>>type;
    cout<<"\t\t\tDeposit your initial amount"<<endl;
    cin>>balance;
    cout<<"\t\t\tAccount created successfully. We are delighted yo have you as our customer. Please be aware of fraudulent mails and do not disclose your password."<<endl;
    
    int c;
    cout<<"\t\t\tDo you want to continue? (1/0) : ";
    cin>>c;
    if(c==1){
        menu();
    }
    else{
        exit(0);
    }
}
void bank::withdraw(){
    cout<<"\t\t\t                          "<<endl;
    cout<<"\t\t\t                          "<<endl;
    if(name==""){
        cout<<"\t\t\tPlease open an account first"<<endl;
    }
    else{
        cout<<"\t\t\tEnter the amount to be withdrawn: ";
        double amount;
        cin>>amount;
        if(amount>balance){
            cout<<"\t\t\tInsufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"\t\t\tAmount withdrawn successfully"<<endl;
            cout<<"\t\t\tYour balance is "<<balance<<endl;
        }
    }
    
    
    int c;
    cout<<"\t\t\tDo you want to continue? (1/0) : ";
    cin>>c;
    if(c==1){
        menu();
    }
    else{
        exit(0);
    }
}
void bank::display(){
    cout<<"\t\t\t                          "<<endl;
    cout<<"\t\t\t                          "<<endl;
    if(name==""){
        cout<<"\t\t\tPlease open an account first"<<endl;
    }
    else{
        cout<<"\t\t\tYour name is "<<name<<endl;
        cout<<"\t\t\tYour date of birth is "<<dob<<endl;
        cout<<"\t\t\tYour account type is ";
        if(type==1){
            cout<<"Savings"<<endl;
        }
        else{
            cout<<"Current"<<endl;
        }
        cout<<"\t\t\tYour balance is "<<balance<<endl;
    }
    
    int c;
    cout<<"\t\t\tDo you want to continue? (1/0) : ";
    cin>>c;
    if(c==1){
        menu();
    }
    else{
        exit(0);
    }
}
int main(){
    bank b;
    b.menu();
    return 0;
}