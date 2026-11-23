#include<iostream.h>
#include<conio.h>
void calculator(int,int,int,int,int,int,int)
{
	int add,sub,mul,div,i,j,choice;
	cout<<"Enter 1st number:";
	cin>>i;
	cout<<"Enter 2nd number:";
	cin>>j;
	cout<<"1.Addition"<<endl;
	cout<<"2.Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"Enter your choice for calculatio:";
	cin>>choice;
	if(choice==1)
	{
		cout<<"Addition of two numbers:"<<i+j;
	}
	else if(choice==2)
	{
		cout<<"Subtraction of two numbers:"<<i-j;
	}
	else if(choice==3)
	{
		cout<<"Multiplication of two numbers:"<<i*j;
	}
	else if(choice==4)
	{
		cout<<"Division of two numbers:"<<i/j;
	}
	else
	{
		cout<<"Invalid choice";
	}
}
void main()
{
	int a,b,c,d,e,f,g;
	clrscr();
	calculator(a,b,c,d,e,f,g);
	getch();
}