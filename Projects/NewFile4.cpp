#include <iostream>
#include <string>
using namespace std;
class BankAccount{
	private:
int balance;
	public:
	void withdraw(int a ){
	if (a> balance){
	cout<<"you have insufficient funds\n";
		}
else {
	balance = balance - a;
	}
	}
	void deposit(int a){
	if (a > 300000){
	cout<<"TRANSFER AMOUNT EXEEDED\n";
	}
else{
	balance = balance + a ;	
	}
	}
	int getbalance(){
	return balance;	
	}
		};
int main(){
	BankAccount action;
	int amount;
	cout<<"WELCOME TO MARK FINANCE\n"<<endl;
	cout<<"ENTER AMOUNT YOU WISH TO TRANSACT:";
	cin >> amount;
	cout<<"enter your choice"<<endl;
	cout<<"1.deposit\n2.withdraw"<<endl;
	int choice;
	cin>>choice;
	switch (choice){
		case 1:
			action.deposit(amount);
			break;
		case 2:
			action.deposit(amount);
			break;
		defult:
		cout<<"Wrong choice"<<endl;
		system("cls");
		main();
	}
		cout<<"YOUR CURRENT BALANCE:"<< action.getbalance();
		return 0;
	}
	