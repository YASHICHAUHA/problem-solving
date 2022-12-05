//program for finding all prefixes of a string       
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str1;
    getline(cin,str1);
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	for(int j=0;j<i;j++)
	{
		for(int k=i-1;k>=i-1-j;k--)
		{
			cout<<str1[k];
		}
		cout<<endl;
	}
	return 0;
}


