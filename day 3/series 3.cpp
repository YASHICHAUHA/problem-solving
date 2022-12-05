#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the vlue of n"<<endl;
	cin>>n;
	int x;
	cout<<"enetr the value of x"<<endl;
	cin>>x;
	int fact=1;
	float sum=1;
	for(int i=1;i<=n;i++)
	{
	   fact=fact*i;
	   sum=sum+(pow(x,i)/fact);
	   }
 cout<<sum<<endl;
	
}
