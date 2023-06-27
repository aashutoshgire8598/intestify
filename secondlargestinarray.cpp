#include<iostream>
using namespace std;

int largestelementindex(int array[],int size)
{
  int max=INT16_MIN;
  int maxindex=-1;
  for(int i=0;i<8;i++)
  {
    if(array[i]>max)
    {
      max=array[i];
      maxindex=i;
    }
  }
  return maxindex;
}

int main()
{
   int array[]={1,2,3,4,5,6,7,8};

   int indexoflargest=largestelementindex(array,8);
   cout<<array[indexoflargest]<<endl;

   int largestelement=array[indexoflargest];
   for(int i=0;i<8;i++)
   {
      if(array[i]==largestelement)
      {
         array[i]=-1;
      }    
   }
      
    int indexofsecondlargest=largestelementindex(array,8); 
    cout<<array[indexofsecondlargest]<<endl;

   return 0;
}