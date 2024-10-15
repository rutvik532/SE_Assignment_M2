/*1. WAP to create simple calculator using class*/
#include<iostream>

using namespace std;

main()
{
	int n1,n2;
	
	cout<<"Enter num1 for calculation:";
	cin>>n1;
	cout<<"Enter num2 for calculation:";
	cin>>n2;
	
	cout<<"\n\n\tPress 1 for addition :";
	cout<<"\n\n\tPress 2 for substraction :";
	cout<<"\n\n\tPress 3 for multiplication :";
	cout<<"\n\n\tPress 4 for division :";
	
	int ch;
	cout<<"\n\n\tEnter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1 : cout<< "\n\n\tAddition:"<<n1+n2; break;
		case 2 : cout<< "\n\n\tsubstraction:"<<n1-n2; break;
		case 3 : cout<< "\n\n\tmultiplication:"<<n1*n2; break;
		case 4 : cout<< "\n\n\tdivision:"<<n1/n2; break;
	}
}
