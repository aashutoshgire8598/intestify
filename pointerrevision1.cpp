#include<iostream>
using namespace std;
      
int main()
{   
   int array[]={-2,-1,0,3,6,8,11,12};
   int n=8;  
   int i=0;
   int j=n-1;
   int x=14;
   bool found=false;

   while(i<j)
   {
     if(array[i]+array[j]==x)
     {
       found=true;
       break; 
     }  
     else if(array[i]+array[j]<x)
     {
       i++;
     }
     else
     {
       j--;
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