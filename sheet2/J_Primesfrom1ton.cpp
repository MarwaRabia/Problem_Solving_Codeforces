#include<iostream>
using namespace std;

int main()
{
 
    int a,j=0;
    cin>> a ;
    cout<<2<<" ";
    for (int i = 2; i <=a; i++)
    {
      for ( j = 2; j <= (i/2); j++)
      {
          if (i%j==0)
          {
              j=i;
              break;
          }
          
      }
      if (j!=i)
          {
              cout<<i<<" ";
          }
     
      
    }
   
       
   

    return 0;
}