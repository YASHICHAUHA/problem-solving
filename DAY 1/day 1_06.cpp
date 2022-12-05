#include<iostream>
using namespace std;
int main()
{
	int co1,co2;
	cout<<"enter the value of x and y"<<endl;
	cin>>co1>>co2;
	if(co1>0 && co2>0)
	{
		cout<<"lies in the first quadrant"<<endl;
	}
	else if( co1<0 && co2>0)
	{
		cout<<"lies in the second quadrant"<<endl;
     }
     else if(co1<0 && co2< 0)
     {
     	cout<<"lies in the third quadrant"<<endl;
	 }
	else if(co1>0 &&co2<0)
	{
		cout<<"lies in the fourth quadrant"<<endl;
	}
	else if(co1== 0 && co2 ==0)
	{
		cout<<"lies int the origin"<<endl;
	}
}
