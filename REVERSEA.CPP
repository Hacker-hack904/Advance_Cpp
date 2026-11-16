#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,arr[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter elements:";
		cin>>arr[i];
	}
	cout<<"Reverse array:"<<endl;
	for(i=4;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}