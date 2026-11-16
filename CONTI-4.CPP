#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		{
			continue;
		}
		cout<<i<<endl;
	}
	getch();
}