#include<iostream>
#include<conio.h>
{
	char Hot drinks[] ={tea, coffe, porridge, milk};
	char Snacks[]={mandazi, samosa, sausage, smokie, pancake, kebab, chapo};
	char Pilau[]={served with minji, served with beef, served with matumbo};
	char Chapo[]={served with minji, served with beef, served with matumbo};
	char Ugali[]={served with vegetables, served with beef, served with matumbo};
	char White Rice[]={served with beans,served with minji, served with beef, served with matumbo};
	char Mukimo[]={served with minji, served with beef, served with matumbo};
	char Chips[]={served with beef, chips masala,bhajia,chips kuku}; 
	starting:system("cls");
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      stabucks Fast food ordering system   |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"please Enter your Name: ";
	cin.getline(fullname ,20);
	cout<<"Hello "<<fullname<<"\n\nwhat would you like to order?\n\n"; 	
}
using namespace std;
int main()
{
	cout<<"\t\\t|-------------------------------------------|\n";
	cout<<"\t\\t|      Fast food menu6=[                    |\n"; 
    cout<<"\t\\t|-------------------------------------------|\n";
    
    
    if(option=1)
	{
		cout<<"\nl) "<<Hot drinks<<"\n";
		cout<<"\nplease Enter which type of hot drink you would you like to have?:";
		cin>>Hot drink;
		if(Hot drink>=1 && Hot drink<=6)
		{
        cout<<"\nl)tea  p20.00\n"<<"2) milk p50.00\n"<<"3) coffee 30.00\n"<<"4) porridge 20.00\n"
        cout<<"\nchoose type of Hot drinks please:";
        cin>>;Hot drinks;
        if(Hot drinks>=1 &&Hot drinks<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Hot drinks)
        {
			case 1: option = 20.00*qty;
			break;
		
		case 1: option = 50.00*qty;
		break;
		
		case 2: option = 30.00*qty;
		break;
	
	    case 3: option = 20.00*qty;
		break;
	
	
		    }
		system("cls");
	    switch (Hot drinks)
	    {
		case 1:
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<tea;
        cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
        couy<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
        case 2:
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<milk;
        cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
        couy<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	   case 3:
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<coffe;
        cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
        couy<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
	    case 4:
        cout<<"\t\t\t------your order------\n";
        cout<<""<<qty<<" "<<porridge;
        cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
        couy<<"\nThank you for ordering from Stabucks Fast Food\n";
        break;
    
        }
        cout<<"Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto beginning;
			//return0;
		   }
		
		

		}
	}
	
	
		else if(option==2)
		{
		
		cout<<"\nl) "<<Snacks<<"\n";
		cout<<"\nplease Enter which type of Snacks you would you like to have?:";
		cin>>Snacks;
		if(Hot Snacks>=1 && Snacks<=7)
		{
        cout<<"\nl)mandazi  p10.00\n"<<"2) samosa p30.00\n"<<"3) sausage p40.00\n"<<"4) smokie 30.00\n";
		cout<<"5) pancake 30.00\n"<<"6) kebab 60.00\n"<<"7) chapo 20.00\n"
        cout<<\nchoose type of Snacks please:";
        cin>>;Snacks;
        if(Snacks>=1 &&Snacks<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Snacks)
        {
        case 1: option = 10.00*qty;
			break;
		
		case 2: option = 30.00*qty;
		break;
		
		case 3: option = 40.00*qty;
		break;
	
	    case 4: option = 30.00*qty;
		break;
	
	    case 5: option = 30.00*qty;
		break;
	
        case 6: option = 60.00*qty;
		break;
	
        case 7: option = 20.00*qty;
		break;
	
	     }
		system("cls");
	    switch (Snacks)
	    {	
        cout<<\n1 "<<Snacks<<" p*qty"<<"\n";	
			cout<<"\nwhich Snack would you like to have?:";
		cin>>Snackoption;
		if(Snackopion>=1 && snackoption<=7)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;snack (snackoption1)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<mandazi 1;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<samosa 2;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<sausage 3;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
		    }
			case 4:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<smokie 4;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 5:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<pancake 5;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 6:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<kebab 6;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
			case 7:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chapo 7;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
            }
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		
else if(option==3)
		{
			cout<<"\nl) "<<Pilau<<"\n";
		cout<<"\nplease Enter which Pilau type you would you like to have?:";
		cin>>Pilau;
		if(Pilau>=1 && Pilau<=3)
		{
        cout<<"\nl)served with minji  p100.00\n"<<"2) served with beef p130.00\n"<<"3) served with matumbo 120.00\n" porridge 20.00\n"
        cout<<"\nchoose type of pilau please:";
        cin>>;Pilau;
        if(Pilau>=1 &&Pilau<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Pilau)
        {
			case 1: option = 100.00*qty;
			break;
		
		case 1: option = 130.00*qty;
		break;
		
		case 2: option = 120.00*qty;
		break;
	
	    
	
        }	
        cout<<\n1 "<<Pilau<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which Pilau option you would like to have?:";
		cin>>Pilau;
		if(Pilauopion>=1 && Pilauoption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (Pilau)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}
	else if(option==4)
		{
			cout<<"\nl) "<<Ugali<<"\n";
		cout<<"\nplease Enter which Ugali type you would you like to have?:";
		cin>>Ugali;
		if(Ugali>=1 && Ugali<=3)
		{
        cout<<"\nl)served with vegetables  p50.00\n"<<"2) served with beef p100.00\n"<<"3) served with matumbo 80.00\n" porridge 20.00\n"
        cout<<"\nchoose type of Ugali please:";
        cin>>;Ugali;
        if(Ugali>=1 &&Ugali<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Chapo)
        {
			case 1: option = 50.00*qty;
			break;
		
		case 1: option = 100.00*qty;
		break;
		
		case 2: option = 80.00*qty;
		break;
	
	    
	
        }	
        cout<<\n1 "<<Ugali<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which Ugali option you would like to have?:";
		cin>>Ugalioption;
		if(Ugaliopion>=1 && Ugalioption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (Ugali)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with vegetables;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		
		
	  else if(option==5)
		{
			cout<<"\nl) "<<Chapo<<"\n";
		cout<<"\nplease Enter which Chapo type you would you like to have?:";
		cin>>Chapo;
		if(Chapo>=1 && Chapo<=3)
		{
        cout<<"\nl)served with minji  p70.00\n"<<"2) served with beef p100.00\n"<<"3) served with matumbo 70.00\n" porridge 20.00\n"
        cout<<"\nchoose type of Chapo please:";
        cin>>;Chapo;
        if(Chapo>=1 &&Chapo<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Chapo)
        {
			case 1: option = 70.00*qty;
			break;
		
		case 1: option = 100.00*qty;
		break;
		
		case 2: option = 70.00*qty;
		break;
	
	    
	
        }	
        cout<<\n1 "<<Chapo<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which chapo option you would like to have?:";
		cin>>Chapooption;
		if(Chapoopion>=1 && Chapooption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (Chapo)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		
			
	  else if(option==6)
		{
			cout<<"\nl) "<<White Rice<<"\n";
		cout<<"\nplease Enter which White Rice type you would you like to have?:";
		cin>>White Rice;
		if(White Rice>=1 && White Rice<=4)
		{
        cout<<"\nl)served with minji  p90.00\n"<<"2) served with beef p120.00\n"<<"3) served with matumbo 80.00\n" porridge 20.00\n"
        <<"4) served with beans p70.00
		cout<<"\nchoose type of White Rice please:";
        cin>>;White Rice;
        if(White Rice>=1 &&White Rice<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(White Rice)
        {
			case 1: option = 90.00*qty;
			break;
		
		case 2: option = 120.00*qty;
		break;
		
		case 3: option = 80.00*qty;
		break;
	
	    case 4: option = 70.00*qty;
		break;
	    
	
        }	
        cout<<\n1 "<<White Rice<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which White Rice option you would like to have?:";
		cin>>White Riceoption;
		if(White Riceopion>=1 && White Riceoption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (White Rice)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
			case 4:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beans;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break; 
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		
	 	  else if(option==7)
		{
			cout<<"\nl) "<<Mukimo<<"\n";
		cout<<"\nplease Enter which White Mukimo type you would you like to have?:";
		cin>>Mukimo;
		if(Mukimo>=1 && Mukimo<=3)
		{
        cout<<"\nl)served with minji  p90.00\n"<<"2) served with beef p130.00\n"<<"3) served with matumbo 100.00\n"
		cout<<"\nchoose type of White Rice please:";
        cin>>;White Rice;
        if(White Rice>=1 &&White Rice<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(White Rice)
        {
			case 1: option = 90.00*qty;
			break;
		
		case 2: option = 130.00*qty;
		break;
		
		case 3: option = 100.00*qty;
		break;
	
	    
	
        }	
        cout<<\n1 "<<Mukimo<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which Mukimo option you would like to have?:";
		cin>>Mukimooption;
		if(Mukimoopion>=1 && Mukimooption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (Mukimo)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
				
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		   	
	     else if(option==6)
		{
			cout<<"\nl) "<<White Rice<<"\n";
		cout<<"\nplease Enter which White Rice type you would you like to have?:";
		cin>>White Rice;
		if(White Rice>=1 && White Rice<=4)
		{
        cout<<"\nl)served with minji  p90.00\n"<<"2) served with beef p120.00\n"<<"3) served with matumbo 80.00\n" porridge 20.00\n"
        <<"4) served with beans p70.00
		cout<<"\nchoose type of White Rice please:";
        cin>>;White Rice;
        if(White Rice>=1 &&White Rice<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(White Rice)
        {
			case 1: option = 90.00*qty;
			break;
		
		case 2: option = 120.00*qty;
		break;
		
		case 3: option = 80.00*qty;
		break;
	
	    case 4: option = 70.00*qty;
		break;
	    
	
        }	
        cout<<\n1 "<<White Rice<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which White Rice option you would like to have?:";
		cin>>White Riceoption;
		if(White Riceopion>=1 && White Riceoption<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;switch (White Rice)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with minji;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with matumbo;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
			case 4:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beans;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break; 
        
        
			}	
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}	
		
	 	  else if(option==8)
		{
			cout<<"\nl) "<<Chips<<"\n";
		cout<<"\nplease Enter which C type you Chips ould you like to have?:";
		cin>>Chips;
		if(Chips>=1 && Chips<=3)
		{
        cout<<"\nl)served with beef  p150.00\n"<<"2) chips masala p150.00\n"<<"3) bhajia 120.00\n"<<"3) chips kuku 200.00\n"
		cout<<"\nchoose type of Chips please:";
        cin>>;Chips;
        if(Chips>=1 &&Chips<=20)
        cout<<"\nPlease Enter Quantity: ";
        cin>>qty;
        switch(Chips)
        {
			case 1: option = 150.00*qty;
			break;
		
		case 2: option = 150.00*qty;
		break;
		
		case 3: option = 120.00*qty;
		break;
	
	   case 4: option = 200.00*qty;
		break; 
	
	    
	
        }	
        cout<<\n1 "<<Chips<<" p*qty"<<"\n";	
		
			cout<<"\nplease Enter which Chips option you would like to have?:";
		cin>>Chipsoption;
		if(Chippsopion>=1 && Chipsoption<=3)
		{
			cout<<"\nPlease Enter Quantity: "
			cin>>qty;switch (Chips)
			{
            case 1:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<served with beef;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
		    case 2:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chips masala;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
			}
			case 3:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<bhajia;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}
           case 4:
            cout<<"\t\t\t------your order------\n";
            cout<<""<<qty<<" "<<chips kuku;
            cout<<"\nyour Total Bill is \nP"<<option<<"\nYour Order Will Be delivered";
            couy<<"\nThank you for ordering from Stabucks Fast Food\n";
            break;
           	}	
				
		cout<<Would you like to order anything else? Y / N:";
        cin>>gotobegginning;
        if(gotobeginning=='Y' ||gotobeginning=='Y')
		{
			goto starting;
			//return0;
		   }	
		}
	}
		
		  	
		
		