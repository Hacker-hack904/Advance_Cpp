#include<iostream.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	cout<<"Enter your age:";
	cin>>age;
	switch(age)
	{
		case 18:
			cout<<"Your age is 18";
			break;
		case 22:
			cout<<"Your age is 22";
			break;
		case 28:
			cout<<"Your age is 28";
			break;
		default:
			cout<<"Invalid age";
	}
	getch();

}