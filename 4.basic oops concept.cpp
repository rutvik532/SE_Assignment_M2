/*4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.*/
#include<iostream>
using namespace std;

class Circle
{
	int rad;
	float pi;
	
	public :
		void get_circle()
		{
			cout<<"\n\n\tEnter the circle radius :";
			cin>>rad;
			pi=3.14;
			
		}
		
		void print_circle()
		{
			cout<<"\n\n\tCircle area:"<<pi*rad*rad;
			cout<<"\n\n\tCicle circumferrence:"<<2*pi*rad;
		}
};
main()
{
	Circle c;
	c.get_circle();
	c.print_circle();
}
