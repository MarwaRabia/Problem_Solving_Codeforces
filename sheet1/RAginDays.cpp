#include <iostream>
using namespace std;

int main()
{
    long long a;
    
    cin >> a ;
    
    cout<<a/365<<" years"<<endl;
    cout<<a%365/30<<" months"<<endl;
    cout<<a%365%30<<" days";

   
      

    return 0;
}