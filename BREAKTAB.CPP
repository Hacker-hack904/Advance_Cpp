#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j=7;
	clrscr();
	for(i=1;i<=10;i++)
	{
		cout<<"7*"<<i<<"="<<j*i<<endl;
		if(i==7)
		{
			break;
		}
	}
	getch();
}