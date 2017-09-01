# cs-assignment-2
// question 12
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 double p,t,r,ci,n;
 cout<<"Enter the principal : ";
 cin>>p;
 cout<<"Enter the time : ";
 cin>>t;
 cout<<"Enter the rate : ";
 cin>>r;
 cout<<"Enter the number of compounding periods per unit : ";
 cin>>n;
 ci=p*pow((1+r/n),n*t);
 cout<<"Compounf intrest : "<<ci;
 return 0;
}
