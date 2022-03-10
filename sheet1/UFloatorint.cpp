#include <iostream>
using namespace std;

int main()
{
   float a;
    
    cin >> a ;
    
    if (a-int(a)==0)
         cout<<"int "<<int(a);
    
    else
       cout<<"float "<<int(a)<<" "<<a-int(a)<<endl;

    return 0;
}