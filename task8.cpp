#include<iostream>
using namespace std;
float final(float budget,string category,int members,float a);
main()
{
float budget;
float transportation,a;
string category;
int members;
cout<<"enter your budget: ";
cin>>budget;
cout<<"enter category: ";
cin>>category;
cout<<"enter members numbers: ";
cin>>members;
a=final(budget,category,members,a);
  
 if(a<budget && a<5000)
 {
 cout<<"Yes! You have "<<a<<" QR left. ";
 }
 if(a>5000) 
 {
  cout<<"Not Enough Money! you need "<<a<<"QR";  
 }
 
}
float final(float budget,string category,int members,float a)
{
    float transportation;

if(members>=1 && members<=4 && category=="vip")
{
transportation=(budget*75)/100;
a=(budget-transportation)-(members*499.99);
return a;
}

if(members>=1 && members<=4 && category=="normal")
{
transportation=(budget*75)/100;
a=(budget-transportation)-(members*249.99);
return a;
}

if(members>=5 && members<=9 && category=="vip")
{
transportation=(budget*60)/100;
a=(budget-transportation)-(members*499.99);
return a;
}

if(members>=10 && members<=24  && category=="normal")
{
transportation=(budget*50)/100;
a=(budget-transportation)-(members*249.99);
return a;
}

if(members>=25 && members<=49 && category=="vip")
{
transportation=(budget*40)/100;
a=(members*499.99)-(budget-transportation);
return a;
}

if(members>=25 && members<=49 && category=="normal")
{
transportation=(budget*40)/100;
a=(members*249.99)-(budget-transportation);
return a;
}

if(members>=50 && category=="vip")
{
transportation=(budget*25)/100;
a=(members*499.99)-(budget-transportation);
return a;
}

if(members>=50 && category=="normal")
{
transportation=(budget*25)/100;
a=(members*249.99)-(budget-transportation);
return a;
}
return 0;

}