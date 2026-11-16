#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j=0,posi=0,neg=0,arr[10];
	clrscr();
	for(i=0;i<10;i++)
	{
		cout<<"Enter numbers:";
		cin>>arr[i];
	}

	for(i=0;i<10;i++)
	{
		if(arr[i]<0)
		{
			neg++;
		}
		else if(arr[i]>0)
		{
			posi++;
		}
		else
		{
			j++;
		}

	}
	cout<<"Positive numbers:"<<posi<<endl;
	cout<<"Negative numbers:"<<neg<<endl;
	getch();

}
