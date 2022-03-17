#include <cstdio>
#include <cstdlib>
#include <iostream>
int main (int nNumberofArgs, char* pszArgs[])
{
//input the loop count
	int nLoopCount;
	cout << "Enter loop count: ";
	cin >> nLoopCount;
	//now loop that many times 
	while (nLoopCount > 0)
	{
		nLoopCount =nLoopCount - 1;
		cout << "only" << nLoopCount
              <<"loops to go" << endl;
	}
              
	//wait untill user is ready before terminating program
	//to allow the user to see the program results
	system ("PAUSE");
	return 0;	
}
