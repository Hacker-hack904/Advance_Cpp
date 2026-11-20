#include<iostream.h>
#include<conio.h>
struct employee
{
	int ID;
	char name[100];
	float salary;
};
void main()
{
	clrscr();
	employee e1;
	cout<<"Enter employee name:";
	cin>>e1.name;
	cout<<"Enter employee ID:";
	cin>>e1.ID;
	cout<<"Enter employee salry:";
	cin>>e1.salary;
	cout<<"-----EMPLOYEES DETAILS------"<<endl;
	cout<<"ID:"<<e1.ID<<endl;
	cout<<"Name:"<<e1.name<<endl;
	cout<<"Salary:"<<e1.salary<<endl;
	getch();
}