#include<iostream>
#include<string>
using namespace std;

class BankAccount{
	public:
		void setBalance(int deposit, int withdraw){
			deposit = x;
			withdraw = y;
		}
		int getBalance(){
			return balance;
		}
	private:
        int balance;	
};

int main(){
	BankAccount myObj;
	myObj.setBalance("10000");
	cout<<myObj.getBalance();
	return 0;
}