#include<iostream>
using namespace std;
float checkcost(string city,string product,float quantity);
main()
{
string city;
string product;
float quantity;
float a;

cout<<"enter city: ";
cin>>city;
cout<<"enter product: ";
cin>>product;
cout<<"enter quantity: ";
cin>>quantity;
a=checkcost(city,product,quantity);
cout<<a;



}
float checkcost(string city,string product,float quantity)
{
    float a;
if(city=="sofia")
if (product=="coffee")
{
a=quantity*0.50;
return a;
}
else if (product=="water")
{
a=quantity*0.80;
return a;
}
 else if(product=="beer")
{
a=quantity*1.20;
return a;
}
else if(product=="sweets")
{
a=quantity*1.45;
return a;
}
else if(product=="peanuts")
{
a=quantity*1.60;
return a;
}

if(city=="plovdiv")
if (product=="coffee")
{
a=quantity*0.40;
return a;
}
else if (product=="water")
{
a=quantity*0.70;
return a;
}
 else if(product=="beer")
{
a=quantity*1.15;
return a;
}
else if(product=="sweets")
{
a=quantity*1.30;
return a;
}
else if(product=="peanuts")
{
a=quantity*1.50;
return a;
}

if(city=="varna")
if (product=="coffee")
{
a=quantity*0.45;
return a;
}
else if (product=="water")
{
a=quantity*0.70;
return a;
}
 else if(product=="beer")
{
a=quantity*1.10;
return a;
}
else if(product=="sweets")
{
a=quantity*1.35;
return a;
}
else if(product=="peanuts")
{
a=quantity*1.55;
return a;
}

}