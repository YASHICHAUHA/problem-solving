#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int i=0;
 int l=0;
char str[20];
cout<<"enter the string"<<endl;
cin.getline(str,'s');
while(str[i]!='\0')
{
	
	i++;
	l++;
}
cout<<l;
}
