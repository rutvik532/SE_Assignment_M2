/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */
#include<iostream>

using namespace std;

class bank
{
	private :
		
		int number;
		int balance;
		
	public :
		
			bank(int a, int b)
			{
				number=a;
				balance=b;
			}
			void print()
			{
				cout<<"\n\n\tBank account number:"<<number;
				cout<<"\n\n\tBank balance:"<<balance;
				
				int n;
				cout<<"\n\n\tpress 1 for withdraw:";
				cout<<"\n\n\tpress 2 for deposit:";
				cout<<"\n\n\tEnter your choice:";
				cin>>n;
				switch (n)
				{
					case 1:
					int max;
					cout<<"Enter withdraw amount:";
					cin>>max;
					if(balance>max)
					{
						cout<<"Total amout after withdraw:"<<balance-max;
						
					}
					else
					{
						cout<<"Please check your bank balance!!";
					}
					break ;
					
					case 2:
					cout<<"Enter deposit amount:";
					cin>>max;
					cout<<"Total amoount after deposit:"<<balance+max;
						
				}
			}
};
main()
{
	int a,b;
	cout<<"\n\n\tEnter Bank account number:";
	cin>>a;
	cout<<"\n\n\tEnter your bank balance:";
	cin>>b;
	
	bank c(a,b);
	c.print();
}
