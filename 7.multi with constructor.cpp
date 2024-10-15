/*7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance */

#include<iostream>
using namespace std;

class student
{
	public :
	string studentname;
	int rollnumber;
	
	public :
			student(string x, int y)
		{
			studentname=x;
			rollnumber=y;
			
		}	
		void prints()
		{
			cout<<"\n\n\tStudent Name:"<<studentname;
			cout<<"\n\n\tRoll number:"<<rollnumber;
		}
};

class mark : public student
{
	public :
	int mark[3];
	int i;	
	
	
	public :
		
		int tot;
			void getm()
			{
			tot=0;
			for(i=0;i<3;i++)
			{
				
				cout<<"\n\n\tEnter subject["<<i+1<<"]:";
				cin>>mark[i];
				tot+=mark[i];
				
			}
			
		}
		void printm()
		{
			prints();
		
			for(i=0;i<3;i++)
			{
				cout<<"\n\n\tsubject["<<i+1<<"]:"<<mark[i];
				
			}
			cout<<"\n\n\tTotal Mark:"<<tot;
		
			
		}
};

class grade : private mark
{

	
		public :
			
			void getg()
			{
				getm();
				
			}
			
			void printg()
			{	printm();
				float per;
				per=tot/3;
				cout<<"\n\n\tPercentage:"<<per;
				
				if (per>=80)
				{
					cout<<"\n\n\tGrade:A";
				}
				else if (per>=60)
				{
					cout<<"\n\n\tGrade:B";
				}
				else if (per>=40)
				{
					cout<<"\n\n\tGrade:C";
					
				}
				else
				{
					cout<<"\n\n\tFail";
				}
			}
};

main()
{
	string x;
	int y;
	cout<<"\n\n\tEnter the student Name:";
	cin>>x;	
	cout<<"\n\n\tEnter sudent Rollnumber:";
	cin>>y;
	student s(x,y);
	
	grade g;
	g.printg();

	
}
