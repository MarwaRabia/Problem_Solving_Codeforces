#include<iostream>
using namespace std;

int main()
{
 
  
    int b;
    cin>> b;
    
    for (int i = b; i>0; i--)
    {
 
     for (int j = 0; j < i; j++)
     {
         cout<<"*";
     }
     cout<<endl;
     
      
    }
   
       
   

    return 0;
}