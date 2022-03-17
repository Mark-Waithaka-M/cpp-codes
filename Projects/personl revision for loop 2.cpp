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
  for (int i =1; i <= nLoopCount; i++)

		cout << "We've finished " << i
             << "loops" <<endl;
	}
		//wait untill user is ready before terminating program
	//to allow the user to see the program results
	system ("PAUSE");
	return 0;
	}