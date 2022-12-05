#include<iostream>
#include<string.h>
using namespace std;
int main()
{   int n;
	char string[100];
    cin.getline(string,'s');
    int i;
    for(i=0;string[i]!='\0';i++)
    {
    	if(string[i]>='a'&&string[i]<='z')
    	{
    		string[i]=string[i]-32;
		}
	}
	cout<<string<<endl;
	for(i=0;string[i]!='\0';i++)
    {
    	if(string[i]>='A'&&string[i]<='z')
    	{
    		string[i]=string[i]+32;
		}
	}
	cout<<string<<endl;
}
