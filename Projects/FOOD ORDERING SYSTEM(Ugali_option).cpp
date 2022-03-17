#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char served_with_vegetables, served_with_beef, served_with_matumbo; 
char Ugali[]={served_with_vegetables, served_with_beef, served_with_matumbo};
int Ugali_option;
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

				
		
	

if(option == 5)
{
	{
		  cout <<"\nl)served_with_vegetables  p50.00\n"<<"2) served_with_beef p100.00\n"<<"3) served-with_matumbo 80.00\n";
        cout<<"\nchoose type of Ugali please:";	
		 cin>>Ugali_option;
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
        switch(Ugali_option)
        {
            case 1 :Ugali_option = 1;
			price = 50.00*qty;  
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_vegetables;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 :Ugali_option = 2; 
			 price = 100.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : Ugali_option = 3;
			 price = 80.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
		}
        
			}	
	
			return 0;
		   }		
}
	