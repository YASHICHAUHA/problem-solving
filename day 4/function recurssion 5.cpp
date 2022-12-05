#include<iostream>
using namespace std;
void primenumber(int l,int n)
{ 
	for( int i=l;i<n;i++)
	{
		if(i%2!=0)
			{
			cout<<i<<endl;
		   }
		
		
	}
}
int main()
{
	int l;
	cout<<"enter the value of l"<<endl;
	cin>>l;
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	primenumber(l,n);
}

