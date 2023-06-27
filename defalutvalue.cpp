#include<iostream>
using namespace std;

void fun(int x,int y=100,int z=30,int a=25)
{
    cout<<x<<" "<<y<<" "<<z<<" "<<a;
}

int main()
{
    fun(1);
    return 0;
}