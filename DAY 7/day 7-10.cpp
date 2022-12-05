//program for charcter by character frequency count
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0;
    int l=0;
    char str[20];
    cin.getline(str,'s');
    while(str[i]!='\0')
    {
    	i++;
    	l++;
	}
	for(i=0;i<=l;i++)
	{
		int c=1;
		for(int j=i+1;j<=l;j++)
		{
			if(str[i]==str[j])
			{
				c++;
				str[j]='\0';
			}
		}
		if(str[i]!='\0')
		{
			cout<< str[i] <<c;
		}
	}
}
