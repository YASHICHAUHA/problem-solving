// given two numbers A and B, find kth digit from right of A to the  power B
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of the numbers"<<endl;
	cin>>a>>b;
	int p=pow(a,b);
	cout<<"A to the power B is :"<<p<<endl;
	int rem=p%10;
	cout<<"k digit from right of A to the power B is :"<<rem<<endl;;
	return 0;
	
	
}
