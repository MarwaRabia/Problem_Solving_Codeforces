#include<iostream>
using namespace std;

int main()
{
 
    int a,reverse_number=0,reminder,temp;
    cin>> a ;
    temp=a;
    while (a!=0)
    {
        reminder=a%10;
        reverse_number=reverse_number*10+reminder;
        a/=10;
    }
      cout<<reverse_number<<endl;
      
    if (reverse_number==temp)
    {
        cout<<"YES"<<endl;
    }
    else
         cout<<"NO"<<endl;
    
  
    
       
   

    return 0;
}