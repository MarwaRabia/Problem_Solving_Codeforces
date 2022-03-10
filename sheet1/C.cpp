#include<iostream>
using namespace std;
int binary(int num)
{
    int rem;
    if (num <= 1)
        {
            cout << num;
            return num;
        }
    rem = num % 2;
    binary(num / 2);
    cout << rem;
    return rem;
}
int main()
{
 
    // int a,b;
    
    // cin>> a >> b ;
    
    // cout<< a<<" + "<< b<<" = "<<a+b<<endl;
    // cout<< a<<" * "<< b<<" = "<<a*b<<endl;
    // cout<< a<<" - "<< b<<" = "<<a-b<<endl;
    int f=binary(10000);
    cout<<f;
    
    return 0;
}