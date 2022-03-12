#include<iostream>
using namespace std;

int main()
{
 
  int n,i,s,st;
  cin>>n;
  for ( i = 1; i <= n; i++)
  {
      for ( s = n-i; s>0; s--)
          cout<<" ";
      for (st = 0; st < i+(i-1); st++)
          {
             cout<<"*";
          }
          cout<<"\n";
          
      
  }
  
   
       
   

    return 0;
}