#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char served_with_beans,served_with_minji, served_with_beef, served_with_matumbo;
char White_rice[]={served_with_beans,served_with_minji, served_with_beef, served_with_matumbo};
int White_rice_option;
int option; 	
int qty;
double price;



int main() 
{
	 
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|     stabucks Fast food ordering system    |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";     
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      Fast food menu                       |\n"; 
    cout<<"\t\\t|      1 - HotDrinks                        |\n";
    cout<<"\t\\t|      2 - pilau                            |\n";
    cout<<"\t\\t|      3 - Snacks                           |\n";
    cout<<"\t\\t|      4 - chapo                            |\n";
    cout<<"\t\\t|      5 - Ugali                            |\n";
    cout<<"\t\\t|      6 - White_rice                       |\n";
    cout<<"\t\\t|      7 - Mukimo                           |\n";
    cout<<"\t\\t|-------------------------------------------|\n";
    cout<<"please Enter your Name: ";
    
	cout<<"Hello\n\nwhat would you like to order?\n\n";
	cin>>option;

				





if(option == 6)
{
 cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p120.00\n"<<"3) served_with_matumbo 80.00\n"<<"4) served_with_beans p70.00\n";
		cout<<"\nchoose type of White_rice please:"; 	
			cout<<"\nl) "<<White_rice<<"\n";
		cout<<"\nplease Enter which White_rice type you would you like to have?:";
		cin>>White_rice_option;
		
        
        
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch (White_rice_option)
			{
            case 1 : White_rice_option = 1; 
            price = 90.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : White_rice_option = 2;
		    price = 120.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : White_rice_option = 3;
			price = 80.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	
			case 4 : White_rice_option = 4;
			price = 70.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beans;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break; 
        
		     	}
			
			
			
			}	
	
	
			return 0;
		   }		