#include<iostream>
using namespace std;
 float screening(float rows,float coloumns,string screen); 
main()
{
string screen;
float rows,coloumns;
float total;
cout<<"enter screen type: ";
cin>>screen;
cout<<"enter rows number: ";
cin>>rows;
cout<<"enter cloumns number: ";
cin>>coloumns;
total=screening(rows,coloumns,screen);
cout<<total;

}
float screening(float rows,float coloumns,string screen)
{
    float total;
if(screen=="premiere")
{
    total=rows*coloumns*12;
return total;
}
else if (screen=="normal")
{
     total=rows*coloumns*7.50;
return total;
}
else if (screen=="discount")
{
     total=rows*coloumns*5;
return total;
}
return 0;
}