/*given a number N,print least prime factors for all numbers from
1 to N. the least prime factor of an integer N is the smallest 
prime number that divides it. the least prime factor of all even 
number is 2. c a prime number is its  own least prime factor
(as well as own its greatest prime factor):note one need to 
be printed for 1.
input N=6;
output:123252
constraints2<=N<=1000;*/
#include<iostream> 
using namespace std;
int prime(int n)
{
	int i;
	if(n==1)
	return 1;
	else
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			return i;
		}
	}
}
int main()
 {
 int n,i,k;
 cout<<"enter the prime numbers\n"<<endl;
 cin>>n;
 for( i=1;i<=n;i++)
 {
 	k=prime(i);
 	cout<<k;
 }
}
