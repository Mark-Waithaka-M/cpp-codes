#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
	//input the loop count
	int nLoopCount;
	cout << "Enter loop count: ";
	cin >>nLoopCount;
	
	//cout  up to the loop count limit
	for (;nLoopCount > 0;)
	{
		nLoopCount = nLoopCount - 1;
		cout << "only " << nLoopCount
             << "loops to go" <<endl;
	}
		//wait untill user is ready before terminating program
	//to allow the user to see the program results
	system ("PAUSE");
	return 0;
	}