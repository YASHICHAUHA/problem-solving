// write a program to calcualte the total salary of a person. the user
// has to entered  the basic salary(an integer) and the grade
//(An upper case character)and depending  upon  which the total salry
//is calculated as- totalsalary=basic+hra+da+allow-pf.where:hra =20%
//of basic ,da=50% of basic,allow=1700 if grade='A' ,allow=1500
// if grade='B',allow=1300 if grade='C' or any other character,
//pf=11% of basic. round  of the total salary and then  print the
//integral part only.//
 #include<iostream>
 using namespace std;
 int main()
 {
 	float totalsalary,basic,hra,da,allow,pf;
 	char grade;
 	cout<<"entered the basic salary"<<endl;
 	cin>>basic;
    hra=(0.2*basic);
 	da=(0.5*basic);
 	cout<<"entered the value of grade"<<endl;
 	cin>>grade;
 	if(grade=='A')
 	{
 		allow=1700;
	 }
	 else if(grade=='B')
	 {
	    allow=1500;
	 }
	 else if(grade=='C')
	 {
	 	allow=1300;
	 }
	 else
	{
	 pf=(11/100)*basic;
	 }
	totalsalary=(basic+hra+da+allow-pf);
	 cout<<"total salary"<<totalsalary<<endl;
}
