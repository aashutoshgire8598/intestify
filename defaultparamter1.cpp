#include<iostream>
using namespace std;

int add(int a,int b=1,int c=2)//default parameter
{
    return(a+b+c);
}

int main()
{
    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,3,5)<<endl;
    return 0;
}