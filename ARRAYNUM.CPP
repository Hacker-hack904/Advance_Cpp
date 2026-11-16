#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();

	for(i=0;i<5;i++)
	{
		cout<<"Take numbers:";
		cin>>a[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<"Numbers are:"<<a[i]<<endl;
	}
	getch();

}
