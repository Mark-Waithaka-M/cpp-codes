#include<iostream>
using namespace std;
int main()

{
int x;	
int myArr[5];
for(x=0;x<5;x++)
{
	myArr[x]=42;
	
	cout<<x<<":"<<myArr[x]<<endl;
}
return 0;
}