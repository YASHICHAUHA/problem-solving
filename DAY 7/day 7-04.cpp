//it's to count the words in a paragraph by using string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[1000];
	cin.getline(string,'s');
	int i;
	int count =1;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i] == ' ')
		{
			count++;
		}
	
	}
	cout<<count<<endl;
}
