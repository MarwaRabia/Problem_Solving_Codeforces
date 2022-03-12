#include<iostream>
using namespace std;

int main()
{
 
  int n,i;
  cin>>n;
  int fib[1000];
  fib[0]=0;
  fib[1]=1;
  for ( i = 2; i <n; i++)
  { 
     int f=fib[i-2];
     int s=fib[i-1];
     fib[i]=f+s;
      
          
      
  }
  for (int i = 0; i < n; i++)
  {
     cout<<fib[i]<<" ";
  }
  
  
   
       
   

    return 0;
}