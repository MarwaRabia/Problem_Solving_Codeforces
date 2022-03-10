#include<iostream>
using namespace std;

int main()
{

     int a,b,c,l,m,s;
  cin>> a>>b>>c;

     if (a>=b&&a>=c)
     {
         l=a;
         s=min(b,c);
         m=max(b,c);
     }
     else if (b>=a&&b>=c)
     {
         l=b;
         s=min(c,a);
         m=max(c,a);
     }
     else{
        l=c;
         s=min(b,a);
         m=max(b,a);
     }
     
     

    
       cout<< s <<"\n"<<m<<"\n"<<l<<endl;
       cout<<"\n"<<a<<endl<<b<<endl<<c;
   
       
    return 0;
     
   
    
 }