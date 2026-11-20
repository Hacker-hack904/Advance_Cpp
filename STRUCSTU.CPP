#include<iostream.h>
#include<conio.h>
struct student
{
	int roll;
	char name[100];
	float age;
};
void main()
{
	int i,search,found=0;
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
	}
	cout<<"------STUDENT DETAILS------"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Name:"<<s[i].name<<endl;
		cout<<"Roll number:"<<s[i].roll<<endl;
		cout<<"Age:"<<s[i].age<<endl;
	}
	for(i=0;i<5;i++)
	{
		cout<<"Enter student rollnumber:";
		cin>>search;
		if(s[i].roll==search)
		{
			cout<<"Student found!"<<endl;
			cout<<"Student Name:"<<s[i].name<<endl<<"Student rollnumber:"<<s[i].roll<<endl<<"Student age:"<<s[i].age;
			found=1;
			break;
		}
	}
	 if(found==0)
	 {
		cout<<"Student is not found"<<endl;

	}

	getch();
}
