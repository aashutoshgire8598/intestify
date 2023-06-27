#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"enter any number:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<(n-i);k++)
        {
              cout<<" ";
        }         
        for(int j=0;j<2*i-1;j++)
        {
         cout<<(char)('A'+j);
        } 
        cout<<endl; 
    }
    for(int i=n+1;i<2*n-1;i++)
    {
        for(int l=0;l<(i-n);l++)
        {
          cout<<" ";
        }
        for(int m=0;m<2*(2*n-i)-1;m++)
        {
          cout<<(char)('A'+m);
        }
         cout<<endl;
    }

    return 0;
}