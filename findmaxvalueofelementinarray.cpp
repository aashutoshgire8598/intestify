#include<iostream>
using namespace std;


int main()
{
    int array[]={10,20,30,40}

    int max=1;

    for(int i=1;i<4;i++)
    {
      if(array[i]>max)
      {
        max=array[i];
      }
    }

    cout<<max;

    return 0;
}