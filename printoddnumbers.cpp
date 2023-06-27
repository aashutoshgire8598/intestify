#include<iostream>
using namespace std;

bool isodd(int num)
{
    if(num%2==0)
    {
       return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
      if(isodd(i))
      {
        cout<<i<<" ";
      }
    }

    return 0;
}