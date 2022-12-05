#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the word"<<endl;
	cin>>n;
	char string[n+1];
	cin>>string;
	bool count=1;
	for(int i=0;i<n;i++)
	{
		if(string[i]!=string[n-1-i])
		{
			count=0;
			break;
		}
	}
	if(count==1)
	{
		cout<<"Word is a palindrome"<<endl;
		
	}
	else{
	 cout<<"it's not a palindrome"<<endl;
	}
	return 0;
}
