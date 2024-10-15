/*5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class student
{
	protected :
	string studentname;
	int rollnumber;
	
	public :
		void gets()
		{
			cout<<"\n\n\tEnter the student Name:";
			cin>>studentname;	
			cout<<"\n\n\tEnter sudent Rollnumber:";
			cin>>rollnumber;
			
		}	
		void prints()
		{
			cout<<"\n\n\tStudent Name:"<<studentname;
			cout<<"\n\n\tRoll number:"<<rollnumber;
		}
};

class mark : public student
{
	protected :
	int mark[3];
	int i;	
	
	
	public :
		
		int tot;
		void getm()
		{
			
			gets();
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
	grade g;
	cout<<"\n\n\tEnter student Details--------";
	g.getg();
	cout<<"\n\n\tStudent Details---------------";
	g.printg();
	
}
