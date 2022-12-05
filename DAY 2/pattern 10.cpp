#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=n;i>=n-2;i--)
	{
		for(int j=1;j<=i;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i=4;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		if(j<=n-i)
			{
			cout<<" ";
		}
		else
		{
			cout<<"*";
		}
	
		cout<<endl;
	}
	return 0;
}
