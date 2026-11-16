#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=-10;i<=10;i++)
	{
		if(i<0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	getch();
}