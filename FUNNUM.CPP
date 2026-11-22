#include<iostream.h>
#include<conio.h>
void reverse(int,int)
{
	int i,arr[5];

	for(i=0;i<5;i++)
	{
		cout<<"Enter numbers:";
		cin>>arr[i];
	}
	for(i=4;i>=0;i--)
	{
		cout<<"Reverse numbers:"<<arr[i]<<endl;
	}
}
void main()
{
	int a,c;
	clrscr();
	reverse(a,c);
	getch();
}
