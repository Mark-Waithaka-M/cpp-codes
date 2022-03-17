#include<iostream>
#include<conio.h>
using namespace std;



char served_with_minji, served_with_beef, served_with_matumbo,fullname;
char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
char pilau_option;
char pilau;
int option; 	
int qty;
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
cout<<"\t\\t|      1 - HotDrinks                        |\n";
cout<<"\t\\t|      2 - pilau                            |\n";
cout<<"\t\\t|      3 - Snacks                           |\n";
cout<<"\t\\t|      4 - chapo                            |\n";
cout<<"\t\\t|      5 - whiteRice                        |\n";
cout<<"\t\\t|      6 - Mukimo                           |\n";
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"please Enter your Name: ";

	cout<<"Hello "<<fullname<<"\n\nwhat would you like to order?\n\n";
	cin>>option;
	
        if(option==2)
		{
			cout<<"\nl) "<<Pilau<<"\n";
		
		{
        cout<<"\nl)served_with_minji  p100.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 120.00\n";
        cout<<"\nchoose which Pilau type you would you like to have?:";
        cin>>Pilau;
        if(option>=1 && option<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(qty)
  
        {
         case 1: option =100.0*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2: option =130.0*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3: option = 120.0*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
        
        
			}	
		cout <<"Would you like to order anything else? Y / N:";
        cin>>goto option;
        if(goto option =='Y' ||goto option =='Y')
		{
			goto option;
		
			
			return 0;
		   	
		}
	 }	
   }  

