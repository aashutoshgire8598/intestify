#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4};

    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=array[i];      
    }
    cout<<sum<<endl;
    return 0;
}