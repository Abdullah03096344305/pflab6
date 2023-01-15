#include <iostream>
using namespace std;

int isgreatest(int n1,int n2,int n3);
main()
{
    int n1,n2,n3,a;
    cout<<"enter no 1: ";
    cin>>n1;
    cout<<"enter no 2: ";
    cin>>n2;
    cout<<"enter no 3: ";
    cin>>n3;
    a=isgreatest(n1,n2,n3);
    cout<<a<<" Number is Greater:";
}
int isgreatest(int n1,int n2,int n3)
{

if (n1>n2 && n1>n2)
{
    return n1;
}
if (n2>n3 && n3>n3)
{
    return n2;
}
else
return n3;

return 0;

}