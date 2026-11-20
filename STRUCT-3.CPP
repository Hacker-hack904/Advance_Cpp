#include<iostream.h>
#include<conio.h>
struct marks
{
	int css;
	int javascript;
	int html;
	float total;
	char name[30];
};
void main()
{
	marks m1;
	clrscr();
	cout<<"Enter Student name:";
	cin>>m1.name;
	cout<<"Enter HTML marks:";
	cin>>m1.html;
	cout<<"Enter CSS marks:";
	cin>>m1.css;
	cout<<"Enter Javacript marks:";
	cin>>m1.javascript;
	cout<<"-----Deatails-----"<<endl;
	cout<<"Name of student:"<<m1.name<<endl;
	cout<<"Marks of HTML:"<<m1.html<<endl;
	cout<<"Marks of CSS:"<<m1.css<<endl;
	cout<<"Marks of JS:"<<m1.javascript<<endl;
	cout<<"Total of marks:"<<m1.html+m1.css+m1.javascript<<endl;
	getch();
}