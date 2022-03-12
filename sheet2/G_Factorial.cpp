#include<iostream>
using namespace std;

int fib(int n) {
        if (n==0)
            return 0;
        else if (n==1 | n==2)
            return 1;
        else
            return fib(n-1)+fib(n-2);    
    }
    
int main()
{
 
    // long long  a,b,fact=1;
    // cin>> a ;
    // for (int i = 0; i <a; i++)
    // { 
    //     cin>> b ;
    //     for (int j = 1; j <= b; j++)
    //     {
    //         fact*=j;
    //     }
        
    //    cout<<fact<<endl;
    //    fact=1;
    // }
    int a;
    cin>> a;
      
    int c=fib(a);
  
    cout<<c;


    
    
    return 0;
}