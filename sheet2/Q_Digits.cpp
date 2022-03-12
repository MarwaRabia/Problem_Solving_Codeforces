#include<iostream>
using namespace std;

int main()
{
 
  
    int b,a,reverse=0,rem;
    cin>> b;
    
    for (int i = 0; i <b; i++)
    {
        cin>> a;
        if (a==0)
        {
            cout<<a;
        }
    else{
        
     while (a!=0)
     {
        rem=a%10;
        reverse=reverse*10+rem;
        cout<<reverse<<" ";
         reverse=0;
        a/=10;
     }
     }
    //  cout<<reverse;
     cout<<endl;
     reverse=0;
     
      
    }
   
       
   

    return 0;
}