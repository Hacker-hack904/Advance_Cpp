#include<iostream.h>
#include<conio.h>
void evenodd(int i)
{
	if(i%2==0)
	{
		cout<<"Number is even:"<<i;
	}
	else
	{
		cout<<"Number is odd:"<<i;
	}
};
void main()
{
	int a;
	clrscr();
	cout<<"Enter number:";
	cin>>a;
	evenodd(a);
	getch();
}