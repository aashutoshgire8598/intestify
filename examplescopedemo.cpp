#include<iostream>
using namespace std;

int a=5;
void fun()
{
    cout<<a;
}

int main()
{
    int a=4;
    {  
        int p=5,q=3;
    }   
        
    a++; 
    cout<<a;
    return 0;
}