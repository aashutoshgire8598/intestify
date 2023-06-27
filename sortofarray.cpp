#include<iostream>
#include<vector>
using namespace std;

void sortzeroesandones(vector<int> &v)
{
   int zeroes_count=0;
  
   ///for couting zeroes

   for(int ele:v)
   {
     if(ele==0)
     {
        zeroes_count++;
     }
   }
   
   for(int i=0;i<v.size();i++)
   {
     if (i<zeroes_count)
     {
       v[i]=0;
     }
     else
     {
        v[i]=1;
     }      
   }
   return; 
}

int main()
{
   int n;
   cout<<"enter any number:";
   cin>>n;

   vector<int> v(n);

   for(int i=0;i<n;i++)
   {
     int ele;
     cin>>ele;
     v.push_back(ele);
   }
 
   sortzeroesandones(v);
   
   for(int i=0;i<n;i++)
   {
      cout<<v[i]<<" ";
   }
   cout<<endl;

   return 0;
}