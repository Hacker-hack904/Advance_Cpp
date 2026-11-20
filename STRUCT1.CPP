#include<iostream.h>
#include<conio.h>
struct student
{
	int roll;
	char name;
	float age;
};
void main()
{
	student s1;
	clrscr();
	cout<<"Enter student name:";
	cin>>s1.name;

	cout<<"Enter student rollnumber:";
	cin>>s1.roll;
	cout<<"Enter student age:";
	cin>>s1.age;
	cout<<"------STUDENT DETAILS------"<<endl;
	cout<<"Name:"<<s1.name<<endl;
	cout<<"Roll number:"<<s1.roll<<endl;
	cout<<"Age:"<<s1.age<<endl;
	getch();
}
