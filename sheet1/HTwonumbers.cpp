#include<iostream>
using namespace std;
int main()
{
    int f;
double a,b,r,c=0;
     cin >> a>> b;
    
     f=a/b;
     cout <<"floor "<<a <<" / "<<b<<" = "<<f<< endl;
     c=a/b;
    if (c-f>0)
      cout <<"ceil "<<a <<" / "<<b<<" = "<<f+1<< endl;
    else
      cout <<"ceil "<<a <<" / "<<b<<" = "<<f<< endl;
    if (c-f>=.5)
      cout <<"round "<<a <<" / "<<b<<" = "<<f+1<< endl;
     else
      cout <<"round "<<a <<" / "<<b<<" = "<<f<< endl;
     

     
    
 }