#include<iostream>
using namespace std;

int main()
{
    int array[]={11,42,58,63,85}

    int num=11;

    int ans=-1;

    for(i=0;i<5;i++)
    {  
    if(num==array[i])
    {
        ans=i;
    }
    }
    cout<<ans<<endl;

    return 0;
}