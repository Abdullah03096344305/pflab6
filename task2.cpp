#include<iostream>
using namespace std;
float store(string day,string month,float amount);
main()
{
string day,month;
float amount,discount;
cout<<"enter day: ";
cin>>day;
cout<<"enter month: ";
cin>>month;
cout<<"enter total amount: ";
cin>>amount;
discount=store(day,month,amount);
cout<<discount<<" is after discount";

}
float store(string day,string month,float amount)
{
float discount;
if(day=="sunday" && month=="october" || month=="march" || month=="august")
{
    discount=(amount*90)/100;
    return discount;
}
else if(day=="monday" && month=="november" || month=="december" )
{
    discount=(amount*95)/100;
    return discount;
}
else
{
   cout<<"no discount..";
}
 return 0;
}