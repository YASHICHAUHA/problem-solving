/*there are some coins that are given to you of the same denomation the 
coins are arrange on a table to form a pyramid.if the cirumference of the coin is
given,find the area of the triangle formed by the coins if the coins do 
not form triangle print -1;*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{ int c,b;
float r,A;
int n;
	cout<<"enter the no of coins"<<endl;
	cin>>c;
	cout<<"enter the value of circumference"<<endl;
	cin>>n;
	
	if(c==3)
	{
		r=n/(2*3.14);
		b=2*r;
		A=(sqrt(3)/4)*(b*b);
		cout<<" Area of the triangle is"<<A<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
}
