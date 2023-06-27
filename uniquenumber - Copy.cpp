#include<iostream>
using namespace std;

int main()
{
  int array[]={2,1,2,4,1,5,4,5,8};

  for(int i=0;i<7;i++)
  {
    for(int j=i+1;j<7;j++)
    {
      if(array[i]==array[j])
      {
        array[i]=array[j]=-1;
      }
    }
  }

  for(int i=0;i<7;i++)
  {
   if(array[i]>0)
   {
     cout<<array[i]<<endl;   
   }
  }

  return 0;
}