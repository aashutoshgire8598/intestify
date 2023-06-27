#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
   }

   int N=1e5 + 10;
   vector<int>  freq(N,0);
   for(int i=0;i<n;i++)
   {
     freq[v[i]]++;
   }

   cout<<"enter queries:";
   int q;
   cin>>q;

   while(q--)
   {
     int queryelement;
     cin>>queryelemnt;
     cout<<freq[queryelement]<<endl;
   } 
   return 0;
}