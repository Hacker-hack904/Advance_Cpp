#include<iostream.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	clrscr();
	cout<<"Enter number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial:"<<fact<<endl;
	getch();
}