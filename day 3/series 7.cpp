#include<iostream>
using namespace std;
int sumofn(int n){
	float sum=1.0;
	int fact=1;
	
	for(int i=2;i<=n;i++)
	{
		if((i%2)==0){
			
			fact=fact*((2*i)+1)*(2*i);
		    sum=sum+(((i+1)/fact)*(1.0));
		}
		else{
			fact=fact*((2*i)+1)*(2*i);
		    sum=sum-(((i+1)/fact)*1.0);
		}
	    
	}
	
	return sum;
	
}
int main()
{
	 int n;
	cin>>n;
	cout<<sumofn(n)<<endl;
}
