#include<iostream>
#include<conio.h>
using namespace std;


char served_with_minji, served_with_beef, served_with_matumbo,fullname;
char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
char pilau_option;
int option; 	
int qty;
int pilau(){
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|What Would You like it to be served with?  |\n";
cout<<"\t\\t|      1 - pilau                            |\n";    
cout<<"\t\\t|-------------------------------------------|\n";	
return option;
}
		
	
	int main(){
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      stabucks Fast food ordering system   |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
    cout<<"\n";
    cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      1 - seved_with_minji                 |\n";
	cout<<"\t\\t|      2 - served_with_beef                 |\n";
	cout<<"\t\\t|      3 - served_with_matumbo              |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"please Enter your Name: ";

	cout<<"Hello "<<fullname<<"\n\nwhat would you like to order?\n\n";
	cin>>option;
	
        if(option==3)
		{
			cout<<"\nl) "<<Pilau<<"\n";
		cout<<"\nplease Enter which Pilau type you would you like to have?:";
		cin>>Pilau;
		if(option>=1 && option<=3)
		{
        cout<<"\nl)served_with_minji  p100.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 120.00\n";
        cout<<"\nchoose type of pilau please:";
        cin>>Pilau;
        if(option>=1 &&option<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(qty)
        {
			case 1: option = 100.00*qty;
			break;
		
		case 2: option = 130.00*qty;
		break;
		
		case 3: option = 120.00*qty;
		break;
	
	    
	
        }	
        cout <<"\n1 "<<Pilau<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which Pilau_option you would like to have?:";
		cin>>Pilau;
		if(option>=1 && option<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch (qty)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
        
        
			}	
		cout <<"Would you like to order anything else? Y / N:";
        
			//return0;
		   }	
		}
	}
	
		
	}

