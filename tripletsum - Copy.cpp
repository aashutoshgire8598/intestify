#include<iostream>
using namespace std;

int main()
{
   int array[]={1,2,3,4,5,6,7,8,9,10};
   int targetsum=6;

   int triplets=0;
   for(int i=0;i<10;i++)
   {
     for(int j=i+1;j<10;j++)
     { 
       for(int k=i+2;k<10;k++)
       {
         if(array[i]+array[j]+array[k]==7)
         {
           triplets++;
         }
       }
     } 
   }
   cout<<triplets<<endl;

   return 0;
}