#include<iostream>
using namespace std;
int factorial(int n)
{
	int sum=1;
if(n>0)
{
for(int i=1;i<=n;i++)
{ 
 sum=sum*i;
}
cout<<sum<<endl;
}
else{
	factorial(n-1);}
}
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	factorial(n);
	return 0;
	
}
