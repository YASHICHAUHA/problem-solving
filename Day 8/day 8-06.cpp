/* Given radius of a circle,find area of the largest possible
rrectangle which may be enclosed completely within it*/
#include<iostream>
using namespace std;
int main()
{
	int r;
	float a,area;
	cout<<"enter radius of a circle"<<endl;
	cin>>r;
	a=(3.14*r*r);
	cout<<"area of circle:"<<a<<endl;
	int arearect=(r*r);
	cout<<"area of the rectangle is:"<<arearect<<endl;
	return 0;
}
