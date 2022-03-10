#include<iostream>
using namespace std;

int main()
{

     long long int a,b,c,m,mi,m1,minn;
  cin>> a>>b>>c;
    m=max(a,b);
    m1=max(m,c);
    mi=min(a,b);
    minn=min(mi,c);

    
       cout<< minn <<" "<<m1;
   
       
    return 0;
     
   
    
 }