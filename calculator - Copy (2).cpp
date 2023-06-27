#include<iostream>
using namespace std;

int main()
{
   int n1,n2;
   cout<<"enter two integers:";
   cin>>n1>>n2;

   cout<<"enter an operator(+,-,*,/,%)"; 
   char op;  
   cin>>op; 
   
   switch (op)
   {
      case '+':
        cout<<"sum is: "<<n1+n2<<endl;
        break; 
      case '-': 
        cout<<"difference is:"<<n1-n2<<endl;  
        break; 
      case '*':
        cout<<"product is:"<<n1*n2<<endl;
        break;
      case '/': 
        cout<<"division is:"<<n1/n2<<endl;
        break;
      case '%':
        cout<<"remainder is:"<<n1%n2<<endl;
        break;
      default:
        cout<<"enter aq valid operator"<<endl;
        break;
   }  
     
    return 0;
}