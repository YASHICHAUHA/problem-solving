#include<iostream>
using namespace std;
int main()
{
	int  n;
	int fact=1;
	int sum=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		
			fact=fact*i;
		sum=sum+(fact/i);
	}
	cout<<sum<<endl;
	return 0;	
	
}
