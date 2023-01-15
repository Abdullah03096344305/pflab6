#include<iostream>
using namespace std;
char grade(int num);
main()
{
    int num;
    char a;
cout<<"enter your number: ";
cin>>num;
a=grade( num);
cout<<a;

}
char grade(int num)
{
if (num>=85 && num<=100 )
{
    return 'A';
}
else if (num>=81 && num<=85)
{
   return 'B';
}
else if (num>=71 && num<=80)
{
    return 'C';
}
else if (num>=61 && num<=70)
{
    return 'D';
}
else if (num>=50 && num<=60)
{
    return 'E';
}
else
return 'F';




}