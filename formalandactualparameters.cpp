#include<iostream>
using namespace std;

void decrease(int n1,int n2)
{
    n1--;
    n2=n2-2;
    cout<<n1<<":"<<n2<<endl; //n1 and n2 are formal parameters
}

int main()
{
    int a=50;
    int b=40;
    decrease(25,20);
    cout<<a<<":"<<b;  // actual parameters
    return 0;
}