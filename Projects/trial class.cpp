#include<iostream>
#include<conio.h>
using namespace std;

char tea, coffe, porridge, milk,mandazi, samosa, sausage, smokie, pancake, kebab, chapo, served_with_vegetables;
char served_with_minji, served_with_beef, served_with_matumbo,served_with_beans,chips_masala,bhajia,chips_kuku;
   
	char Hot_drinks[] ={tea, coffe, porridge, milk};
	char Snacks[]={mandazi, samosa, sausage, smokie, pancake, kebab, chapo};
	char Pilau[]={served_with_minji, served_with_beef, served_with_matumbo};
	char Chapo[]={served_with_minji, served_with_beef, served_with_matumbo};
	char Ugali[]={served_with_vegetables, served_with_beef, served_with_matumbo};
	char White_rice[]={served_with_beans,served_with_minji, served_with_beef, served_with_matumbo};
	char Mukimo[]={served_with_minji, served_with_beef, served_with_matumbo};
	char Chips[]={served_with_beef, chips_masala,bhajia,chips_kuku}; 
    	
		char Hot_drinks_option;
    	char Snacks_option;
    	char Chapo_option;
 		char Ugali_option;
 		char White_rice_option;
 	    char Mukimo_option;
		char Chips_option;
		char pilau_option;
        char pilau;
        int option; 	
        int qty;
     	double price;	
	int main(){
		start:
		beginning:
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|     stabucks Fast food ordering system    |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";     
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      Fast food menu                       |\n"; 
    cout<<"\t\\t|      1 - HotDrinks                        |\n";
    cout<<"\t\\t|      2 - pilau                            |\n";
    cout<<"\t\\t|      3 - Snacks                           |\n";
    cout<<"\t\\t|      4 - chapo                            |\n";
    cout<<"\t\\t|      5 - whiteRice                        |\n";
    cout<<"\t\\t|      6 - Mukimo                           |\n";
    cout<<"\t\\t|-------------------------------------------|\n";


    
   
	
	cout<<"\n\nwhat would you like to order?\n\n"; 
    cin>>option;
    if(option == 1)
	{    cout<<"\nl)tea  p20.00\n"<<"2) milk p50.00\n"<<"3) coffee 30.00\n"<<"4) porridge 20.00\n";  
		cout<<"\nl) "<<Hot_drinks<<"\n";
		cout<<"\nchoose type of Hot_drinks please:";
		cin>>Hot_drinks;
		
   
        if(qty>=1 &&qty<=20){
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		}
        switch(qty)
        
	    
	    {
		case 1: option = 1;
        price = 20.00*qty;	
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<tea;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
        case 2:option = 2; 
        price = 50.00*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<milk;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	   case 3:option = 3;
	    price = 30.00*qty;
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<coffe;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	    case 4:option = 4; 
	    price = 20.00*qty; 
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<porridge;
        cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
        cout<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
    
        }
        cout<< "Would you like to order anything else? Y / N:";
	
       if(goto beginning=='Y' ||goto beginning=='Y')
		{
			goto start;
			//return0;
		   }
		
		

		}
	}
	
	
		else if(option==2)
		{
		cout<<"\nl)mandazi  p10.00\n"<<"2) samosa p30.00\n"<<"3) sausage p40.00\n"<<"4) smokie 30.00\n";
		<<"5) pancake 30.00\n"<<"6) kebab 60.00\n"<<"7) chapo 20.00\n"
		cout<<"\nl) "<<Snacks<<"\n";
		cout<<"\nplease Enter which type of Snacks you would you like to have?:";
		cin>>Snacks_option;
		
        if(qty>=1 &&qty<=20){
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
		}
        switch(Snacks_option)
	    {
            case 1:option = 1
			price= 10.00*qty;  
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<mandazi 1;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:option = 2;
			price= 30.00*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<samosa 2;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3: option = 3; 
			price = 40.00*qty;             
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<sausage 3;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
		    }
			case 4: option = 4; 
			price = 30.00*qty; 
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<smokie 4;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 5: option = 5;
			price = 30.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<pancake 5;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 6: option = 6;
			price = 30.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<kebab 6;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 7: option = 7;
			price = 20.00*qty;
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chapo 7;
            cout<<"\nyour Total Bill is \nP"<<price<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
        
        
			}	
		cout "<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(goto beginning=='Y' ||goto beginning=='Y')
		{
			goto start;
			//return0;
		   }	
		}
	}	
		