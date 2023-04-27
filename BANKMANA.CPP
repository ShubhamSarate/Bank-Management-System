#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	long account,phone;
	char name[10];
	char mail[20];
	char admin,z;
	long a=200000,b,c;
	int bank;
  clrscr();
/*Main line starts from here*/
  cout<<":------------------------------------------------------------------------------:\n";
  cout<<":\t\t\t\t\t\t\t\t\t       :\n";
  cout<<":\t\t\t     BANK MANAGEMENT SYSTEM   \t\t\t       :\n";
  cout<<":\t\t\t    ------------------------  \t\t\t       :\n";
  cout<<":\t\t\t\t\t\t\t\t\t       :\n";
  cout<<":\t\t\t       Design program by :- \t\t\t       :\n";
  cout<<":\t\t\t      --------------------- \t\t\t       :\n";
  cout<<":\t\t\t         Shubham R Sarate  \t\t               :\n";
  cout<<":\t\t\t\t\t\t\t\t\t       :\n";
  cout<<":\t\t\t\t\t\t\t\t\t       :\n";
  cout<<":\t\t\t  PRESS any key N enter to move on....        \t       :\n";
  cout<<":------------------------------------------------------------------------------:\n";

  cin>>z;
  clrscr();

/* The next page starts from here..............*/
 cout<<"\n\n\n\n\n\n\n\n\n";
 cout<<":------------------------------------------------------------------------------:";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"      :   PRESS [A] to login as administrator or [S] to login as staff :\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<":------------------------------------------------------------------------------:\n";
 cin>>admin;
 clrscr();

    switch(admin)
    {
	 case 'a':
 cout<<":-----------------------------------------------------------------------------:\n";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"      :\t\t\t  Welcome as administrator          \t\t:\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<":------------------------------------------------------------------------------:\n";

 cout<<"\n\nEnter the name of staff :- \t";
 cin>>name;
 cout<<"\nEnter the account number of staff :- \t";
 cin>>account;
 cout<<"\nEnter the phone number of staff :- \t";
 cin>>phone;
 cout<<"\nEnter the Email ID of staff :- \t";
 cin>>mail;
  break;

	 case 's':
 cout<<":------------------------------------------------------------------------------:";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"      :\t\t\t\tWelcome as staff  \t\t\t:\n";
 cout<<"    :\t\t\t\t\t\t\t\t\t :\n";
 cout<<"  :\t\t\t\t\t\t\t\t\t   :\n";
 cout<<":------------------------------------------------------------------------------:\n";

 cout<<"\n\nEnter the name of staff :- \t";
 cin>>name;
 cout<<"\nEnter the account number of staff :- \t";
 cin>>account;
 cout<<"\nEnter the phone number of staff :- \t";
 cin>>phone;
 cout<<"\nEnter the Email ID of staff :- \t";
 cin>>mail;
   break;

   default:
   cout<<"Invalid value.....";
   break;
 }
clrscr();
/*The Ending line starts from here....................*/
	cout<<"\n:------------------------------------------------------------------------------:";
	cout<<" Name   :- "<<name;
	cout<<"\n Account :- "<<account;
	cout<<"\n Phone   :- "<<phone;
	cout<<"\n Email   :- "<<mail;
	cout<<"\n:------------------------------------------------------------------------------:\n";

	cout<<"\n\n\n\t\t\tPRESS [1] to Deposit the money \n";
	cout<<"\n\t\t\tPRESS [2] to Transfer the money \n";
	cout<<"\n\t\t\tPRESS [3] to Withdraw the money \n\n\t\t\t\t\t";
	cin>>bank;

	switch(bank)
	{
		case 1:
		cout<<"\n\nDeposit the money :";
		cin>>b;
		cout<<"\nYour actual amount is :"<<a;
		c=a+b;
		cout<<"\n\nCONGRATULATIONS YOUR AMOUNT HAS BEEN DEPOSIT:\n";
		cout<<"\nAccount balance is :"<<c;
		break;

		case 2:
		cout<<"\n\nTransfer the money :";
		cin>>b;
		cout<<"\nYour actual amount is :"<<a;
		c=a-b;
		cout<<"\n\nCONGRATULATIONS YOUR AMOUNT HAS BEEN TRANSFER:\n";
		cout<<"\nAccount balance is :"<<c;
		break;

		case 3:
		cout<<"\n\nWitjdrawal the money :";
		cin>>b;
		cout<<"\nYour actual amount is :"<<a;
		c=a-b;
		cout<<"\n\nCONGRATULATIONS YOUR AMOUNT HAS BEEN WITHDRAWAL \n";
		cout<<"\nAccount balance is :"<<c;
		break;

		default:
		cout<<"\nINVALID INPUT...........";
		break;
	}
 getch();
 }