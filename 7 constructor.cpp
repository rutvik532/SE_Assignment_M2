/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */
#include<iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;
	
		public :
		
			Date(int a,int b, int c)
			{
				day=a;
				month=b;
				year=c;	
			}	
			
			void print()
			{
				if(day<=31)
				{
					cout<<"\n\n\tDay:"<<day;
				}
				else
				{
					cout<<"\n\n\tEnter valid Date!!";
				}
				if(month<=12)
				{
					cout<<"\n\n\tmonth:"<<month;
				}
				else
				{
					cout<<"\n\n\tEnter valid month!!";
				}
				cout<<"\n\n\tyear:"<<year;
			}
};


main()
{
	int a;
	int b;
	int c;
	
	cout<<"\n\n\tEnter the date:";
	cin>>a;
	cout<<"\n\n\tEnter the month:";
	cin>>b;
	cout<<"\n\n\tEnter the year:";
	cin>>c;
	
	Date D(a,b,c);
	D.print();
}
