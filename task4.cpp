#include<iostream>
using namespace std;
string speeding(float speed);

main()
{
    float speed;
    string a;
cout<<"enter speed: ";
cin>>speed;
a=speeding(speed);
cout<<a;

}
string speeding(float speed)
{
if(speed<=10)
{
    return "slow";
} 
else if (speed>10 && speed<=50)
{
    return "average";
}
else if (speed>50 && speed<=150)
{
    return "fast";
}
else if (speed>150 && speed<=1000)
{
    return "ultra fast";
}
else if (speed>1000)
{
    return "extremely fast";
}
else
{
    return 0;
}







}