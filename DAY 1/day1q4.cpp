#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year"<<endl;
	cin>>year;
	if(year%400==0)
	{ cout<<"it is a leaap year"<<endl;
	}
	else if(year%100==0)
	{
		cout<<"it is not leap year"<<endl;
	}
	else if(year% 4==0)
	{
		cout<<"it ia a leap year"<<endl;
	}
	else{
		cout<<"it is not aleap year"<<endl;
	}
	return 0;
}
