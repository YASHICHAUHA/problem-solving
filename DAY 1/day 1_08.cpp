#include<bits/stdc++.h>
using namespace std;
int dayofweek(int d,int m,int y)
{
	static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
	y-=m<3;
	return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}
int main()
{
	int day=dayofweek(6,12,2022);
	cout<<day;
	return 0;
}
