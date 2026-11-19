#include<iostream.h>
#include<conio.h>
void main()
{
	int i,arr[5],sum=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter numbers:";
		cin>>arr[i];
	}
	int *j=arr;
	for(i=0;i<5;i++)
	{
		sum=sum+*(j+i);
	}
	cout<<"Sum="<<sum;
	getch();

}