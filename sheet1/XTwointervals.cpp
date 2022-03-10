#include <iostream>
using namespace std;

int main()
{
    long long  as,ae, bs,be,os,oe;
    cin>> as>>ae>>bs>>be;
    
   if (as>be | bs>ae)
   {
      cout<<"-1"<<endl;
   }
   else{
       os=max(as,bs);
       oe=min(ae,be);
       cout<<os<<" "<<oe<<endl;
   }
   

    
    return 0;
}