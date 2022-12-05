#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter rthe value of n"<<endl;
	cin>>n;
	int count;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			count=i+j-1;
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}

