     //BANK MANAGEMENT PROJECT
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Bank
{
	char name[100], address[100],y;
	int balance;
	public:
		 void open_account();
		 void deposite_money();
		 void withdraw_money();
		 void Display_account();
};
void Bank::open_account()
{
	cout<<"ENTER YOUR FULL NAME"<<endl;
	cin.ignore(); //FOR SKIP THE CHARACTERS OR IGNORE THE CHARACTERS IN THE INPUT FILE
    cin.getline(name,100);
    cout<<"ENTER YOUR ADDRESS";
    cin.ignore();
    cin.getline(address,100);
    cout<<"WHAT TYPE OF ACCOUNT YOU WANT TO OPEN SAVING (s) OR CURRUNT (c) ";
    cin>>y;
    cout<<"ENTER AMOUNT FOR DEPOSITE ::";
    cin>>balance;
    cout<<"YOUR ACCOUNT IS CREATED \n";
}
void Bank::deposite_money()
{
	int a;
	cout<<"ENTER HOW MUCH AMOUNT YOU WANT TO DEPOSIT";
	cin>>a;
	balance=balance+a;
	cout<<"TOTALE AMOUNT DEPOSITE :: \t"<<balance;
	
}
void Bank::Display_account()
{
	cout<<"FULL NAME :: \t"<<name;
	cout<<"ADDRESS :: \t"<<address;
	cout<<"ACCOUNT TYPE :: \t"<<y;
	cout<<"TOTAL AMOUNT :: \t"<<balance;
}
void Bank::withdraw_money()
{
	float amount;
	cout<<"\n WITHDRAW ::";
	cout<<"ENTER AMOUNT TO WITHDRAW ::";
	cin>>amount;
	balance=balance-amount;
	cout<<"TOTAL AMOUNT LEFT ::"<<balance;	
}
int main()
{   
    int ch;
    char x;
    Bank obj;
    do
	{
	cout<<"1) OPEN ACCOUNT \n";
	cout<<"2) DEPOSITE MONEY \n";
	cout<<"3) WITHDRAW MONEY \n";
	cout<<"4) DISPLAY ACCOUNT \n";
	cout<<"5) EXIT \n";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"1) OPEN ACCOUNT \n";
		        obj.open_account();
		        break;
		case 2: cout<<"2) DEPOSITE MONEY \n";
		        obj.deposite_money();
		        break;
	    case 3: cout<<"3) WITHDRAW MONEY  \n";
		        obj.withdraw_money();
		        break;
		case 4: cout<<"4) DISPLAY ACCOUNT \n";
		        obj.Display_account();
		        break;
		case 5:	
		       if(ch==5)
			   {
			   	exit(1);
							   }
		default: cout<<"THIS IS NOT EXIST TRY AGAIN \n";
		      }
	cout<<" \n DO YOU WANT TO SELECT NEXT OPTION THEN PRESS :: y \n";
	cout<<"IF YOU WANT TO EXIST THEN PRESS :: N";
	x=getch(); // TO GET THE VALE OF X THATS WHY WE USE GETCH 
	if(x=='n'||x=='N')
	exit(0);

	}
	while(x=='y'|| x=='Y'); //TO GO BACK TO MAIN MENU
	
	getch();
	return 0;
	
}

