
#include<iostream>
#include<math.h> //Header file math.h must be included
using namespace std;
int main(){
int num,d=0,n,r,p=0,a=0;// Value of a must be 0
char choice;
cin>>num; //This >> operator is used except <<
cin>>choice;
switch(choice) //spelling of switch is wrong and gets corrected
{
case 'a':// Here a is character so be puts in single couts  also colon was not there
n=num;
while(n!=0)// Here n!=0 must be there
{
n=n/10;
d++;
}
n=num;
while(n!=0)
{
r=n%10;
a=a+pow(r,d);// Here sqr not be there except it pow() function is there 
n=n/10;
}
cout<<a<<"\n"; 
break; //break must be there other wise the next CASE will also be executed 
case 'p': //Here p is a character so be puts in single couts also colo was not there
n=num;
while(n!=0)
{
r=n%10;
p=p*10+r; // double == should not there and p*10 is there except p+10
n=n/10;
}
cout<<p<<"\n";

}
}
// THis below is comments of inputs so be in comments
/*
Sample input-1
152
p

Sample output-1
251
Sample input-2
534
Sample output-2

a
216
*/ 