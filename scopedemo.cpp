#include<iostream>
using namespace std;

string name="sanket";

void fun()
{
    cout<<name<<"\n";
}

int main()
{
    cout<<name<<"\n";
    name="sarthak";
    fun();
    return 0;
}