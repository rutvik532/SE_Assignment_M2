/*5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter. */
#include<iostream>


using namespace std;

class rectangle 
{
	int lenght,width;
	
	
	public :
		
		
		void get()
		
		{
			cout<<"\n\n\tEnter the lenght of rectangle:";
			cin>>lenght;
			cout<<"\n\n\tEnter the width of rectangle:";
			cin>>width;
			
		}
		void print()
		{
			cout<<"\n\n\tRectangle Area:"<<lenght*width;
			cout<<"\n\n\tRectangle perimeter:"<<2*lenght+2*width;
		}
};

main()
{
	rectangle r;
	r.get();
	r.print();
}

