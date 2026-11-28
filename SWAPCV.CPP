#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
       int temp=a;
	a=b;
	b=temp;
	cout<<"1st number:"<<a<<endl;
	cout<<"2nd number:"<<b<<endl;
};
void main()
{
	int i,j;
	clrscr();
	cout<<"Enter 1st number:";
	cin>>i;
	cout<<"Enter 2nd number:";
	cin>>j;
	swap(i,j);
	getch();
}