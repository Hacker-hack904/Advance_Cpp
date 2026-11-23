#include<iostream.h>
#include<conio.h>
void arrsum(int,int,int)
{
	int arr[5],i,j=0;
	for(i=1;i<=5;i++)
	{
		cout<<"Enter numbers:";
		cin>>arr[i];
	}
	for(i=1;i<=5;i++)
	{
		j=j+arr[i];
	}
	cout<<"Addition of 5 numbers:"<<j<<endl;
}
void main()
{
	int a,b,c;
	clrscr();
	arrsum(a,b,c);
	getch();
}