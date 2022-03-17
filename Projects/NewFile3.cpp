#include<iostream>
using namespace std;
class BankAccount{
	public:
		int checkBalance(int a){
			cout<<"Balance"<<endl;
			int tot = 2 * a;
			cout << "tot" << tot;
			return tot;
		}
};
int main(){
	BankAccount test;
	test.checkBalance(4);
	
	return 0;
}