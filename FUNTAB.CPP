#include<iostream.h>
#include<conio.h>
void table(int i,int o)
{
	cout<<"Enter number:";
	cin>>o;
	for(i=1;i<=10;i++)
	{
		cout<<o<<"*"<<i<<"="<<i*o<<endl;
	}
};
void main()
{
	int j,k;
	clrscr();
	table(j,k);
	getch();
}