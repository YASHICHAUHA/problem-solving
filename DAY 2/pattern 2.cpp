#include<iostream>
using namespace std;
int main()
{ char c,A;
	cout<<"enter the value of a"<<endl;
	cin>>c>>A;
	for(char i= A;i<=c;i++)
	{
		for(char j=A;j<=i;j++)
		{
			char count=i+j-A;
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
return 0;
}

