#include<iostream.h>
#include<conio.h>
int c=45;
void main()
{
	 int a,b,c;
	 clrscr();
	 cout<<"Enter first number:";
	 cin>>a;
	 cout<<"Enter second number:";
	 cin>>b;
	 cout<<"Enter third number:";
	 cin>>c;
	 cout<<"Addition is:"<<a+b+::c+c<<endl;
	 cout<<"The value of C:"<<::c;//To active global variable at a time scope resolution operator is used

	 getch();
}