#include<iostream.h>
#include<conio.h>
void main()
{
	int n,original,rev=0,rem;
	clrscr();
	cout<<"Enter the number:";
	cin>>n;
	original=n;
	while(n!=0)
	{
	      rem=n%10;
	      rev=rev*10+rem;
	      n=n/10;
	}
	if(original==rev)
	{
		cout<<"The number is palindrome";
	}
	else
	{
		cout<<"The number is not palindrome";
	}
	getch();
}