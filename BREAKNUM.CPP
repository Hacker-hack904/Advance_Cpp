#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{

		if(i%7==0 && i%3==0)
		{
			break;
		}
		cout<<i<<endl;
	}
	getch();
}