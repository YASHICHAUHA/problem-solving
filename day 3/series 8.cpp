#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		{
			sum=sum+i*(i+1)*(i+2);	
		}
		}
		cout<<sum<<endl;
	
	return 0;
}
