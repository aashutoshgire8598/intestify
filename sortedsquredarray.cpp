#include<iostream>
#include<vector>
using namespace std;

void sortedsquaredarray(vector<int> &v)
{
   vector<int> ans;

   int leftpointer=0;
   int rightpointer=v.size()-1;

   while(leftpointer<=rightpointer)
   {
     if(abs(v[leftpointer])<abs(v[rightpointer]))
     {
       ans.push_back(v[rightpointer]*v[rightpointer]);
       leftpointer++;
     }
     else
     {
       ans.push_back(v[leftpointer]*v[leftpointer]);
       rightpointer--;
     }
   }

   for(int i=0;i<2;i++)
   {
     cout<<ans[i]<<" ";
   } 
   cout<<endl;

   return;
}

int main()
{
  int n;  
  cin>>n;

  vector<int> v(n);
 
  for(int i=0;i<n;i++)
  {
    int ele;
    cin>>ele;
    v.push_back(ele);
  }

  sortedsquaredarray(v);

  return 0;
}