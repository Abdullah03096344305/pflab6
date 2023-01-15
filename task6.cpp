#include<iostream>
using namespace std;

float lowestprice(int kilometer,string time);

main()
{
    int kilometer;
    string time;
      float a;

cout<<"enter kilometeres: ";
cin>>kilometer;
cout<<"enter time of the day e.g. Day/Night: ";
cin>>time;
a=lowestprice(kilometer,time);
cout<<a;
}
float lowestprice(int kilometer,string time)
{
    float a;
if(kilometer<20 && time=="day")
{
    a=((0.79*kilometer)+ 0.70);
return a;
}
else if (kilometer<20 && time=="night")
{
    a=((0.90*kilometer)+ 0.70);
return a;
}
else if (kilometer>= 20 && kilometer<= 100 && time=="day" )
{
    a=(0.09*kilometer);
return a;
}
else if (kilometer>=100)
{
    a=(kilometer*0.06);
return a;
}
  
}