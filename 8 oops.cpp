/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;

class math
{
	int n1,n2,n3,n4;
	double n5,n6;
	double n7,n8;
	
	public :
			 void add(int a,int b)
			 {
			 	n1=a;
			 	n2=b;
			 	cout<<"\n\n\tAddition :"<<n1+n2;
			 }
			  void sub(int c,int d)
			 {
			 	n3=c;
			 	n4=d;
			 	cout<<"\n\n\tSubstraction :"<<n3-n4;
			 }
			  void mul(double e,double f)
			 {
			 	n5=e;
			 	n6=f;
			 	cout<<"\n\n\tMultiplication :"<<n5*n6;
			 }
			  void div(double g,double h)
			 {
			 	n7=g;
			 	n8=h;
			 	cout<<"\n\n\tDivision :"<<n7/n8;
			 }
};
main()
{
	int a,b,c,d;
	cout<<"Enter value a for addition:";
	cin>>a;
	cout<<"Enter value b for addition:";
	cin>>b;
	
	cout<<"Enter value c for substraction:";
	cin>>c;
	cout<<"Enter value d for substraction:";
	cin>>d;
	double e,f;
	cout<<"Enter value e for multiplication:";
	cin>>c;
	cout<<"Enter value f for multiplication:";
	cin>>f;
	double g,h;
	cout<<"Enter value g for division:";
	cin>>g;
	cout<<"Enter value h for division:";
	cin>>h;
	math m;
	m.add(a,b);
	m.sub(c,d);
	m.mul(e,f);
	m.div(g,h);
	
}
