#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter any numbers:";
    cin>>a>>b;

    int product=1;
    
    for(int i=1;i<=b;i++)
    {
        product*=a;
        cout<<product<<endl; 
    }

    return 0;
}