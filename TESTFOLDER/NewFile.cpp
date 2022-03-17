#include<iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include<fstream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int meal_option,qty,no_of_meals,option;
double p,price;

//function prototype
void hotdrink();
void pilau();
void snacks();
void chapo();
void whiteRice();
void mukimo();
int main();
int save();

ofstream stock;
	void hotDrink(){
		
		char tea;
		char coffe ;
		char porridge;
		char milk;
		char Hot_drinks[] ={tea, coffe, porridge, milk};
		int meal_option;
		 	
		int qty;
		double price;
		int no_of_meals,option;
		double p;
		
		cout<<"\nl)tea  p20.00\n"<<"2) milk p50.00\n"<<"3) coffee 30.00\n"<<"4) porridge 20.00\n";  
		cout<<"\nl) "<<Hot_drinks<<"\n";
		cout<<"\nchoose type of Hot_drinks please:";
		cin>>meal_option;
		
     if(qty>=1 &&qty<=20){
        cout<<"\nplease Enter Quantity:"<<qty<<endl;
		}	
        	
        	else{
			cout<<"\nPlease order another ype of meal:"<<qty<<endl;	
			}
        	
       
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
		 
        switch(meal_option)
        {
		case 1: meal_option = 1;
		p = 20.00;
        price = p*qty;	
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<tea;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
        case 2:meal_option = 2;
		p = 50.00; 
        price = p*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<milk;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	   case 3:meal_option = 3;
	    p = 30.00;
	    price = p*qty;
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<coffe;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	    case 4:meal_option = 4;
		p = 20.00; 
	    price = p*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<porridge;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
		}
		
	stock<<"\tQUANTITY: "<<qty;	
		stock<<"\tBILL:"<<price;
	}
	
	
	void pilau(){
		
				
				
		char served_with_minji, served_with_beef, served_with_matumbo;
		char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
		char pilau;

		int meal_option,qty,no_of_meals,option;
		double p,price;

		
			
	        cout<<"\nl)served_with_minji  p100.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 120.00\n";
	        cout<<"\nchoose which Pilau type you would you like to have?:";
	        cin>>meal_option;
	        
    	
	        cout<<"\nPlease Enter Quantity: ";
	        cin>>qty;
	           
        switch(meal_option){
         case 1: meal_option = 1;
         p = 100.00;
         	 price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2: meal_option = 2;
		    p = 130.00;
		    price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3: meal_option = 3;
			p = 120.00;
			price=p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
	     	   }
     stock<<"\tQUANTITY: "<<qty; 
	 	stock<<"\tBILL:"<<price;  	
	}


