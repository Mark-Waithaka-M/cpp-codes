#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char served_with_minji, served_with_beef, served_with_matumbo;  
char Mukimo[]={served_with_minji, served_with_beef, served_with_matumbo};

int Mukimo_option;
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

				
		
	
if(option == 7)
{
 cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 100.00\n";
		cout<<"\nchoose type of Mukimo please:";
        cin>>Mukimo_option; 	
		
        
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Mukimo_option)
        {
            case 1 : Mukimo_option = 1;
            price = 90.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : Mukimo_option = 2;
		    price = 130.00*qty;	 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 :Mukimo_option = 3;
			price = 100.00*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
				
		cout<< "Would you like to order anything else? Y / N:";
        
			return 0;
		   }		
}