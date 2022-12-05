#include<iostream>
using namespace std;
int main()
{ 
	for(char i= 'A';i<='D';i++)
	{
		for(char j='A';j<=i;j++)
		{
			char count=i+j-'A';
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
return 0;
}

