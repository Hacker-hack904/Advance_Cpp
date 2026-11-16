#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,arr[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter 5 elements:";
		cin>>arr[i];
	}
	j=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<j)
		{
			j=arr[i];

		}
	}
	cout<<"Smallest value:"<<j;
	getch();
}