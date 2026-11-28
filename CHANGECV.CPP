#include<iostream.h>
#include<conio.h>
void change(int a)
{
	a=500;
	cout<<"Changed value inside function:"<<a;
};
void main()
{
	int i=100;
	clrscr();
	change(i);
	getch();
}