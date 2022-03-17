#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char served_with_beef, chips_masala,bhajia,chips_kuku;
char Chips[]={served_with_beef, chips_masala,bhajia,chips_kuku};
int Chips_option;
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
cout<<"\t\\t|      8 - Chips                            |\n";
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"please Enter your Name: ";

	cout<<"Hello\n\nwhat would you like to order?\n\n";
	cin>>option;

				
		
	
if(option == 8)
	{
		   cout<<"\nl)served with_beef  p150.00\n"<<"2) chips_masala p150.00\n"<<"3) bhajia 120.00\n"<<"4) chips_kuku 200.00\n";
		 cout<<"\nchoose type of Chips please:";
         cin>>Chips_option;	
			
        
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
		switch(Chips_option)
		{
            case 1 : Chips_option = 1;
            price = 150.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : Chips_option = 1; 
		    price  = 150.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chips_masala;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : Chips_option = 3;
			price = 120.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<bhajia;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	
            case 4 : Chips_option = 4;
            price = 200.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chips_kuku;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
	}	
				
		cout<< "Would you like to order anything else? Y / N:";
        
			return 0;
		   }		