void snacks(){
char mandazi, samosa, sausage, smokie, pancake, kebab, chapo;
char Snacks[]={mandazi, samosa, sausage, smokie, pancake, kebab, chapo};
int meal_option,qty,no_of_meals,option;
double p,price;
	
		cout<<"\nl)mandazi  p10.00\n"<<"2) samosa p30.00\n"<<"3) sausage p40.00\n"<<"4) smokie 30.00\n"<<"5) pancake 30.00\n"<<"6) kebab 60.00\n"<<"7) chapo 20.00\n";
		cout<<"\nplease Enter which type of Snacks you would you like to have?:";
		cin>>meal_option;
		
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
        switch(meal_option)
	    {
            case 1:meal_option = 1;
            p = 10.00;
			price= p*qty;  
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<mandazi;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 :meal_option = 2;
		    p = 30.00;
			price= p*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<samosa;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : meal_option = 3;
			p = 40.00;
			price = p*qty;             
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<sausage;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
		    
			case 4: meal_option = 4; 
			p = 30.00;
			price = p*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<smokie;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 5: meal_option = 5;
			p = 30.00;
			price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<pancake;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 6: meal_option = 6;
			p = 60.00;
			price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<kebab;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 7: meal_option = 7;
			p = 20.00;
			price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chapo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
        stock<<"\tQUANTITY: "<<qty;
       	stock<<"\tBILL:"<<price; 
       }	
void chapo(){
char served_with_minji, served_with_beef, served_with_matumbo; 
char Chapo[]={served_with_minji, served_with_beef, served_with_matumbo};
int meal_option,qty,no_of_meals,option;
double p,price;

		 cout <<"\nl)served_with_minji  p70.00\n"<<"2) served_with_beef p100.00\n"<<"3) served_with_matumbo 70.00\n";
        cout<<"\nchoose type of Chapo please:"; 
		cin>>meal_option;
	

cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		
        switch(meal_option)
        {
            case 1 : meal_option = 1;
            p = 70.00;
            price = p*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : meal_option = 2;
		    p = 100.00;
		     price = p*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 :  meal_option = 3;
			p = 70.00;
			price = p*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
             }
        stock<<"\tQUANTITY: "<<qty;
    	stock<<"\tBILL:"<<price;
			}   	
			
void whiteRice(){
char served_with_beans,served_with_minji, served_with_beef, served_with_matumbo;
char White_rice[]={served_with_beans,served_with_minji, served_with_beef, served_with_matumbo};
int meal_option,qty,no_of_meals,option;
double p,price;
cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p120.00\n"<<"3) served_with_matumbo 80.00\n"<<"4) served_with_beans p70.00\n";
		cout<<"\nchoose type of White_rice please:"; 	
		cin>>meal_option;
		
        
        
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch (meal_option)
			{
            case 1 : meal_option = 1; 
            p = 90.00;
            price = p*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : meal_option = 2;
		    p = 120.00;
		    price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : meal_option = 3;
			p = 80.00;
			price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	
			case 4 : meal_option = 4;
			p = 70.00;
			price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beans;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break; 
        
		     	}
			stock<<"\tQUANTITY: "<<qty;
			stock<<"\tBILL:"<<price;
			}	
	
	void mukimo(){
	char served_with_minji, served_with_beef, served_with_matumbo;  
char Mukimo[]={served_with_minji, served_with_beef, served_with_matumbo};

int meal_option,qty,no_of_meals,option;
double p,price;

	
cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 100.00\n";
		cout<<"\nchoose type of Mukimo please:";
        cin>>meal_option; 	
		
        
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        
        if(qty<=20  &&qty>=1)
			cout<<"meal_option available";
			else cout<<"meal_option not available"<<endl;
	
        
         switch(meal_option)
        {
            case 1 : meal_option = 1;
            p = 90.00;
            price = p*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_minji;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 : meal_option = 2;
		    p = 130.00;
		    price = p*qty;	 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 :meal_option = 3;
			p = 100;
			price = p*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
               	}
				stock<<"\tQUANTITY: "<<qty;
		     	stock<<"\tBILL:"<<price;	
	
          }
          
int save(){
ofstream stock;
stock.open("Records.txt", ios_base::app);
stock<<"\n---------------------HOTEL RECORDS ----------------------------\n";
stock<<"NUMBER OF MEALS: "<<no_of_meals;
stock<<"\tORDER: "<<option;
stock<<"\tOPTION: "<<meal_option;
stock<<"\tQUANTITY: "<<qty;
stock<<"\tBILL:"<<price;
stock.close();  	  	 	  
		  
	
}
int main ()
{
//function prototype
void hotdrink();
void pilau();
void snacks();
void chapo();
void whiteRice();
void mukimo();
int main();
int save();

int meal_option,qty,no_of_meals,option;
double p,price;
price = p * qty;
cout<<"\t\\t|-------------------------------------------|\n";
cout<<"\t\\t|      stabucks Fast food orderi system   |\n"; 
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
cout<<"\t\\t|      5 - white_rice                       |\n";
cout<<"\t\\t|      6 - Mukimo                           |\n";
cout<<"\t\\t|-------------------------------------------|\n";

cout<<"\n";
cout<<"";

cout<<"How many meals do you want to order?";
cout<<"\n";
cin>>no_of_meals;

for (int i=0; i<no_of_meals; i++)
		{
		
		
	cout<<"Hello\n\nwhat would you like to order?\n\n";
	cin>>option;

		
		
				
			if(option == 1)
				
					{
						
					 hotDrink();
					
					}
			        
			else if(option==2)
				
			{
				pilau();
			}
			
        else if(option==3)
			
			{
				snacks();
			}
		
		
		 else if(option==4)
			
			{
			chapo();
			save();	
			}
			else if(option==5)
			{
				whiteRice();
			}
			else if(option==6)
			{
			mukimo();	
			}	
          
		}
		
		  ofstream stock;
stock.open("Records.txt", ios_base::app);
stock<<"\n---------------------HOTEL RECORDS ----------------------------\n";
stock<<"NUMBER OF MEALS: "<<no_of_meals;
stock<<"\tORDER: "<<option;
stock<<"\tOPTION: "<<meal_option;
stock<<"\tQUANTITY: "<<qty;
stock<<"\tBILL:"<<price;
stock.close();      
}
		
