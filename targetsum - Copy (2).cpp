#include<iostream>
using namespace std;

int main()
{
   int array[]={3,5,6,2,1,4};
   int targetsum=7;

   int pairs=0;
   for(int i=0;i<6;i++)
   {
     for(int j=i+1;j<6;j++)
     {
       if(array[i]+array[j]==7)
       {
        pairs++;
       }
     }
   }
   cout<<pairs<<endl;   

   return 0;
}