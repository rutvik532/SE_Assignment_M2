/*6. Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */
#include<iostream>

using namespace std;

class employee
{
	private:
		
		string ename;
		int eid;
		int salary;
		
	public :
		
		employee(string a, int b, int c)
		{
			ename=a;
			eid=b;
			salary=c;
			
		}
		void print()
		{
			
			cout<<"\n\n\tEmployee name:"<<ename;
			cout<<"\n\n\tEmployee ID:"<<eid;
			cout<<"\n\n\tEmployee Salary :"<<salary;
			
			int n;
			cout<<"\n\n\tEnter your working day per month:";
			cin>>n;
			
			if(20>=n<=21)
			{
				cout<<"\n\n\tTotal Salary After bonus:"<<salary+500;
			}
			else if(20>=n<=23)
			{
				cout<<"\n\n\tTotal Salary After bonus:"<<salary+700;
			}
				else if(20>=n<=25)
			{
				cout<<"\n\n\tTotal Salary After bonus:"<<salary+1700;
			}
			
			else
			{
				cout<<"\n\n\tBetter luck next time for bonus";
			}
			
			
			
		}
};

main()
{
	string a;
	int b,c;
	
	cout<<"\n\n\tEnter employee name:";
	cin>>a;
	cout<<"\n\n\tEnter employee id:";
	cin>>b;
	cout<<"\n\n\tEnter employee salary:";
	cin>>c;
	
	employee d(a,b,c);
	d.print();
}
