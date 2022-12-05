//program  to find if the given string is a valid  c language identifier
#include<iostream>
#include<string.h>
using namespace std;
int main()
{   int i;
	string str;
	getline(cin,str);
	if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' &&str[i]<='z')||(str[i]>='0'&&str[i]<='9')||(str[i]=='_'))
	
		cout<<"the given string is a valid c language identifier"<<endl;
	
	else
	
		cout<<"the given string is not valid c language identifier"<<endl;

	return 0;
}
