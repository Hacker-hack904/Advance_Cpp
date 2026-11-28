#include<iostream.h>
#include<conio.h>
void add(int a,int b)
{
	cout<<"Addition of two numbers:"<<a+b;
};
void main()
{
	int i,j;
	clrscr();
	cout<<"Enter 1st number:";
	cin>>i;
	cout<<"Enter 2nd number:";
	cin>>j;
	add(i,j);
	getch();
}