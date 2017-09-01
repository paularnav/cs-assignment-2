# cs-assignment-2
//question 11
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,d,e;
cout<<"enter principal amount : ";
cin>>a;
cout<<"enter rate amount : ";
cin>>b;
cout<<"enter time (in years) : ";
cin>>c;
 d=a*(1+b*c/100);
e=d-a;
cout<<"interest : "<<e;
return 0;
}
