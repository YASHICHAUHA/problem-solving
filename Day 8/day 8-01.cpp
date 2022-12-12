//find the roots of a quadric equation.
#include<iostream>
#include<cmath>
using namespace std;    
int main()
{   float a,b,c,d,x1,x2,realpart,imagpart;
	cout<<"enter the equation"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/2;
		cout<<"roots are real and different"<<endl;
	    cout<<"x1= "<< x1 <<endl;
		cout<<"x2= "<<x2 <<endl;
		}
	else if(d==0)
	{
		cout<<"root are real and same"<<endl;
		x1=-b/(2*a);
		cout<<"x1 = x2= "<<x1<<endl;
	}
	else
	{
	 realpart=-b/(2*a);
	 imagpart=sqrt(-d)/(2*a);
	 cout<<"roots are complex and different"<<endl;
	 cout<<"x1= "<<realpart	<<"+"<<imagpart<<"i"<<endl;
	 cout<<"x2= "<<realpart<<"-"<<imagpart<<"i"<<endl;
	}
	return 0;
}

