#include<iostream>
using namespace std;

int p=5;
void print()
{
    cout<<p;
}

int main()
{
    int p=7;
    cout<<p<<"\n";
    cout<<::p<<"\n";
    print(); 
    return 0;
}