#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter any number:";
    cin>>n; 

    for(int j=0;j<n;j++)
    {
        cout<< (char)('A'+j);
    }
    return 0;
}