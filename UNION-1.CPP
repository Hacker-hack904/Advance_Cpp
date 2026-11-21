//Create a union named student with threee members
//wap to store and display rollno
#include<iostream.h>
#include<conio.h>
union student//union means memory optimization it usese less memory
{
	int rollno;
	float marks;
	char grade;
};
void main()
{
	student s1;
	clrscr();
	cout<<"Enter rollno:";
	cin>>s1.rollno;        //In union only one member can be use in program
//	cout<<"Enter marks:";
//	cin>>s1.marks;
	cout<<"Roll no:"<<s1.rollno<<endl;
//	cout<<"Marks:"<<s1.marks;
	getch();
}