#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
	//input the fifst argument...
	int nArg1;
	cout << "Enter arg1: ";
	cin >>nArg1;
	
	//...and the second
	int nArg2;
	cout << "Enter arg2: ";
	cin >>nArg2;
	//now decide what to do:
	if (nArg1 > nArg2)
	{
		cout<< "Argument 1 is greater than Argument 2"
		<< endl;
		
	}
	else
	{
	{
		cout<< "Argument 1 is not greater than Argument 2"
		<< endl;
	}
	//wait untill user is ready before terminating program
	//to allow the user to see the program results
	system ("PAUSE");
	return 0;
	}
		
	
	
	
	return 0;
}