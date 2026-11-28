#include<iostream.h>
#include<conio.h>
void num(int i)
{
	cout<<"Increased number is:"<<i+10;
};
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter number:";
	cin>>a;
	num(a);
	getch();
}