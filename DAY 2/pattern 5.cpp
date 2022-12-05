#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 int t;
 int count;

  for(int i=1;i<=n;i++)	
 { 
 	for(int j=1;j<=i;j++)
 	{
 		count=i+j-5;
	  cout<<count<<" ";
	  count--;
	 }
	
	 cout<<endl;
 }
 return 0;
}
