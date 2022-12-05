#include <bits/stdc++.h>
using namespace std;
void perfectsquare(float l,float n)
{ 
	for( int i=l;i<=n;i++)
	{ 
		if (sqrt(i) == (int)sqrt(i))
	  cout<<i<<" ";	
	}
}
int main()
{
float l;
cin>>l;
 float n;
cin>>n;
	perfectsquare(l,n);
}

