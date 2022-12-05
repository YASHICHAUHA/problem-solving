#include<iostream>
using namespace std;
void mean(int n)
{
	int  sum=0;
	int median;
	int m;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
		m=(sum/n);
		cout<<m<<endl;
	 if(n%2==0)
	 {
	 	median=((n+1)/2);
	}
	else
	{
		median=(((n/2)+(n/2)+1)/2);
	}
	cout<<median<<endl;
}    
int main()
{
	int n;
	cin>>n;
	mean(n);
	return 0;
	
}






