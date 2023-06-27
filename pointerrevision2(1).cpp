#include<iostream>
using namespace std;

int main()
{
   int array[]={5,10,15,20,25};
   int n=5;
   int x=10;
   int i=0;
   int j=n-1;
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

   if(found==true)
   {
     cout<<"yes";
   }
   else
   {
     cout<<"no";
   }

   return 0;
}