#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	int x;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"enter the value of x"<<endl;
	cin>>x;
	float sum=1;
	int fact=1;
	for(int i=1;i<=n;i++)
	 {
	   fact=fact*i;
	   sum=sum+(pow(-x,i)/fact);
	 }
	 cout<<sum<<endl;
	 return 0;
}

