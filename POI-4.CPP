#include<iostream.h>
#include<conio.h>
void main()
{
	int a=20,b=30;
	int *c=&a,*d=&b;
	clrscr();
	cout<<"Sum is "<<*c + *d<<endl;
	cout<<"Address is "<<&b;
	getch();

}