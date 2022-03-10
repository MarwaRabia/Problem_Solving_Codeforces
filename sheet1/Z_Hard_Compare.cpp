#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    long long  a,b,c,d;
    double r1,r2;
    cin>> a>>b>>c>>d;
    //because a*b*c*d long numer we not have memory so we a%100

   r1=log(a)*b;
   r2=log(c)*d;
    if(r1>r2)
      cout<<"YES";
    else
      cout<<"NO";


    long double  a,b,c,d;
    cin>>a>>b>>c>>d;
    b=b/1e12;
    d=d/1e12;
    if(pow(a,b)>pow(c,d))
      cout<<"YES";
    else
      cout<<"NO";
      
   

    
    return 0;
}