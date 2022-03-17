#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char served_with_minji, served_with_beef, served_with_matumbo; 
char Chapo[]={served_with_minji, served_with_beef, served_with_matumbo};
int Chapo_option;
int option; 	
int qty;
double price;



int main ()
{
	
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|      stabucks Fast food ordering system   |\n"; 
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|What Would You like it to be served with?  |\n";
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|                                           |\n"; 
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|      1 - Hot_drinks                        |\n";
cout<<"\t\\t|      2 - pilau                            |\n";
cout<<"\t\\t|      3 - Snacks                           |\n";
cout<<"\t\\t|      4 - chapo                            |\n";
cout<<"\t\\t|      5 - whiteRice                        |\n";
cout<<"\t\\t|      6 - Mukimo                           |\n";
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"please Enter your Name: ";

	cout<<"Hello\n\nwhat would you like to order?\n\n";
	cin>>option;

				
		
	

if(option == 4)
{
		 cout <<"\nl)served_with_minji  p70.00\n"<<"2) served_with_beef p100.00\n"<<"3) served_with_matumbo 70.00\n";
        cout<<"\nchoose type of Chapo please:"; 
		cin>>Chapo_option;
	
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
        switch(Chapo_option)
        {
            case 1 : Chapo_option = 1;
            price = 70.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : Chapo_option = 2;
		     price = 100.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 :  Chapo_option = 3;
			price = 70.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
             }
        
			}	
		
			return 0;
		   }		