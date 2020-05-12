#include<iostream>
using namespace std;
int f(int a)
{
    int sum=0,r=0;
    while(a!=0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    return sum;
}
int main()
{
    int sum=0,i=0,j=0,x=0,c=0;
    cin>>sum;
    for(i=10000;i<=99999;i++)
    {
        x=f(i);
        if(x==sum)
        {
            c++;
            cout<<"i = "<<i;
            break;
        }

    }
    if(c==0)
    {
        cout<<"impossible";
    }
    return 0;
}
