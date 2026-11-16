#include<iostream.h>
#include<conio.h>
void main()
{
	int i,a;
	clrscr();
	cout<<"Enter table number:";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	}
	getch();
}