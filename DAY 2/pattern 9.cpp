#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ente rthe avlue of n"<<endl;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
			cout<<endl;
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
	
		}
		cout<<endl;
	}
	return 0;
}
