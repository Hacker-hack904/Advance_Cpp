#include<iostream.h>
#include<conio.h>
void main()
{
	int i,arr[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter numbers:";
		cin>>arr[i];
	}
	int *j=arr;
	for(i=4;i>=0;i--)
	{

		cout<<"Reverse numbers are:"<<i<<" "<<*(j+i)<<endl;
	}
	getch();
}