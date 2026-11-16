#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[10],j=0,i;
	clrscr();
	for(i=0;i<10;i++)
	{
		cout<<"Enter elements:";
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
			j++;
		}
	}
	cout<<"Total odd numbers are:"<<j;
	getch();
}
