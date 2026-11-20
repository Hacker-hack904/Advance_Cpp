#include<iostream.h>
#include<conio.h>
struct student
{
	int roll;
	char name[90];
	float age;
};
void main()
{
	int i;
	student s[2];
	clrscr();
	for(i=0;i<2;i++)
	{
		cout<<"Enter student name:";
		cin>>s[i].name;

		cout<<"Enter student rollnumber:";
		cin>>s[i].roll;
		cout<<"Enter student age:";
		cin>>s[i].age;
	}

	cout<<"------STUDENT DETAILS------"<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"Name:"<<s[i].name<<endl;
		cout<<"Roll number:"<<s[i].roll<<endl;
		cout<<"Age:"<<s[i].age<<endl;
	}
	getch();
}
