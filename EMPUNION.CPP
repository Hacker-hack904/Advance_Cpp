//Take employee id from the user and display it
#include<iostream.h>
#include<conio.h>
union employee        //Union access only 1 member
{
	int id;
	float salary;
};
void main()
{
	employee e1;
	clrscr();
      //	cout<<"Employee ID:";
      //	cin>>e1.id;
	cout<<"Employee salary:";
	cin>>e1.salary;
    //	cout<<"Employee ID is:"<<e1.id<<endl;
	cout<<"Employee salary is:"<<e1.salary<<endl;
	getch();
}