#include<iostream>
#include<conio.h>
using namespace std;


char served_with_minji, served_with_beef, served_with_matumbo,fullname;
char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
int option; 	

int pilau(){
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|What Would You like it to be served with?  |\n";
cout<<"\t\\t|      1 - Cabbage                        |\n";
cout<<"\t\\t|      2 - Soup                             |\n"; 
cout<<"\t\\t|-------------------------------------------|\n";	
}
		
	
	int main(){
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      stabucks Fast food ordering system   |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
    cout<<"\n";
    cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      1 - Pilau                            |\n";
	cout<<"\t\\t|      2 - Meat                             |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"please Enter your Name: ";

	cout<<"Hello "<<fullname<<"\n\nwhat would you like to order?\n\n";
	cin>>option;
	
	if(option==1){
		pilau();
		return 0;
	}
	
	}

