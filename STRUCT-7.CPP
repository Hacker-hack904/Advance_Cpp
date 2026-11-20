#include<iostream.h>
#include<conio.h>
struct student
{
	int roll,marks;
	char name[90];
	float age;
};
void main()
{
	int i;
	student s[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"Enter student name:";
		cin>>s[i].name;

		cout<<"Enter student rollnumber:";
		cin>>s[i].roll;
		cout<<"Enter student age:";
		cin>>s[i].age;
		cout<<"Enter student total marks:";
		cin>>s[i].marks;
	}

	cout<<"------STUDENT DETAILS------"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Name:"<<s[i].name<<endl;
		cout<<"Roll number:"<<s[i].roll<<endl;
		cout<<"Age:"<<s[i].age<<endl;
		cout<<"Toatal Marks:"<<s[i].marks<<endl;
	}
	getch();
}
