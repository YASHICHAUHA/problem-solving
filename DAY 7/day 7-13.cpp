//sort the given city name in dictonary order
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char name[10][15], array[10];
int x,y;
cout<<"enter city names: ";
for(x=0;x<4;x++)
{
	cin>>name[x];
}
for(x=1;x<4;x++)
{
	for(y=1;y<4;y++)
	{
		if(strcmp(name[y-1],name[y])>0){
			strcpy(array,name[y-1]);
			strcpy(name[y-1],name[y]);
			strcpy(name[y],array);
		}
	}
}
cout<<"\n alphabetical order of names :\n";
for(x=0;x<10;x++)
{
	cout<<name[x]<<endl;
	cout<<endl;
}
return 0;
}

