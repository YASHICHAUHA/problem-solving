#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	int i;
	int j=0;
	cout<<"enter the value of string"<<endl;
	getline(cin,str);
	for(i=0;i<=str[i];i++)
	{
   if(str[i]!=' ')
   {
   	str[j]=str[i];
   	j++;
   }
}
   for(j=0;str[j]!=' ';j++){
      cout<<str[j];}
	return 0;
	
}
