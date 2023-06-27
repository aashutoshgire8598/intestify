#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"eneter any number:";
   cin>>n;

   int sum=0;//loop variable
   for(int i=1;i<=n;i++)
   {
      sum+=i;
   }
    cout<<sum<<endl;

    return 0;
}