#include <iostream>
using namespace std;
char ugali, chapo, mukimo;
int main()

{
	char Menu[] ={ugali, chapo, mukimo};
	if(Menu[0] ){
		cout<<"served with pork"<<endl;
		cin>>Menu;
	}
	else if (Menu [1]){
		cout<<"servd with minji"<<endl;
		cin>>Menu;
	}
	else if(Menu [3]){
		cout<<"served with beef"<<endl; 
	}
	else{
		cout<<"We don't offer that type of meal"<<endl;
	}
	
	return 0;
}
