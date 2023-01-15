#include<iostream>
using namespace std;
string checktitle(int age,char gender);
main()
{
int age;
char gender;
string a;
cout<<"enter your age: ";
cin>>age;
cout<<"enter your gender: ";
cin>>gender;
a=checktitle(age,gender);
cout<<a;



}
string checktitle(int age,char gender)
{
if(age>=16 && gender=='m')
{
    return "Mr.";
}
else if (age<16 && gender=='m')
{
    return "Master";
}
else if (age>=16 && gender=='f')
{
    return "Ms.";
}
else if (age<16 && gender=='f')
{
    return "Miss";
}
return 0;
}