#include <iostream>
using namespace std;

class employee
{
	private:
		int emp_code;
		char emp_name[35];
		char city[25];
		float basic_salary,ta,da,hra,pf,net_salary;
	public:
	void get_emp_info()
	{
		cout<<"Enter employee code:";
		cin>>emp_code;
		cout<<"\tEnter name of employee:";
		cin>>emp_name;
		cout<<"\tEnter city:";
		cin>>city;
		cout<<"\tEnter basic salary of employee:";
		cin>>basic_salary;
		cout<<"\tEnter travaling allowence(in %):";
		cin>>ta;
		cout<<"\tEnter dearness allowence(in %):";
		cin>>da;
		cout<<"\tEnter hra(in %):";
		cin>>hra;
		cout<<"\tEnter pf(in %):";
		cin>>pf;
	}
	void calculate();

	void show_emp_info();
};
void employee::calculate()
{
	float ta_amt,hra_amt,pf_amt,da_amt;
	ta_amt=(basic_salary*ta)/100;
	da_amt=(basic_salary*da)/100;
	hra_amt=(basic_salary*hra)/100;
	pf_amt=(basic_salary*pf)/100;
	net_salary=basic_salary+ta_amt+hra_amt+da_amt-pf_amt;
}
void employee::show_emp_info()
{
	cout<<"\tEmployee code:"<<emp_code<<endl;
	cout<<"\tEmployee name:"<<emp_name<<endl;
	cout<<"\tEmployee city:"<<city<<endl;
	cout<<"\tEmployee basic salary:"<<basic_salary<<endl;
	cout<<"\tEmploye net salary:"<<net_salary<<endl;
}
int main()
{
	employee e1;
	e1.get_emp_info();
	e1.calculate();
	e1.show_emp_info();
	return 0;
}