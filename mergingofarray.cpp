#include<iostream>
using namespace std;

int main()
{
   int arr1[]={1,2,3};
   int arr2[]={4,5,6};  
   int i=0; //will help us to iterate on array1
   int j=0;//will help us to iterate on array 2
   int k=0;//will help us to iterate on result array
   int n=3;
   int m=3;
   int result[m+n]; // declaration of result error came before m and n shold have been
   //   declared before
   // IN C++ CODES WORK IN ORDER IF YOU BREAK THE ORDER YOU GETR ERROR...
 
   while(i<m and j<n)
   {
     ///both i and j should be within the limits os arr1 and arr2
     if(arr1[i]<arr2[j])
     {
       result[k]=arr1[i];
       i++;
       k++;
     }
    
     else
     {
       result[k]=arr2[j];
       j++;
       k++;
     }

   }

   while(i<m)
   {
     // we got arr1 elements
     result[k]=arr1[i];
     i++;
     k++;  
   }

   while(j<n)
   {
      //we got arr2 elements
     result[k]=arr2[j];
     j++;
     k++;
   }

   for(int i=0;i<(m+n);i++)
   {
     cout<<result[i]<<" ";
   }

   return 0;
}