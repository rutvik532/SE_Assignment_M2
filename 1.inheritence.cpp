/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */
#include<iostream>
using namespace std;

class cricketer
{
	string Cname[3];
	
	public :
		
		void getc()
		{
			int i;
			for(i=0;i<3;i++)
			{
				cout<<"\n\n\tEnter Cricketer name["<<i+1<<"]:";
				cin>>Cname[i];
			}
		}
		void printc()
		
		{
			int i;
			for(i=0;i<3;i++)
			{
				cout<<"\n\n\tCricketer name["<<i+1<<"]:"<<Cname[i];
			}
		}
};

class batsmen : private cricketer
{
	int run[3];
	int tot;
	int avg;
	
	public :
		void getr()
		
		{	
			getc();
			
			
			int i;
			tot=0;
			for(i=0;i<3;i++)
			{
				cout<<"\n\n\tEnter Cricketer ["<<i+1<<"] run:";
				cin>>run[i];
				tot+=run[i];
			}
			
			
		}
		
		void printr()
		{
			printc();
			int i;
			
			for(i=0;i<3;i++)
			{
				cout<<"\n\n\tCricketer ["<<i+1<<"] run:"<<run[i];
			}
			
			cout<<"\n\n\tTotal Run all betsmen:"<<tot;
			cout<<"\n\n\t Average Run:"<<tot/3;
			
		}
};

main()
{
	batsmen d;
	d.getr();
	d.printr();
}
