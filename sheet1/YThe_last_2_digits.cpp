#include <iostream>
using namespace std;

int main()
{
    long long  a,b, c,d,mul,n;
    cin>> a>>b>>c>>d;
    //because a*b*c*d long numer we not have memory so we a%100
    mul=a%100*b%100*c%100*d%100;
    n=mul%100;
    if (n<10)
      cout<<0<<n<<endl;
    else
      cout<<n;
   
   

    
    return 0;
}