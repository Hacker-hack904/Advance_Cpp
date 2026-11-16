#include<iostream.h>
#include<conio.h>
void main()
{
	float a=5.4;
	long double b=3.4;
	clrscr();
	cout<<"The size of 5.4 is "<<sizeof(5.4)<<endl;
	cout<<"The size of 3.4 is "<<sizeof(3.4)<<endl;
	cout<<"The size of 5.4 is "<<sizeof(float)<<endl;
	cout<<"The size of 3.4 is "<<sizeof(long double)<<endl;
	cout<<"The size of 5.4 is "<<sizeof(a)<<endl;
	cout<<"The size of 5.4 is "<<sizeof(b)<<endl;
	cout<<"The size of inteager is "<<sizeof(int)<<endl;
	cout<<"The size of charachter is "<<sizeof(char)<<endl;
	getch();
}