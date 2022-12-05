#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the side of the triangle"<<endl;
	cin>>a>>b>>c;
	if(a==b&&b==c)
	{
		cout<<"it is an equilateral triangle"<<endl;
	}
	else if(a==b||b==c||c==a)
	{
		cout<<"it is an issoscele triangle"<<endl;
	}
	else{
		cout<<"it is a scelene triangle"<<endl;
	}
	return  0;
	
}
