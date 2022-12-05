#include<iostream>
using namespace std;
void gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	cout<<b<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	gcd(a,b);
	return 0;
}
