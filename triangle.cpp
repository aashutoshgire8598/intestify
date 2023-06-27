#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter any number:";
    cin>>n;
    
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}