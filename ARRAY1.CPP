#include<iostream.h>
#include<conio.h>
void main()
{
	int i=0,num[]={1,2,3,4,5};     //in this i intialized with 0 because array index starts from 0(zero)
	clrscr();

       /*	while(i<5)
	{
		cout<<"Numbers "<<"are "<<num[i]<<endl;
		i++;
	}*/
	/*do{
		 cout<<"Numbers "<<"are "<<num[i]<<endl;
		i++;
	}while(i<5);*/
	for(i=0;i<5;i++)
	{
		cout<<"Numbers are "<<num[i]<<endl;
	}
	getch();


}