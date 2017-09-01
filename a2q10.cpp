# cs-assignment-2
//question 10
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
double a,b,c,d,e,f,g,h;
cout<<"enter subject 1 marks : ";
cin>>a;
cout<<"enter subject 2 marks : ";
cin>>b;
cout<<"enter subject 3 marks : ";
cin>>c;
cout<<"enter subject 4 marks : ";
cin>>d;
cout<<"enter subject 5 marks : ";
cin>>e;
f=a+b+c+d+e;
g=f/5;
h=(f*100)/500;
cout<<"total marks : "<<f;
cout<<"average marks : "<<g;
cout<<"percentage : "<<h<<"%";
return 0;
}
