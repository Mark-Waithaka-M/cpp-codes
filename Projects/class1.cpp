#include<iostream>
#include<string>
using namespace std;
class BankAccount{
public:
	void sayHi(){
		cout<<"Hi"<<endl;
	}	
};

int main()
{
BankAccount test;
test.sayHi();
return 0;	
}