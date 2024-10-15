/*3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables. */
#include<iostream>

using namespace std;

class car
{
	private :
		string company;
		string model;
		int year;
		
		
	public :
		    car (string c, string a,int b)
		    {
		    	company= c;
		    	model= a;
		    	year= b;
			}
			
			void print()
			{
				cout<<"\n\n\tCar company:"<<company;
				cout<<"\n\n\tCar model:"<<model;
				cout<<"\n\n\tCar year:"<<year;
				
				
			}
};
main()
{
	string c,a;
	
	int b;
	
	cout<<"\n\n\tEnter car company name:";
	cin>>c;
	cout<<"\n\n\tEnter car model:";
	cin>>a;
	cout<<"\n\n\tEnter car year:";
	cin>>b;
	
	car x(c, a, b);
	x.print();
	
}
