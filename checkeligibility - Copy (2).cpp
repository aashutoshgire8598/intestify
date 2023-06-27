#include<iostream>
using namespace std;

bool checkeligible(int age,int limit)
{
    if(age>=limit)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int votinglimit=18;
    int iseligibleforvoting=checkeligible(21,votinglimit);
    if(iseligibleforvoting)
    {
       cout<<"Yes,eligible for voting";
    }
    else
    {
       cout<<"No,not eligible for voting";
    }

    return 0;
}