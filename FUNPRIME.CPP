#include<iostream.h>
#include<conio.h>
void prime(int)
{
	int i;
	cout<<"Enter number:";
	cin>>i;
	if(i%2==0)
	{
		cout<<"Number is not prime";
	}
	else
	{
		cout<<"Number is prime";
	}
}
void main()
{
	int j;
	clrscr();
	prime(j);
	getch();
}
