#include<iostream>
using namespace std;

int main()
{
 
  int n,a,b,i,s=0,sum=0,rem,j;
  cin>>n>>a>>b;
  for ( i = a; i <=n; i++)
  {
    j=i;
       while (j>0)
     {
        rem=j%10;
        s+=rem;
        
        j/=10;
     }
    
     if (s>=a & s<=b)
     { 
      sum+=i;
     }
     s=0;
     
        
  }
  
  cout<<sum;
   
       
   

    return 0;
}