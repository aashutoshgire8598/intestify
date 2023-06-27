#include<iostream>
using namespace std;

int array[]={100,1000,10000,100000,1000000};
int main()
{
    int index=0;
    while(index<5)
    {
        cout<<array[index]<<endl;
        index++;
    }
    return 0;
}