/*2. Define a class to represent a bank account. Include the following members: 
3. Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
 
Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance*/
#include<iostream>

using namespace std;

class account
{
	private :
		string name;
		int number;
		string type;
		int balance;
		
	public :
		void get()
		{
			cout<<"\n\n\tEnter the name:";
			cin>>name;
			cout<<"\n\n\tEnter Account number:";
			cin>>number;
			cout<<"\n\n\tAccount type:";
			cin>>type;
			cout<<"\n\n\tEnter the account balace:";
			cin>>balance;
			
			
		}
		
		void print()
		{
			cout<<"\n\n\t name:"<<name;
			cout<<"\n\n\tccount number:"<<number;
			cout<<"\n\n\tAccount type:"<<type;
			cout<<"\n\n\t account balace:"<<balance;
			int ch;
			cout<<"\n\n\tpress 1 for deposit:";
			cout<<"\n\n\tpress 2 for withdraw:";
			
			cout<<"\n\n\tEnter your choice:";
			cin>>ch;
			
			int amount;
			switch (ch)
			
			{
			
				case 1 : 
				cout<<"\n\n\tDeposit Amount:";
				cin>>amount;
				cout<<"\n\n\tTotal Balance:"<<balance+amount;
				
				break;
			
			
				case 2 :
				cout<<"\n\n\withdraw Amount:";
				cin>>amount;
				
				if (balance>=amount)
				{ 
					cout<<"Total amount:"<<balance-amount;
				
				}
				else
				{
					cout<<"\n\n\tPlease check your balance";
				}
				break;
				default : 
				cout<<"\n\n\t Invalid choice!!!! Try again.";
					break;
		}
			}
		
	
};

main()
{
	account a;
	a.get();
	a.print();
}

