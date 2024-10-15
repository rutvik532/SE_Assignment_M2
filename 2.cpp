/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/
#include<iostream>

using namespace std;

class calculator
{
	int a,b;
	
	public :
		
		 	calculator(int x,int y)
		 	{
		 		a=x;
		 		b=y;
		 		
			}
			
			void print()
			{
				cout<<"\n\n\tPress 1 for Addition:";
				cout<<"\n\n\tPress 2 for substraction:";
				cout<<"\n\n\tPress 3 for multiplication:";
				cout<<"\n\n\tPress 4 for division:";
				
				int n;
				cout<<"\n\n\tEnter your choice:";
				cin>>n;
				
				switch(n)
				{
					case 1:
					cout<<"\n\n\tAddition:"<<a+b;
					break ;	
					case 2:
					cout<<"\n\n\tSubstraction:"<<a-b;
					break ;
					case 3:
					cout<<"\n\n\tMultiplication:"<<a*b;
					break ;
					case 4:
					cout<<"\n\n\tDivision:"<<a/b;
					break ;
					default :
					cout<<"Invalid choice!!";
					break ;
					
				}
				
			}
	
};
main()
{
	int x,y;
	cout<<"\\n\n\tEnter a value of x:";
	cin>>x;
	cout<<"\n\n\tEnter a value of y:";
	cin>>y;
	
	calculator c(x,y);
	c.print();
	
}
