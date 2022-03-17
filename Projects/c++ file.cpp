#include<iostream>
#include<string>
using namespace std; 
class BankAccount{
public:
	void setBalance(int x){
		balance = x;
		cout<<"10000"<<endl;
	}
};
int main()
{
	BankAccount test;
	test.AccountBalance();
	return 0;
} 