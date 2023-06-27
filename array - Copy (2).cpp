#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4};
    cout<<sizeof(array)<<endl; 
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    
    int array2[4]={5,6,7,8};
    for(int i=0;i<=3;i++)
    {
      cout<<array2[i];
    }    
    return 0;
}