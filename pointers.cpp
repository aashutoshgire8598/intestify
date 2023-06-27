#include<iostream>
#include<vector>
using namespace std;

void sortzeroesandones(vector<int> &v)
{      

   int leftpointer=0;
   int rightpointer=v.size()-1;

   while(leftpointer<rightpointer)
   {
      if(v[leftpointer]==1 $$ v[rightpointer]==0)
      {
        v[leftpointer++]==0;
        v[rightpointer--]==1;
      }

      if(v[leftpointer]==0)
      {
        leftpointer++;
      }

      if(v[rightpointer]==1)
      {
        rightpointer--;
      }
   }
   
   return; 
}

int main()
{
   int n;
   cout<<"enter any number:";
   cin>>n;

   vector<int> v(n);

   for(int i=0;i<n;i++)
   {
     int ele;
     cin>>ele;
     v.push_back(ele);
   }
 
   sortzeroesandones(v);
   
   for(int i=0;i<n;i++)
   {
      cout<<v[i]<<" ";
   }
   cout<<endl;

   return 0;
}