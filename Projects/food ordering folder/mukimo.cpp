
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<fstream>
using namespace std;

	void hotDrink(){
		
		char tea, coffe, porridge,  milk;
		char Hot_drinks[] ={tea, coffe, porridge, milk};
		int Hot_drinks_option;	
		string tableNo,type;
        fstream hotDrinkfile;
        int option; 	
        int qty;
        double price, bill;
        
    hotDrinkfile.open("hotDrinkfile.txt",ios::in|ios::out|ios::app);
	if(!hotDrinkfile)
	cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;
		
		cout<<"\nl)tea  p20.00\n"<<"2) milk p50.00\n"<<"3) coffee 30.00\n"<<"4) porridge 20.00\n";  
		cout<<"\nl) "<<Hot_drinks<<"\n";
		cout<<"\nchoose type of Hot_drinks please:";
		cin>>Hot_drinks_option;
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        cout<<"Table No:";
        cin>>tableNo;
        cout<<"TYPE::";
        cin>>type;
        
        cout<<"BILL::";
        cin>>bill;
        hotDrinkfile<<"\t\tTable NO::\t"<<tableNo<<"\n";
        hotDrinkfile<<"\t\tTYPE::\t"<<type<<"\n";
        hotDrinkfile<<"\t\tQUANTITY::\t"<<qty<<"\n";
		hotDrinkfile<<"\t\tBILL::\t"<<bill<<"\n";
		
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
	
	
	void pilau(){
		
				
				
		char served_with_minji, served_with_beef, served_with_matumbo;
		char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
		string tableNo,type;
        fstream pilaufile;
		int pilau_option;
		char pilau;
		int qty;	
		double price, bill;
		
		
		pilaufile.open("pilaufile.open", ios::in|ios::out|ios::app);
		if(!pilaufile)
	     cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;

		
			
	        cout<<"\nl)served_with_minji  p100.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 120.00\n";
	        cout<<"\nchoose which Pilau type you would you like to have?:";
	        cin>>pilau_option;
	        
	        cout<<"\nPlease Enter Quantity: ";
            cin>>qty;
            cout<<"Table No:";
            cin>>tableNo;
            cout<<"TYPE::";
            cin>>type;
            
            cout<<"\nBILL::";
            cin>>bill;
           pilaufile<<"\t\tTable No::\t"<<tableNo<<"\n";
           pilaufile<<"\t\tTYPE::\t"<<type<<"\n";
           pilaufile<<"\t\tQUANTITY::\t"<<qty<<"\n";
           pilaufile<<"\t\tBILL::\t"<<bill<<"\n";
	           
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


void snacks(){
char mandazi, samosa, sausage, smokie, pancake, kebab, chapo;
char Snacks[]={mandazi, samosa, sausage, smokie, pancake, kebab, chapo};
int Snacks_option;
string tableNo,type;
fstream snacksfile;
int option; 	
int qty;
double price, bill;
	snacksfile.open("snacksfile.txt",ios::in|ios::out|ios::app);
	if(!snacksfile)
	cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;
	
		cout<<"\nl)mandazi  p10.00\n"<<"2) samosa p30.00\n"<<"3) sausage p40.00\n"<<"4) smokie 30.00\n"<<"5) pancake 30.00\n"<<"6) kebab 60.00\n"<<"7) chapo 20.00\n";
		cout<<"\nplease Enter which type of Snacks you would you like to have?:";
		cin>>Snacks_option;
		
        
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        cout<<"Table No:";
        cin>>tableNo;
        cout<<"TYPE::";
        cin>>type;
        
        cout<<"BILL::";
        cin>>bill;
        snacksfile<<"\t\tTable No::\t"<<tableNo<<"\n";
        snacksfile<<"\t\tTYPE::\t"<<type<<"\n";
        snacksfile<<"\t\tQUANTITY::\t"<<qty<<"\n";
        snacksfile<<"\t\tBILL::\t"<<bill<<"\n";
		
        switch(Snacks_option)
	    {
            case 1:Snacks_option = 1;
			price= 10.00*qty;  
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<mandazi;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
		    case 2 :Snacks_option = 2;
			price= 30.00*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<samosa;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 : Snacks_option = 3; 
			price = 40.00*qty;             
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<sausage;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
		    
			case 4: Snacks_option = 4; 
			price = 30.00*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<smokie;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 5: Snacks_option = 5;
			price = 30.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<pancake;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 6: Snacks_option = 6;
			price = 60.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<kebab;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            
			case 7: Snacks_option = 7;
			price = 20.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chapo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
        
        
		
		
		
       }	
void chapo(){
char served_with_minji, served_with_beef, served_with_matumbo; 
char Chapo[]={served_with_minji, served_with_beef, served_with_matumbo};
int Chapo_option;
string tableNo,type;
fstream chapofile;
int option; 	
int qty;
double price, bill;


chapofile.open("chapofile.txt",ios::in|ios::out|ios::app);
	if(!chapofile)
	cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;
		

		 cout <<"\nl)served_with_minji  p70.00\n"<<"2) served_with_beef p100.00\n"<<"3) served_with_matumbo 80.00\n";
        cout<<"\nchoose type of Chapo please:"; 
		cin>>Chapo_option;
	

        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        cout<<"Table No:";
        cin>>tableNo;
        cout<<"TYPE::";
        cin>>type;
        
        cout<<"BILL::";
        cin>>bill;
        chapofile<<"\t\tTable No::\t"<<tableNo<<"\n";
        chapofile<<"\t\tTYPE::\t"<<type<<"\n";
        chapofile<<"\t\tQUANTITY::\t"<<qty<<"\n";
        chapofile<<"\t\tBILL::\t"<<bill<<"\n";
		
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
		     price = 90.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_beef;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			
			case 3 :  Chapo_option = 3;
			price = 80.00*qty;	
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served_with_matumbo;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            cout<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
             }
        
			}   	
			
void whiteRice(){
char served_with_beans,served_with_minji, served_with_beef, served_with_matumbo;
char White_rice[]={served_with_beans,served_with_minji, served_with_beef, served_with_matumbo};
int White_rice_option;
string tableNo,type;
fstream whiteRicefile;
int option; 	
int qty;
double price, bill;

whiteRicefile.open("whiteRicefile.txt",ios::in|ios::out|ios::app);
	if(!whiteRicefile)
	cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;


cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p120.00\n"<<"3) served_with_matumbo 80.00\n"<<"4) served_with_beans p70.00\n";
		cout<<"\nchoose type of White_rice please:"; 	
		cin>>White_rice_option;
		
        
         
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        cout<<"Table No:";
        cin>>tableNo;
        cout<<"TYPE:";
        cin>>type;
        
        cout<<"BILL:";
        cin>>bill;
        whiteRicefile<<"\t\tTableNo::\t"<<tableNo<<"\n";
        whiteRicefile<<"\t\tTYPE::\t"<<type<<"\n";
        whiteRicefile<<"\t\tQUANTITY::\t"<<qty<<"\n";
        whiteRicefile<<"\t\tBILL::\t"<<bill<<"\n";
			
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
	
	void mukimo(){
	char served_with_minji, served_with_beef, served_with_matumbo;  
    char Mukimo[]={served_with_minji, served_with_beef, served_with_matumbo};

int Mukimo_option;
int option; 
string tableNo, type;
fstream mukimofile;	
int qty;
double price, bill;


mukimofile.open("mukimofile.open", ios::in|ios::out|ios::app);
if(!mukimofile)
	cout<<"failed";
		else cout<<"\t\t\t**STOCKFILE READY TO RECEIVEs**\t\t\t"<<endl;


	
cout<<"\nl)served_with_minji  p90.00\n"<<"2) served_with_beef p130.00\n"<<"3) served_with_matumbo 100.00\n";
		cout<<"\nchoose type of Mukimo please:";
        cin>>Mukimo_option; 	
	if (qty<= 20)	
    cout<<"\nPlease Enter Quantity: ";
else cout<<"\nMukimo_option is over:";
        cin>>qty;
        cout<<"Table No:";
        cin>>tableNo;
        cout<<"TYPE::";
        cin>>type;
        
        
        cout<<"BILL::";
        cin>>bill;
        mukimofile<<"\t\tTable No::\t"<<tableNo<<"\n";
        mukimofile<<"\t\tTYPE::\t"<<type<<"\n";
        mukimofile<<"\t\tQUANTITY::\t"<<qty<<"\n";
        mukimofile<<"\t\tBILL::\t"<<bill<<"\n";
        
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
				
				
				
          }

int main ()
{

	int no_of_meals;
	int option,mainoption;
	fstream hotDrinkfile,pilaufiles,snacksfile,mukimofile,chapofile;
	int total_bill;
	
	menu:
		system("CLS");
		
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
cout<<"\t\\t|      5 - white_rice                       |\n";
cout<<"\t\\t|      6 - Mukimo                           |\n";
cout<<"\t\\t|-------------------------------------------|\n";

cout<<"\n";


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
          
          cout<<"\t\t\tPRESS ONE TO GO TO MAIN MENU:\t\t\t"<<endl;
            cin>>mainoption;
            if(mainoption==1)
            goto menu;
		return 0;
		}
	
