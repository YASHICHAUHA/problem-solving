#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the vlue of n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			{
			cout<<j;
			}
		}
		for(int j=1;j<=(n-i)*2;j++)
		{
			cout<<" ";
		}
		for(int j=i;j>0;j--)
		{
		cout<<j;
		}
		cout<<endl;
	}
	return 0;
	
}

