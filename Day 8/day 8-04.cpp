/*given an odd digit number N,you need to find whether the given number is 
a balanced number or not.an odd digit number is called a balanced numberif
the sum of all digits to the left of th digit and the sum of alldigits
to the right of the middle digit is equal;
note:-the number of the digit 1234006 is 7. i.e. odd digits the middle
digit is 4 LHS IS 1+2+3=6 and the sum is 6;*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	int l=0;
	int r=0;
	cout<<"enter the valid string"<<endl;
	getline(cin,s);
	for(int i=0;i<s.size()/2;i++)
	{
		l= l+ int (s[i]);
		r= r+ int (s[s.size()-i-1]);
	}
	if(l==r)
	{
		cout<<"balanced"<<endl;
		
	}
	else
	{
		cout<<"not balanced"<<endl;
	}
	return 0;
}

