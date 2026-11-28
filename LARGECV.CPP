#include<iostream.h>
#include<conio.h>
void max(int i,int j)
{
	if(i>j)
	{
		cout<<"1st number is large number";
	}
	else
	{
		cout<<"2nd number is large number";
	}
};
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	max(a,b);
	getch();
}