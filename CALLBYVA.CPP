#include<iostream.h>
#include<conio.h>
void swap(int x,int y)       //call by value
{
       int temp=x;
	x=y;
	y=temp;
};
void main()
{
	int a=100;
	int b=200;
	clrscr();
	cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b<<endl;
	swap(a,b);
	cout<<"After swap of a is:"<<a<<endl<<"After swap of b is:"<<b<<endl;
	getch();
}