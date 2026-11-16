#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	getch();
}