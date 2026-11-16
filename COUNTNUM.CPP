#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j=0;
	clrscr();
	cout<<"Enter number:";
	cin>>i;
	while(i!=0)
	{
		i=i/10;
		j++;
	}
	cout<<"Total digits:"<<j<<endl;
	getch();
}