#include<iostream.h>
#include<conio.h>
void palindrome(int,int,int,int)
{
	{
		int n,original,rev=0,rem;
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
	}
}
void main()
{
	int i,j,k,l;
	clrscr();
	palindrome(i,j,k,l);
	getch();
}
