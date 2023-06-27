#include<iostream>
using namespace std;

void changevalue(int z)
{
    z=100;
    cout<<z<<endl;
}

int main()
{
    int a=5;
    changevalue(a);
    cout<<a;
    return 0;
}