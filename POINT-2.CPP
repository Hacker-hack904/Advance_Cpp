#include<iostream.h>
#include<conio.h>
void main()
{
	int a=10;
	int *b=&a;
	clrscr();
	a=100;
	cout<<*b;
	getch();
}