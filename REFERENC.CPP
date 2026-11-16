#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x=455;
	int &y=x;//Reference variable
	cout<<"The value of x is:"<<x<<endl;
	cout<<"The value of y is:"<<y;
	getch();
}