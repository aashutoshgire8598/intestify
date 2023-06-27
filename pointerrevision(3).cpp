#include<iostream>
using namespace std;

int main()
{
   int array[]={9,23,45,69,78};
   int n=5;
   int i=0;
   int j=n-1;
   int x=56;
   bool found=false;

   while(i<j)
   {
     if(array[j]-array[i]==x)
     {
       found=true;
       break;
     }
     else if(array[j]-array[i]<x)
     {
       j++;
     }
     else
     {
       i++;
     }
   }

   if(found=true)
   {
     cout<<"yes";
   }
   else
   {
    cout<<"no";
   }

   return 0;
}