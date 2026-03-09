#include<iostream>
using namespace std;


class BankAccount{
private:
    int AccNo;
    string name;
    double balance;

public:

    void setAccountNumber(int num){
        if(num>0){
   AccNo = num;
        }
     
    }

    void setAccountHolderName(string n){
        name = n;
    }

    void setBalance(double b){
        balance = b;
    }

    int getAccoutNumber(){
        return AccNo;
    }

    string getAccountHolderName(){
        return name;
    }

    double getBalance(){
        return balance;
    }


 void accountDetails() {
    int acc;
    string holder;
    double bal;

    cout << "Enter Account Number : ";
    cin >> acc;
    setAccountNumber(acc);

    cout << "Enter Account Holder Name: ";
    getline(cin >> ws, holder);
    setAccountHolderName(holder);

    cout << "Enter Balance Amount: ";
    cin >> bal;
    setBalance(bal);
}
        


    void depositMoney(){
        double ammount;

        cout << "Enter Ammount : ";
        cin >> ammount;
        ammount += balance;
        setBalance(ammount);
    }

    void withdrawMoney(){
        double wm;

        cout << "Enter Withdraw Money : ";
        cin>> wm;
        if(wm <= balance)
            balance = balance - wm;
        else
           cout << "Balance is not sufficient";
        
    }

    void displayAccounDetails(){
        cout << "Bank Account Details" << endl;
        cout << "Account Number : " << AccNo << endl;
        cout << "Accont Holder Name : " << name << endl;
        cout << "Account Balance is : "  << balance << endl;
    }





};

int main(){
     BankAccount BA;
    int choice;

    do{

    cout << "\n===== MENU =====\n";
    cout << "1. Enter Account Details\n";
    cout << "2. Desposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Display Account Details\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;


    
    switch(choice){
        case 1 : BA.accountDetails();
                 break;
        case 2 : BA.depositMoney();
                 break;
        case 3 : BA.withdrawMoney();
                 break;
        case 4 : BA.displayAccounDetails();
                 break;
        case 5 : cout << "Exit Program..";
        // default:cout << "Invalid choice!\n";
            
    }

    } while(choice != 5);

 




    return 0;
}