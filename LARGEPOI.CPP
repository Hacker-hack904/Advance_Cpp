#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j;
	int *a=&i;
	int *b=&j;
	clrscr();
	cout<<"Enter 1:";
	cin>>i;
	cout<<"Enter 2:";
	cin>>j;
	if(*a>*b)
	{
		cout<<"1 is large";
	}
	else
	{
		cout<<"2 is large";

	}
	getch();
}