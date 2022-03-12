#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main()
{
 
    int a,b,r;
    cin>> a>>b ;
    r=gcd(a,b);
    cout<<r;
   

    return 0;
}