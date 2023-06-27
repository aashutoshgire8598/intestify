#include<iostream>
using namespace std;

int main()
{
   int array[]={-4,-3,-1,0,2,10};
   int n;
   cin>>n;

   int result[n];
   int i=0,j=n-1,k=n-1;
   while(i<=j && k>=0)
   {
     if(abs(array[i]>array[j]))
     {
       result[k]=array[i]*array[j];
       i++;
       k--;
     }     

     else if(abs(array[i]<array[j]))
     {
       result[k]=array[j]*array[j];
       j--;
       k--;
     }
   }

   for(int i=0;i<n;i++)
   {
     cout<<result[i];
   }

   return 0;
}