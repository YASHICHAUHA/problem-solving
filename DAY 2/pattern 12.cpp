#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 for(int i=1;i<=n;i++){
 for(int j=5;j<=i;j++)
 { 
 cout<<j;
 }
 cout<<endl;
}
return 0;
}
