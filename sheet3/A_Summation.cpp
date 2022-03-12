#include<iostream>
using namespace std;

int main()
{
 
    int a;
    long long s=0;
     cin>>a;
   long long A[a];
    for (int i = 0; i < a; i++)
    { cin>> A[i];
        s+=A[i];
    }
    
    
cout<<abs(s);
    
    
    
    return 0;
}