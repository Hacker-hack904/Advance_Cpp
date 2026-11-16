#include<iostream.h>
#include<conio.h>
void main()
{
	int *a,*b,c;
	int i=10,j=20,k;
	clrscr();
	int *a=&i;
	int *b=&j;
	c=*a;
	*a=*b;
	*b=c;

	cout<<"Swap of two numbers are"<<*b;
	cout<<"Swap of two numbers are"<<*a;
	getch();

}