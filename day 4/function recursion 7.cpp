#include<bits/stdc++.h>
using namespace std;
void strongnumber(int n)
{
	for(int i=1;i<=n;i++)
	{
		if (sqrt(i) == (int)sqrt(i))
	  cout<<i<<" ";	
	}
}
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;	
	strongnumber(n);
	return 0;
	
}
