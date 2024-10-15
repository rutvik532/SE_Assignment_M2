/*5. Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene. */
#include<iostream>

using namespace std;

class triangle
{
	private :
		
			int a,b,c;
			
			
	public :
		
				triangle(int x, int y, int z)
				{
					a=x;
					b=y;
					c=z;
				}
				void print()
				{
					if(a+b+c==180)
					{
						cout<<"\n\n\tTriangle is equilateral. ";
					}
					else 
					{
						cout<<"\n\n\ttriangle is isosceles, or scalene.";
					}
				}
};
main()
{
	int x,y,z;
	
	cout<<"\n\n\tEnter value of X:";
	cin>>x;
	cout<<"\n\n\tEnter value of Y:";
	cin>>y;
	cout<<"\n\n\tEnter value of Z:";
	cin>>z;
	
	triangle d(x,y,z);
	d.print();
}

