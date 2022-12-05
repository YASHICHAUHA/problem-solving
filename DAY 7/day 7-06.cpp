#include<iostream>
#include<string.h>
using namespace std;
int main()
{     int i,j;
int flag=0;
	char str1[100],str2[70];
	cout<<" enter the string "<<endl;
	cin.getline(str1,'s');
	cout<<" enter the second string "<<endl;
	cin.getline(str2,'s');
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		j++;
	}
	if(i!=j)
	{
		cout<<"sorry,string are not equal to one another"<<endl;
			}
	else
	   {
	if(str1[i]==str2[j])
	{
		cout<<"are equal";
	}
	else
	{
		cout<<"no"<<endl;
	}
	}
}
