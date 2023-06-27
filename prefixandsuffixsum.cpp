#include<iostream>
#include<vector>
using namespace std;

bool checkprefixsuffixsum(vector<int> &v)
{
   int TotalSum=0;

   for(int i=0;i<v.size();i++)
   {
   TotalSum+=v[i];
   }

   int prefix_sum=0;
   for(int i=0;i<v.size();i++)
   {
     prefix_sum+=v[i];
     
     int suffix_sum=TotalSum-prefix_sum;

     if(suffix_sum==prefix_sum)
     {
       return true;// return means it finishes process once condition is satisfied it returns 1.
     }
   }
   return false;//it is written after for loop because it will return false after completely gone throgh loop...             
}


int main()
{
   int n;
   cin>>n;

   vector<int> v;

   for(int i=0;i<n;i++)
   {
     int ele;
     cin>>ele;
     v.push_back(ele);
   } 


   cout<<checkprefixsuffixsum(v)<<endl;

   return 0;
}