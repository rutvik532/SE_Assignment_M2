/*1. Write a program to find the multiplication values and the cubic values using 
inline function*/

#include<iostream>

using namespace std;

class cubic
{
	int n;
	 
	public :
			void get()
			{
			
			cout<<"Enter the value of n for finding cubic value:";
			cin>>n;
			}
			
			inline void print()
			{
			
			cout<<"cubic value of enter number  is:"<<n*n*n;
			}
				
};

main()
{
	cubic c;
	c.get();
	c.print();
}
