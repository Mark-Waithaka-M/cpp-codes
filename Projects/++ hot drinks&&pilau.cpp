#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


char tea, coffe, porridge, milk;
char Hot_drinks[] ={tea, coffe, porridge, milk};
int Hot_drinks_option;
int option; 	
int qty;
double price;



int main ()
{
	Start:
void menu();	
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

				
		
	
if(option == 1)
	{    
	beginning:
	cout<<"\nl)tea  p20.00\n"<<"2) milk p50.00\n"<<"3) coffee 30.00\n"<<"4) porridge 20.00\n";  
		cout<<"\nl) "<<Hot_drinks<<"\n";
		cout<<"\nchoose type of Hot_drinks please:";
		cin>>Hot_drinks_option;
		
   
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
        switch(Hot_drinks_option)
        
	    
	    {
		case 1: Hot_drinks_option = 1;
        price = 20.00*qty;	
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<tea;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
        case 2:Hot_drinks_option = 2; 
        price = 50.00*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<milk;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	   case 3:Hot_drinks_option = 3;
	    price = 30.00*qty;
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<coffe;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	    case 4:Hot_drinks_option = 4; 
	    price = 20.00*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<porridge;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
		}
		
		
		
        }
        cout<< "Would you like to order anything else? Y / N:";
	cin>> goto begginning;
        if(goto beginning=='Y' ||goto beginning=='Y')
		{
			else goto start;
			//return0;
			return menu;
		   
		
		

		}
		
		
		
		
	else if(option==2)
		{

				
		
			
		
			
	        cout<<"\nl)served_with_minji  p100.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 120.00\n";
	        cout<<"\nchoose which Pilau type you would you like to have?:";
	        cin>>pilau_option;
	        
    	
	        cout<<"\nPlease Enter Quantity: ";
	        cin>>qty;
	           
        switch(pilau_option){
         case 1: pilau_option = 1;
         	 price = 100.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2: pilau_option = 2;
		    price =130.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3: pilau_option = 3;
			price=120.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
	     	   }
        
			
			
	    	}
		
		cout <<"Would you like to order anything else? Y / N:";
        

		
		
			
			return 0;
		   	
}

	  
	
    

	
	