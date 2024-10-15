/*6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables*/

#include<iostream>

using namespace std;

class person

{	private :
	string name;
	int age;
	string country;
	
	public : 
		void get()
		{
			cout<<"\n\n\tEnter the person name:";
			cin>>name;
			cout<<"\n\n\tEnter the person age: ";
			cin>>age;
			cout<<"\n\n\tEnter the person country:";
			cin>>country;
		}

		void print()
		{
			cout<<"\n\n\tPerson name:"<<name;
			cout<<"\n\n\tPerson age:"<<age;
			cout<<"\n\n\tPerson country:"<<country;
			
		}
	
};
main()
{
	person p;
	p.get();
	p.print();
}
