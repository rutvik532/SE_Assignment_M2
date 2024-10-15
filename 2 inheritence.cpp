/*2. Write a C++ Program to find Area of Rectangle using inheritance */
#include<iostream>
using namespace std;

class rectangle
{
	protected :
	
		int length;
		int width;
		
	public :
	
		void setd(int l, int w)	
		{
			length=l;
			width=w;
		}
};

class area : private rectangle
{
	public :
		int calculatearea()
		{
		
			return length*width;
		}
};

main()	
{	
	area a;
	
		
	int l,w;
	cout<<"\n\n\tEnter the value of lenght:";
	cin>>l;
	cout<<"\n\n\tEnter the value of width:";
	cin>>w;
	a.setd(l,w);
	cout<<"Area of rectanglr:"<<a.calculatearea();
	
	
}


