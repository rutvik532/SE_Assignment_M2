/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;

class matrix
{
	int mat[5];
	
	
			public :
				
				matrix (int a[5]=0)
				{
					mat[5]=a[5];
				}
				
				matrix operator+(matrix &m)
				a3[5]=a[5]+m.a[5];
			void print()
			{
				cout<<"Matrix:"<<mat[5];
			}	
				
};
main()
{
	int a1[5];
	int i;
	for (i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]:i+1";
		cin>>a1[i];
	}
	int a2[5];
	int i;
	for (i=0;i<5;i++)
	{
		cout<<"Enter a["<<i<<"]:i+1";
		cin>>a2[i];
	}
	
	int a3[5];
	a3[5]=a1[5]+a2[5];
}
