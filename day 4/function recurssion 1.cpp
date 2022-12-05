#include<iostream>
using namespace std;
void palindrom(int num)
{
	int rev=0,rem,temp;
	temp=num;
	while(temp>0)
{
	rem=temp%10;
	rev=(rev*10)+rem;
	temp=temp/10;
}
if(rev==num)
{
	cout<<"it is a palindrom number"<<endl;
}
else
cout<<"it is not a palindrom number"<<endl;
}

int main()
{
	
   int num;
   cin>>num;
   palindrom(num);
   return 0;
}

