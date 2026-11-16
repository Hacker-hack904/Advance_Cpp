#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5],i,j=0/*value not found*/,num;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter elements:";
		cin>>arr[i];
	}
	cout<<"Search the element:";
	cin>>num;
	for(i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			j=1;//value found
			break;
		}
	}

	if(j==1)
		{
			cout<<"Element is available";
		}
		else
		{
			cout<<"element is not availabel";
		}
		getch();
}


