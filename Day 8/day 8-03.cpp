/*consider a non negative integer num,repetedly add all it's 
digit until the result has only one digit.for ex,if we consider 98,
we get 9+8=17 after first addition then we get 1+7=8 we stop,
at this point becz we are left with one digit..*/ 
#include<iostream>
using namespace std;
int main()
{ int num;
  int sum=0;
	 cout<<"enter the num"<<endl;
	 cin>>num;
	 do{
	 sum=0;
	 while(num>0) {
	 	sum=sum+num%10;
	 	 num=num/10;}
	 	 num=sum; 
}while(sum>9);
printf("%d",sum);
}
/*while(num>0||sum>9){
		if(num==0)
		{num=sum;
		sum=0;} 
		sum=sum+num%10;
		num=num/10;
	}
	cout<<sum;
}*/

