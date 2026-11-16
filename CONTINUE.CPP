#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	getch();
}