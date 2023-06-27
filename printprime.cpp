#include<iostream>
using namespace std;

bool isprime(int num)
{
    for(int i=2;i<=(num-1);i++)
    {
        if(num%i==0) 
        return false;
    }
    return true;
}

bool isprimebtr(int num)
{
    for(int i=2;i*i<=num;i++)
    {
       if(num%i==0)return false;
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(isprimebtr(i))
        {
            cout<<i<<" ";
        }
    }

    return 0;
}