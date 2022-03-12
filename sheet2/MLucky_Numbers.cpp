#include<iostream>
using namespace std;

int main()
{
 
    int a,b,f=1,f2=0,rem=0,j,i;
    cin>> a>>b ;

    for ( i = a; i <=b; i++)
  {
     //cout<<i<<" ";
    j=i;
    //cout<<j<<" ";
       while (j>0)
     {
        rem=j%10;
        //cout<<rem<<" ";
        if (rem!=4 &rem!=7)
        {
          f=0;
          break;
        }
         else
          f=1;
        //cout<<i<<" hh"<<j<<' ';
        
        j/=10;
     }
     if (f==1)
     { 
     // cout<<":::"<<i<<" ";
      cout<<i<<" ";
      f2=1;
     }
      
  }
  if(f2==0)
   cout<<-1;
  
   
       
   

    return 0;
}