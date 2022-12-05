#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	int sum=0;
	int fact=1;
	{
		for(int j=1;j<=n;j++)
		{
			fact=fact*j;
			sum=sum+fact;
			
		}
		cout<<sum<<endl;
	}
	
}

