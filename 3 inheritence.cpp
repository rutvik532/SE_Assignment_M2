/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */
#include<iostream>
using namespace std;

class person 
{
	protected :
		string name;
		int age;
		
	public :
		void getp()
		{
			cout<<"\n\n\tEnter a Name:";
			cin>>name;
			cout<<"\n\n\tEnter a age:";
			cin>>age;
			
		}
		void printp()
		{
			cout<<"\n\n\tName:"<<name;
			cout<<"\n\n\tAge:"<<age;
			
		}
		
};

class student : private person
{
	protected :
		float per;
		
	public :
		
			void getpe()
			{	getp();
				cout<<"\n\n\tEnter percentage:";
				cin>>per;
			}
			
			void printpe()
			{
				printp();
				cout<<"\n\n\tPercentage:"<<per;
				
			}
	
};

class teacher : private person
{
	protected :
		
		int salary;
		
	public :
		
		void gett()
		{
			getp();
			cout<<"\n\n\tEnter teacher salary:";
			cin>>salary;
		}
		void printt()
		{
			printp();
			cout<<"\n\n\tSalary:"<<salary;
			
		}
};
main()
{	
	student s;

	cout<<"\n\n\tEnter student details";
	s.getpe();
	cout<<"\n\n\tEnter Teacher details";
	teacher t;
	cout<<"\n\n\tEnter teacher Details-----------";
	t.gett();
	cout<<"\n\n\tStudent Details";
	s.printpe();
	cout<<"T\n\n\teacher Details";
	t.printt();

	
	

	
}
