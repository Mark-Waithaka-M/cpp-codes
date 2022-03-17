	void addrecord()
	{
		system("cls");
		FILE*fp;
		char another = 'Y', time[10];
		struct record e;
		char filename[15];
		int choice;
		
	 cout<<"\t\\t|-------------------------------------------|\n";
     cout<<"\t\\t|      stabucks Fast food ordering system   |\n"; 
     cout<<"\t\\t|-------------------------------------------|\n";
     cout<<"\t\\t|-------------------------------------------|\n";
     cout<<"\n\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:";
     fflush(stdin);
     gets(filename);
     fp = fopen (filename, "ab+" ) ;
     if(fp == NULL)
     {
     	fp = fopen (filename,"wb+");
     	{
     	cout<<"\nSYSTEM ERROR...";
     	cout<<"\nPRESS ANY KEY TO EXIT";
     	getch();
     	return ;
     	}
	 }
	 while ( another == 'Y' || another 'Y')
	{
	choice=0;
	fflush(stdin);
	cout << "\n\tENTER TIME";
	cin >> time;
	rewind(fp);
	while(fread(e.time,time)=1)
	{
		if(strcmp(e.time,time)=0)
		{
			cout<<"\nTHE RECORD ALREADY EXISTS.\n";
			choice= 1;
		}
	}
